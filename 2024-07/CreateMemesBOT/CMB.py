import io
import json
import os
import requests
import sqlite3
import telebot
import time
import math
import numpy as np
import threading
import yt_dlp
from telebot.types import LabeledPrice
from collections import deque
from telebot import types
from collections import defaultdict
from PIL import Image, ImageDraw, ImageFont
from moviepy.editor import VideoFileClip, ImageClip, CompositeVideoClip

# ==================================================
# Основа
bot = telebot.TeleBot('7317399687:AAEIwuaH9SGD95X5bbNGT1rvcLZYLnkNCEg', skip_pending=True)
# ==================================================
# Бета тест
# bot = telebot.TeleBot('6044766068:AAGaVDF_TETMBn7zJKx-2ennKQX6YJ5royk', skip_pending=True)
# ==================================================
# Бета тест (запаска)
# bot = telebot.TeleBot('6125343767:AAELVPvlDF-zakhMN9EtWZoxuvrpUsgbaYQ', skip_pending=True)
# ==================================================

bot_name = "@CreateMemesBOT"
me_id = 1314141010
test = True

YUKASSA_TOKEN = '381764678:TEST:90471'
prices = {
    1: {'tokens': 20, 'price': 65},
    2: {'tokens': 50, 'price': 190},
    3: {'tokens': 150, 'price': 570},
    4: {'tokens': 450, 'price': 1710}
}
yt_prices = [4, 8]

user_data = defaultdict(dict)
demotivator_queue = deque()
video_queue = deque()
video_from_yt_queue = deque()
queue_lock = threading.Lock()
users_in_queue = set()


@bot.message_handler(commands=['start', 'balance'])
def command_handler(message):
    create_database()
    if message.text.startswith('/start'):
        main_manu(message)
    elif message.text.startswith('/balance'):
        to_update_balance(message)


def create_database():
    conn = sqlite3.connect('db.db')
    cursor = conn.cursor()
    cursor.execute('''
    CREATE TABLE IF NOT EXISTS users
    (user_id INTEGER PRIMARY KEY,
     balance INTEGER DEFAULT 0,
     without_id INTEGER DEFAULT 0)
    ''')
    conn.commit()
    conn.close()


def main_manu(message):
    delete_markup = bot.send_message(message.chat.id, '.', reply_markup=types.ReplyKeyboardRemove())
    bot.delete_message(delete_markup.chat.id, delete_markup.message_id)
    markup = types.InlineKeyboardMarkup()
    get_balance_btn = types.InlineKeyboardButton(text='🏪 Магазин', callback_data='shop')
    demotivator = types.InlineKeyboardButton(text='🖼 Создать демотиватор', callback_data='create_demotivator')
    video_to_circle = types.InlineKeyboardButton(text='🔄 Видео в кружок', callback_data='video_to_circle')
    download_yt_video = types.InlineKeyboardButton(text='📥 Скачать видео с YouTube',
                                                   callback_data='download_youtube_video')
    markup.add(demotivator, video_to_circle)
    markup.add(download_yt_video)
    markup.add(get_balance_btn)
    bot.send_message(message.chat.id, f'🌟 *Главное меню* 🌟\nТекущий баланс: {get_balance(message.chat.id)}'
                                      f'ТК\nВыберите действие:', reply_markup=markup,
                     parse_mode='Markdown')


@bot.callback_query_handler(func=lambda message: True)
def callback_back(call):
    chat_id = call.message.chat.id
    if chat_id not in user_data:
        user_data[chat_id] = {'state': None, 'balance': 0}
    bot.delete_message(chat_id, call.message.message_id)
    cancel_markup = types.ReplyKeyboardMarkup(resize_keyboard=True)
    cancel_btn = types.KeyboardButton(text='❌ Отмена')
    cancel_markup.row(cancel_btn)
    replenish_balance_markup = types.InlineKeyboardMarkup()
    replenish_balance_btn = types.InlineKeyboardButton(text='💸 Пополнить баланс', callback_data='replenish_balance')
    cancel_inl_btn = types.InlineKeyboardButton(text='🚪 В меню', callback_data='to_menu')
    replenish_balance_markup.row(replenish_balance_btn)
    replenish_balance_markup.row(cancel_inl_btn)
    if call.data == 'to_menu':
        main_manu(call.message)
    elif call.data == 'create_demotivator':
        bot.send_message(chat_id, 'Отправь мне картинку и текст в формате:\n\nверхний текст\nнижний текст\n\nЧтобы '
                                  'создать демотиватор 👇🏻', reply_markup=cancel_markup)
    elif call.data == 'video_to_circle':
        bot.send_message(chat_id, 'Отправь мне видео\nЧтобы создать кружок 👇🏻', reply_markup=cancel_markup)
    elif call.data == 'download_youtube_video':
        bot.send_message(chat_id, 'Отправь мне ссылку на видео YouTube 👇🏻', reply_markup=cancel_markup)
    elif call.data.startswith('yt_download_'):
        if call.data.endswith('l'):  # MEDIUM
            add_download_yt_video_to_queue(call.message, f"{user_data[chat_id]['youtube_url']} 480")
        elif call.data.endswith('m'):  # GOOD
            if get_balance(chat_id) >= yt_prices[0]:
                update_balance(chat_id, -yt_prices[0])
                add_download_yt_video_to_queue(call.message, f"{user_data[chat_id]['youtube_url']} 720")
            else:
                bot.send_message(chat_id, f'⛔️ Недостаточный баланс\nВаш баланс: {get_balance(chat_id)}\n'
                                          f'Требуется: {yt_prices[0]}ТК', reply_markup=replenish_balance_markup)
        else:  # HIGH
            if get_balance(chat_id) >= yt_prices[1]:
                update_balance(chat_id, -yt_prices[1])
                add_download_yt_video_to_queue(call.message, f"{user_data[chat_id]['youtube_url']} 1080")
            else:
                bot.send_message(chat_id, f'⛔️ Недостаточный баланс\nВаш баланс: {get_balance(chat_id)}\n'
                                          f'Требуется: {yt_prices[1]}ТК', reply_markup=replenish_balance_markup)
    elif call.data == 'shop':
        shop_markup = types.InlineKeyboardMarkup()
        disable_id_btn = types.InlineKeyboardButton(text=f'🚫 Отключить ватермарку: {get_without_id(chat_id)} шт.',
                                                    callback_data='disable_id_buy')
        shop_markup.row(disable_id_btn)
        shop_markup.row(replenish_balance_btn)
        shop_markup.row(cancel_inl_btn)
        bot.send_message(chat_id, f'Текущий баланс: {get_balance(chat_id)}ТК.',
                         reply_markup=shop_markup)
    elif call.data == 'disable_id_buy':
        if get_balance(chat_id) >= 10:
            ok = types.InlineKeyboardMarkup()
            ok_btn = types.InlineKeyboardButton(text='✅ Ок', callback_data='shop')
            ok.row(ok_btn)
            update_balance(chat_id, -10)
            update_without_id(chat_id, 10)
            bot.send_message(chat_id, f'Поздравляем! Вы успешно отключили ватермарку.\n'
                                      f'Количество оставшихся отключений: {get_without_id(chat_id)}',
                             reply_markup=ok)
        else:
            bot.send_message(chat_id, f'⛔️ Недостаточный баланс\nВаш баланс: {get_balance(chat_id)}\n'
                                      f'Требуется: 10ТК', reply_markup=replenish_balance_markup)
    elif call.data == 'replenish_balance':
        to_update_balance(call.message)
    elif call.data.startswith('replenish_'):
        user_id = call.from_user.id
        operation = int(call.data.split('_')[1])
        if operation not in prices:
            bot.answer_callback_query(call.id, text="Неверный выбор операции.")
            return
        title = f"Пополнение баланса на {prices[operation]['tokens']}ТК"
        description = f"Вы получите {prices[operation]['tokens']}ТК на ваш баланс."
        invoice_payload = f"replenish_{operation}"
        price = prices[operation]['price']
        prices_list = [LabeledPrice(label='ТК', amount=price * 100)]
        try:
            bot.send_invoice(
                chat_id=user_id,
                title=title,
                description=description,
                invoice_payload=invoice_payload,
                provider_token=YUKASSA_TOKEN,
                start_parameter='test-invoice',
                currency='RUB',
                prices=prices_list,
                need_name=False,
                need_phone_number=False,
                need_email=False,
                need_shipping_address=False,
                is_flexible=False
            )
        except telebot.apihelper.ApiTelegramException as e:
            print(f"Error sending invoice: {e}")


# очередь выполнения
def process_queue():
    while True:
        with queue_lock:
            if video_queue:
                message, file_id = video_queue.popleft()
                chat_id = message.chat.id
                process_video(message, file_id)
            elif demotivator_queue:
                message = demotivator_queue.popleft()
                chat_id = message.chat.id
                process_demotivator(message)
            elif video_from_yt_queue:
                message, video_info = video_from_yt_queue.popleft()
                chat_id = message.chat.id
                process_yt_video(chat_id, video_info)
            else:
                continue
        users_in_queue.remove(chat_id)
        main_manu(message)


# ============ ТК и баланс ============
def get_balance(user_id):
    if user_id == me_id and not test:
        return 999
    elif user_id == 1060373589:  # Марк
        return 999
    else:
        conn = sqlite3.connect('db.db')
        cursor = conn.cursor()
        cursor.execute('SELECT balance FROM users WHERE user_id = ?', (user_id,))
        result = cursor.fetchone()
        if result:
            conn.close()
            return int(result[0])
        else:
            cursor.execute('INSERT INTO users (user_id, balance) VALUES (?, ?)', (user_id, 0))
            conn.commit()
            conn.close()
            return 0


def update_balance(user_id, value):
    new_balance = get_balance(user_id) + value
    conn = sqlite3.connect('db.db')
    cursor = conn.cursor()
    cursor.execute('UPDATE users SET balance = ? WHERE user_id = ?', (new_balance, user_id))
    conn.commit()
    conn.close()


def get_without_id(user_id):
    conn = sqlite3.connect('db.db')
    cursor = conn.cursor()
    cursor.execute('SELECT without_id FROM users WHERE user_id = ?', (user_id,))
    result = cursor.fetchone()
    conn.close()
    if result:
        conn.close()
        return int(result[0])
    else:
        cursor.execute('INSERT INTO users (user_id, without_id) VALUES (?, ?)', (user_id, 0))
        conn.commit()
        conn.close()
        return 0


def update_without_id(user_id, value):
    without_id = get_without_id(user_id) + value
    conn = sqlite3.connect('db.db')
    cursor = conn.cursor()
    cursor.execute('UPDATE users SET without_id = ? WHERE user_id = ?', (without_id, user_id))
    conn.commit()
    conn.close()


def to_update_balance(message):
    keyboard = telebot.types.InlineKeyboardMarkup()
    to_menu = types.InlineKeyboardButton(text='🚪 В меню', callback_data='to_menu')
    for key, value in prices.items():
        keyboard.add(telebot.types.InlineKeyboardButton(
            text=f"{value['tokens']}ТК за {value['price']}RUB",
            callback_data=f"replenish_{key}"
        ))
    keyboard.add(to_menu)
    bot.send_message(message.chat.id, "Выберите сумму для пополнения:\n\nРЕЖИМ ТЕСТИРОВАНИЯ\n"
                                      "Используйте данные этой карты:\n| 1111 1111 1111 1026 | 12/22 | 000 |",
                     reply_markup=keyboard)


@bot.pre_checkout_query_handler(func=lambda query: True)
def pre_checkout(pre_checkout_query):
    bot.answer_pre_checkout_query(pre_checkout_query.id, ok=True)


@bot.message_handler(content_types=['successful_payment'])
def successful_payment(message):
    payment_info = message.successful_payment
    user_id = message.from_user.id
    operation = int(payment_info.invoice_payload.split('_')[1])
    tokens_added = prices[operation]['tokens']
    update_balance(user_id, tokens_added)
    to_menu = types.InlineKeyboardMarkup()
    to_menu_btn = types.InlineKeyboardButton(text='🚪 В меню', callback_data='to_menu')
    to_menu.row(to_menu_btn)
    bot.send_message(
        user_id,
        f'Платеж на сумму {payment_info.total_amount // 100} {payment_info.currency} выполнен успешно.\n'
        f'Ваш баланс пополнен на {tokens_added}ТК.\n'
        f'Текущий баланс: {get_balance(user_id)}ТК.', reply_markup=to_menu
    )


# =====================================


# ========== Создание кружка ==========
@bot.message_handler(content_types=['video'])
def get_video_to_circle(message):
    chat_id = message.chat.id
    markup = types.InlineKeyboardMarkup()
    retry = types.InlineKeyboardButton(text='🔁Повторить', callback_data='video_to_circle')
    markup.add(retry)
    if message.video:
        file_id = message.video.file_id
        if add_to_queue(message, file_id):
            bot.send_message(chat_id, 'Ваше видео добавлено в очередь. Мы уведомим вас, когда кружок будет готов.',
                             reply_markup=types.ReplyKeyboardRemove())
        else:
            bot.reply_to(message,
                         "Вы уже находитесь в очереди. Пожалуйста, дождитесь обработки вашего предыдущего запроса.",
                         reply_markup=types.ReplyKeyboardRemove())
    else:
        bot.send_message(chat_id, 'Пожалуйста, отправьте видео.', reply_markup=markup)


def remove_directory(path):
    max_attempts = 10
    attempt = 0
    while attempt < max_attempts:
        try:
            for root, dirs, files in os.walk(path, topdown=False):
                for file in files:
                    file_path = os.path.join(root, file)
                    os.chmod(file_path, 0o777)
                    os.remove(file_path)
                for dir1 in dirs:
                    dir_path = os.path.join(root, dir1)
                    os.chmod(dir_path, 0o777)
                    os.rmdir(dir_path)
            os.rmdir(path)
            print(f"Удалось удалить папку {path}")
            return True
        except Exception as e:
            print(f"Попытка {attempt + 1}: Не удалось удалить папку {path}: {e}")
            attempt += 1
            time.sleep(1)
    print(f"Не удалось удалить папку {path} после {max_attempts} попыток")
    return False


def create_video_circle(chat_id, file_id, did_watermark):
    video_id = file_id
    file_info = bot.get_file(video_id)
    output_folder = f'{chat_id}_video_to_circle'
    os.makedirs(output_folder, exist_ok=True)
    input_video_path = os.path.join(output_folder, 'input_video.mp4')
    downloaded_file = bot.download_file(file_info.file_path)
    with open(input_video_path, 'wb') as new_file:
        new_file.write(downloaded_file)
    current_dir = os.getcwd()
    try:
        os.chdir(output_folder)
        video = VideoFileClip('input_video.mp4')
        width, height = video.size
        min_dimension = min(width, height)
        square_video = video.crop(x_center=width // 2, y_center=height // 2, width=min_dimension,
                                  height=min_dimension)
        resized_video = square_video.resize((640, 640))
        if resized_video.duration > 60:
            resized_video = resized_video.subclip(0, 60)
        mask = Image.new('L', (640, 640), 0)
        draw = ImageDraw.Draw(mask)
        draw.ellipse((0, 0, 640, 640), fill=255)
        text_image = Image.new('RGBA', (640, 640), (0, 0, 0, 0))
        text_draw = ImageDraw.Draw(text_image)
        font = ImageFont.truetype("arial.ttf", 20)
        text = bot_name
        center = (320, 320)
        radius = 300
        start_angle = 130
        for i, char in enumerate(text):
            angle = start_angle - i * 5
            x = center[0] + radius * math.cos(math.radians(angle))
            y = center[1] + radius * math.sin(math.radians(angle))
            for offset in [(1, 1), (-1, -1), (1, -1), (-1, 1)]:
                text_draw.text((x + offset[0], y + offset[1]), char, font=font, fill=(0, 0, 0, 255), anchor="mm")
            text_draw.text((x, y), char, font=font, fill=(255, 255, 255, 255), anchor="mm")
        if not did_watermark:
            final_clip = resized_video
        else:
            text_clip = ImageClip(np.array(text_image)).set_duration(resized_video.duration)
            final_clip = CompositeVideoClip([resized_video, text_clip])
        output_video_path = 'output_video.mp4'
        final_clip.write_videofile(output_video_path)
        video.close()
    finally:
        os.chdir(current_dir)
    return os.path.join(output_folder, 'output_video.mp4')


def process_video(message, file_id):
    chat_id = message.chat.id
    did_watermark = True
    if get_without_id(chat_id) > 0:
        update_without_id(chat_id, -1)
        did_watermark = False
    output_video_path = create_video_circle(chat_id, file_id, did_watermark)
    if output_video_path:
        with open(output_video_path, 'rb') as video_file:
            bot.send_video_note(chat_id, video_file)
        remove_directory(f'{chat_id}_video_to_circle')
    bot.send_message(chat_id, '✅Кружок создан и отправлен!')


def add_to_queue(message, file_id):
    chat_id = message.chat.id
    with queue_lock:
        if chat_id not in users_in_queue:
            video_queue.append((message, file_id))
            users_in_queue.add(chat_id)
            return True
        else:
            return False


# =====================================


# ======= Создание демотиватора =======
@bot.message_handler(content_types=['photo'])
def get_image_and_text(message):
    chat_id = message.chat.id
    markup = types.InlineKeyboardMarkup()
    retry = types.InlineKeyboardButton(text='🔁Повторить', callback_data='create_demotivator')
    markup.add(retry)
    if message.photo and message.caption:
        file_id = message.photo[-1].file_id
        caption = message.caption.split('\n')
        if len(caption) == 2:
            if add_to_demotivator_queue(message):
                bot.send_message(chat_id, 'Демотиватор добавлен в очередь. Пожалуйста, подождите⌛️',
                                 reply_markup=types.ReplyKeyboardRemove())
                user_data[chat_id]['photo'] = file_id
                user_data[chat_id]['top_text'] = caption[0]
                user_data[chat_id]['bottom_text'] = caption[1]
                demotivator_queue.append(message)
            else:
                bot.reply_to(message,
                             "Вы уже находитесь в очереди. Пожалуйста, дождитесь обработки вашего предыдущего запроса.",
                             reply_markup=types.ReplyKeyboardRemove())
        else:
            bot.send_message(chat_id,
                             'Пожалуйста, введите текст в правильном формате:\nверхний текст\nнижний текст',
                             reply_markup=markup)
    else:
        bot.send_message(chat_id, 'Пожалуйста, отправьте изображение и текст в правильном формате.',
                         reply_markup=markup)


def add_to_demotivator_queue(message):
    chat_id = message.chat.id
    with queue_lock:
        if chat_id not in users_in_queue:
            users_in_queue.add(chat_id)
            return True
        else:
            return False


def process_demotivator(message):
    chat_id = message.chat.id
    output = create_demotivator(message)
    bot.send_photo(chat_id, output, reply_markup=types.ReplyKeyboardRemove())
    bot.send_message(chat_id, '✅Демотиватор создан и отправлен!')


def create_demotivator(message):
    chat_id = message.chat.id
    start_x, start_y = 54, 50
    end_x, end_y = 623, 597
    bg_image = Image.open('demotivator.png')
    file_info = bot.get_file(user_data[chat_id]['photo'])
    downloaded_file = bot.download_file(file_info.file_path)
    user_image = Image.open(io.BytesIO(downloaded_file))
    user_image = user_image.resize((end_x - start_x, end_y - start_y))
    bg_image.paste(user_image, (start_x, start_y))
    draw = ImageDraw.Draw(bg_image)
    font_path = 'arial.ttf'
    top_text = user_data[chat_id]['top_text']
    top_font_size = fit_text(top_text, end_x - start_x - 20, font_path, False)
    bottom_text = user_data[chat_id]['bottom_text']
    bottom_font_size = fit_text(bottom_text, end_x - start_x - 20, font_path, True)
    draw_text(chat_id, draw, bg_image, top_text, top_font_size, bottom_text, bottom_font_size, font_path, end_y)
    output = io.BytesIO()
    bg_image.save(output, format='PNG')
    output.seek(0)
    return output


def fit_text(text, max_width, font_path, its_bottom):
    font_size = 1
    font = ImageFont.truetype(font_path, font_size)
    while font.getbbox(text)[2] < max_width:
        font_size += 1
        if font_size >= 40 or (its_bottom and font_size >= 35):
            break
        font = ImageFont.truetype(font_path, font_size)
    return font_size - 1


def draw_text(user_id, draw, bg_image, top_text, top_font_size, bottom_text, bottom_font_size, font_path, end_y):
    bot_font = ImageFont.truetype(font_path, 12)
    bot_width, bot_height = bot_font.getbbox(bot_name)[2:]
    bot_x, bot_y = 60, 598 - bot_height // 4.0
    top_font = ImageFont.truetype(font_path, top_font_size)
    top_text_width, top_text_height = top_font.getbbox(top_text)[2:]
    top_text_x = (bg_image.width - top_text_width) // 2
    top_text_y = end_y + 20
    bottom_font = ImageFont.truetype(font_path, bottom_font_size)
    bottom_text_width, bottom_text_height = bottom_font.getbbox(bottom_text)[2:]
    bottom_text_x = (bg_image.width - bottom_text_width) // 2
    bottom_text_y = top_text_y + top_text_height + 30
    draw.text((top_text_x, top_text_y), top_text, font=top_font, fill=(255, 255, 255))
    draw.text((bottom_text_x, bottom_text_y), bottom_text, font=bottom_font, fill=(255, 255, 255))
    rect_x1 = bot_x - 2
    rect_y1 = bot_y - 2
    rect_x2 = bot_x + bot_width + 2
    rect_y2 = bot_y + bot_height + 2
    if get_without_id(user_id) > 0:
        update_without_id(user_id, -1)
    else:
        draw.rectangle([(rect_x1, rect_y1), (rect_x2, rect_y2)], fill=(0, 0, 0), width=2)
        draw.text((bot_x, bot_y), bot_name, font=bot_font, fill=(255, 255, 255))


# =====================================


# ========= Загрузка видео YT =========
def get_resolution(message):
    chat_id = message.chat.id
    markup = types.InlineKeyboardMarkup()
    medium_resolution = types.InlineKeyboardButton(text='🔸 480p 🔸 БЕСПЛАТНО',
                                                   callback_data='yt_download_l')
    good_resolution = types.InlineKeyboardButton(text=f'🔷 HD 720p 🔷 {yt_prices[0]}ТК',
                                                 callback_data='yt_download_m')
    high_resolution = types.InlineKeyboardButton(text=f'🔶 Full HD 1080p 🔶 {yt_prices[1]}ТК',
                                                 callback_data='yt_download_g')
    markup.row(medium_resolution)
    markup.row(good_resolution)
    markup.row(high_resolution)
    bot.send_message(chat_id, 'Выберите желаемое качество видео', reply_markup=markup)


def add_download_yt_video_to_queue(message, video_info):
    if add_to_yt_queue(message, video_info):
        bot.send_message(message.chat.id, 'Ваше видео добавлено в очередь. Мы уведомим вас, когда кружок будет готов.',
                         reply_markup=types.ReplyKeyboardRemove())
    else:
        bot.reply_to(message,
                     "Вы уже находитесь в очереди. Пожалуйста, дождитесь обработки вашего предыдущего запроса.",
                     reply_markup=types.ReplyKeyboardRemove())


def process_yt_video(chat_id, video_info):
    download_youtube_video(chat_id, video_info)
    bot.send_message(chat_id, '✅Видео загружено и отправлено!')


def add_to_yt_queue(message, video_info):
    chat_id = message.chat.id
    with queue_lock:
        if chat_id not in users_in_queue:
            video_from_yt_queue.append((message, video_info))
            users_in_queue.add(chat_id)
            return True
        else:
            return False


def download_youtube_video(chat_id, video_info):
    try:
        parts = video_info.split()
        if len(parts) != 2:
            bot.send_message(chat_id, 'Пожалуйста, отправьте URL и разрешение, разделенные пробелом.')
            return
        url, resolution = parts
        filename, video_title = download_video_from_youtube(chat_id, url, int(resolution))
        file_size = os.path.getsize(filename)
        max_video_size = 50 * 1024 * 1024
        max_file_size = 2000 * 1024 * 1024
        if file_size <= max_video_size:
            with open(filename, 'rb') as video_file:
                bot.send_video(chat_id, video_file)
        elif file_size <= max_file_size:
            upload_url = "https://base-escape.ru/uploads/upload.php"
            files = {
                'video': (filename, open(filename, 'rb')),
                'password': ('EXqwFGsx505', 'EXqwFGsx505')
            }
            response = requests.post(upload_url, files=files)
            if response.status_code == 200:
                try:
                    response_data = response.json()
                    if 'download_url' in response_data:
                        download_url = response_data['download_url']
                        bot.send_message(chat_id, f"Видео доступно для скачивания по ссылке: "
                                                  f"https://base-escape.ru/uploads/download.php?file="
                                                  f"{download_url}")
                    elif 'errors' in response_data:
                        bot.send_message(chat_id,
                                         f"Произошла ошибка при загрузке файла: {', '.join(response_data['errors'])}")
                    else:
                        bot.send_message(chat_id, f"Неожиданный ответ сервера: {response_data}")
                except json.JSONDecodeError:
                    bot.send_message(chat_id,
                                     f"Сервер вернул неверный формат ответа. Ответ сервера: {response.text}")
            else:
                bot.send_message(chat_id,
                                 f"Произошла ошибка при загрузке файла на сервер. Код ошибки: {response.status_code}")
        else:
            bot.send_message(chat_id,
                             f'Файл слишком большой (размер: {file_size // (1024 * 1024):.2f} MB)')
        bot.send_message(chat_id, f'Видео: {video_title} успешно загружено!')
        os.remove(filename)
    except Exception as e:
        bot.send_message(chat_id, f'Произошла ошибка: {str(e)}')


def download_video_from_youtube(chat_id, url, resolution):
    ydl_opts = {
        'format': f'bestvideo[height<={resolution}]+bestaudio/best[height<={resolution}]/best',
        'outtmpl': '%(title)s.%(ext)s',
        'noplaylist': True,
        'merge_output_format': 'mp4',
        'postprocessors': [{
            'key': 'FFmpegVideoConvertor',
            'preferedformat': 'mp4',
        }],
        'verbose': True
    }
    with yt_dlp.YoutubeDL(ydl_opts) as ydl:
        info = ydl.extract_info(url, download=False)
        formats = info['formats']
        available_resolutions = set(int(f['height']) for f in formats if f.get('height'))
        if resolution not in available_resolutions:
            closest_resolution = min(available_resolutions, key=lambda x: abs(x - resolution))
            bot.send_message(chat_id,
                             f'Запрошенное разрешение недоступно. Загружаю ближайшее доступное: '
                             f'{closest_resolution}p')
            resolution = closest_resolution
        ydl_opts['format'] = f'bestvideo[height<={resolution}]+bestaudio/best[height<={resolution}]/best'
        info = ydl.extract_info(url, download=True)
        video_title = info['title']
        filename = ydl.prepare_filename(info)
        new_filename = filename.replace(' ', '_')
        os.rename(filename, new_filename)
        filename = new_filename
        return filename, video_title


# =====================================


@bot.message_handler(content_types=['text'])
def go_main_menu(message):
    text = message.text
    if text == '❌ Отмена':
        user_data[message.chat.id]['state'] = None
        main_manu(message)
    elif text.startswith('https://'):
        if 'youtube.com' in text or 'youtu.be' in text:
            user_data[message.chat.id]['youtube_url'] = text
            get_resolution(message)


threading.Thread(target=process_queue, daemon=True).start()

bot.polling(none_stop=True)
