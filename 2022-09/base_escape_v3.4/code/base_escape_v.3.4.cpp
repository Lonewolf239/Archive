#include <iostream>
#include <fstream>
#include <conio.h>
#include <locale>
#include <windows.h>

using namespace std;

//основные настройки и достижения
int ndeath = 0, nsave = 0, nmoves = 0, timr = 45; float x_pl = 0;
bool achievements1 = false, achievements2 = false, achievements3 = false, achievements4 = false, achievements5 = false, achievements6 = false, somebody = false;
bool Language = true, first_start = true;
//инвентарь часть 1
bool isHasKnife = false, isHasKey1 = false;
//инвентарь часть 2
bool isHasCrowbar = false, isHasMaul = false, isHasExplosives = false;
//инвентарь часть 3
bool isHasKey2 = false, isHasPlanks = false;
//инвентарь часть 4
bool isHasKey3 = false, bedroomOpen = false, isHasBooks = false, isHasFirecracker = false, isHasAmongus = false;
//инвентарь часть 5
bool escpe = false, gameover = false, first_run = true;
bool look_around = false, isHasTrap = false, loop = false;

//костыли функций (часть 1)
void start();
void save();
void location(int loc);
void cycle1();
void window();
void close(int cl);
void door();
void carpter();
void escape();

//костыли функций (часть 2)
void yard(int yr);
void cycle2();
void mansion();
void gate();
void house();
void shed();

//костыли функций (часть 3)
void floor1(int floor1);
void cycle3();
void ladder();
void liver();
void kitchen();
void utroom();

//костыли функций (часть 4)
void floor2(int floor2);
void cycle4();
void cabinet();
void bedroom();
void restroom();
void attic();

//костыли функций (часть 5)
void forest();
void bushes();
void tree();
void barrel();
void path();
void deep_forest();
void right();
void left();

//основные пункты меню
void language();
void main_menu();
void endgame();
void levels();
void developer();
void updet_list();
void achievements();

//часть 1
// 
//main
int main() {
	system("cls");
	setlocale(LC_CTYPE, "rus");
	if (first_start) {
		cout << "WW   WW  EEEEE   LL       CCCC    OOOO   MM   MM  EEEEE\nWW   WW  EE      LL      CC  CC  OO  OO  MMM MMM  EE\nWW W WW  EEEE    LL      CC      OO  OO  MM M MM  EEEE\nWWWWWWW  EE      LL      CC  CC  OO  OO  MM   NN  EE\n WW WW   EEEEE   LLLLLL   CCCC    OOOO   MM   MM  EEEEE" << endl << endl;
		cout << "IIIIII  NN  NN\n  II    NNN NN\n  II    NN NNN\n  II    NN  NN\nIIIIII  NN  NN" << endl << endl;
		cout << "BBBBB    AAAA    SSSS   EEEEE\nBB  BB  AA  AA  SS      EE\nBBBBB   AAAAAA   SSSS   EEEE\nBB  BB  AA  AA      SS  EE\nBBBBB   AA  AA   SSSS   EEEEE" << endl << endl;
		cout << "EEEEE   SSSS    CCCC    AAAA   PPPPP   EEEEE\nEE     SS      CC  CC  AA  AA  PP  PP  EE\nEEEE    SSSS   CC      AAAAAA  PPPPP   EEEE\nEE         SS  CC  CC  AA  AA  PP      EE\nEEEEE   SSSS    CCCC   AA  AA  PP      EEEEE" << endl << endl;
		cout << " 3333       44\n3   33      44  44\n  333       444444\n3   33          44\n 3333   **      44" << endl;
		system("pause");
	}
	main_menu();
	return 0;
}
//Старт
void start() {
	system("cls");
	first_start = false;
	if (Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |    Chapter 1. Basement.   |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nYou woke up in an unknown place. Looks like a basement..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nLooking around, you realized that you did not see anything :(" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nLooking around AT FEEL, you realized that it was a small room...\nYou found:\nWindow 1\nCloset 2\nDoor 3\nCarpet 4" << endl << endl;
	}
	if (!Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |      Глава 1. Подвал.     |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nТы проснулся в неизвестном месте. Напоминает подвал..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nОсмотревшись, ты понял, что ничего не видишь :(" << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nОсмотревшись НА ОЩУПЬ, ты понял, что находишься в маленькой комнате...\nТы нашёл:\nОкно 1\nШкаф 2\nДверь 3\nКовёр 4" << endl << endl;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		location(1);
		break;
	case '2':
		nmoves++;
		location(2);
		break;
	case '3':
		nmoves++;
		location(3);
		break;
	case '4':
		nmoves++;
		location(4);
		break;
	default:
		cycle1();
		break;
	}
}
//загрузка сохранения
void save() {
	system("cls");
	char sae[35];
	ifstream file("C:/Windows/Temp/save.txt");
	if (!file.is_open()) {
		cout << "SAVE FILE MISSING!" << endl;
		system("pause");
		start();
	}
	else {
		isHasKnife = false, isHasKey1 = false, isHasCrowbar = false, isHasMaul = false, isHasExplosives = false, isHasKey2 = false, isHasPlanks = false, isHasKey3 = false, bedroomOpen = false, isHasBooks = false, isHasFirecracker = false, isHasAmongus = false, first_start = true, first_run = true, escpe = false, escpe = false, gameover = false, first_run = true, look_around = false, isHasTrap = false, loop = false, x_pl = 0, timr = 45;
		file.getline(sae, 25);
		file.close();
		if (sae[12] == 'B') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 1;
			nmoves = 12;
			system("pause");
			cycle2();
		}
		if (sae[12] == '5') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 2;
			nmoves = 24;
			system("pause");
			cycle3();
		}
		if (sae[12] == 't') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 3;
			nmoves = 36;
			system("pause");
			cycle4();
		}
		if (sae[12] == 'k') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 4;
			nmoves = 60;
			system("pause");
			forest();
		}
		if (sae[16] == 'F') {
			cout << "LOADING SAVE..." << endl << endl;
			cout << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			nsave = 4;
			nmoves = 72;
			system("pause");
			levels();
		}
	}
}
//подвал
void location(int loc) {
	nmoves++;
	system("cls");
	if (loc == 1) {
		if (Language)
			cout << "___________________________________________\nYou went to the window and tried to open it...it's closed\nLook 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к окну и попытались его открыть... оно закрыто\nОсмотреть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			window();
			break;
		case '2':
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (loc == 2) {
		if (Language)
			cout << "___________________________________________\nYou have reached a closet... it is divided into two compartments, a lower and an upper one.\nOpen up 1\nOpen bottom 2\nLeave 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к шкафу... он разделен на два отделения, нижнее и верхнее.\nОткрыть верхнее 1\nОткрыть нижнее 2\nУйти 3" << endl;
		switch (_getch()) {
		case '1':
			close(1);
			break;
		case '2':
			close(2);
			break;
		case '3':
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (loc == 3) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door... it is locked\nOpen 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери...она закрыта\nОткрыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			door();
			break;
		case '2':
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (loc == 4) {
		if (Language)
			cout << "___________________________________________\nYou looked at the carpet under your feet...\nIt looks like there's something under it...but its edges are concreted...\nInspect 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы посмотрели на ковёр под ногами...\nПохоже что под ним что-то есть...но его края забетонированы...\nИзучить 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			carpter();
			break;
		case '2':
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
}
//цикл подвала
void cycle1() {
	nmoves++;
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou are standing in the center of the basement...\nWindow 1\nCloset 2\nDoor 3\nCarpet 4" << endl;
		if (isHasKnife)
			cout << endl << "You have: Knife..." << endl;
		if (isHasKey1)
			cout << endl << "You have: Key..." << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nТы стоишь в центре подвала...\nОкно 1\nШкаф 2\nДверь 3\nКовёр 4" << endl;
		if (isHasKnife)
			cout << endl << "У тебя есть: Нож..." << endl;
		if (isHasKey1)
			cout << endl << "У тебя есть: Ключ..." << endl;
	}
	switch (_getch()) {
	case '1':
		location(1);
		break;
	case '2':
		location(2);
		break;
	case '3':
		location(3);
		break;
	case '4':
		location(4);
		break;
	default:
		cycle1();
		break;
	}
}
//окно
void window() {
	nmoves++;
	system("cls");
	if (isHasKey1) {
		cout << "		 SSSS    AAAA   UU  UU  LL\n		SS      AA  AA  UU  UU  LL\n		 SSSS   AAAAAA  UU  UU  LL\n		    SS  AA  AA  UU  UU  LL\n		 SSSS   AA  AA   UUUU   LLLLLL" << endl << endl;
		cout << "		 GGGG    OOOO    OOOO   DDDDD   MM   MM   AAAA   NN  NN\n		GG      OO  OO  OO  OO  DD  DD  MMM MMM  AA  AA  NNN NN\n		GG GGG  OO  OO  OO  OO  DD  DD  MM M MM  AAAAAA  NN NNN\n		GG  GG  OO  OO  OO  OO  DD  DD  MM   MM  AA  AA  NN  NN\n		 GGGG    OOOO    OOOO   DDDDD   MM   MM  AA  AA  NN  NN" << endl << endl;
		system("explorer https://youtu.be/jeM9yRJwKl8");
	}
	if (Language)
		cout << "___________________________________________\nYou looked out the window...there is night\nYou turned around and went to the center of the room.." << endl << endl;
	if (!Language)
		cout << "___________________________________________\nВы выглянули в окно...там ночь\nВы повернулись и вернулись в центр комнаты.." << endl << endl;
	system("pause");
	cycle1();
}
//шкаф 
void close(int cl) {
	system("cls");
	if (cl == 1) {
		if (Language)
			cout << "___________________________________________\nYou have opened the top drawer... it is empty\nOpen bottom 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли верхний ящик... он пуст\nОткрыть нижний 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			close(2);
			break;
		case '2':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (cl == 2 && isHasKnife) {
		if (Language)
			cout << "___________________________________________\nYou have opened the bottom drawer... it is empty\nLeave 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли нижний ящик... он пуст\nУйти 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (cl == 2 && isHasKey1) {
		if (Language)
			cout << "___________________________________________\nYou have opened the bottom drawer... it is empty\nLeave 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли нижний ящик... он пуст\nУйти 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (cl == 2 && !isHasKnife) {
		if (Language)
			cout << "___________________________________________\nYou have opened the bottom drawer... there is a knife\nTake knife 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли нижний ящик... там нож\nВзять нож 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			isHasKnife = true;
			if (Language)
				cout << "___________________________________________\nYou took a knife..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы взяли нож..." << endl;
			system("pause");
			cycle1();
			break;
		case '2':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
}
//дверь
void door() {
	int save = 0;
	system("cls");
	if (!isHasKey1) {
		if (Language)
			cout << "___________________________________________\nI can't open this door..." << endl;
		if (!Language)
			cout << "___________________________________________\nЯ не могу открыть эту дверь..." << endl;
		system("pause");
		cycle1();
	}
	if (isHasKey1) {
		if (Language) {
			cout << "___________________________________________\nYou inserted the key into the lock and turned... the lock opened and fell to the floor with a clang of metal..." << endl;
			cout << "Do you want to save your progress?\nYes 1\nNo 2" << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы вставили ключ в замок и повернули... замок открылся и с лязгом металла упал на пол..." << endl;
			cout << "Ты хочешь сохранить свой прогресс?\nДа 1\nНет 2" << endl;
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			save = 1;
			isHasKey1 = false;
			break;
		case '2':
			nmoves++;
			isHasKey1 = false;
			escape();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (save == 1) {
		system("cls");
		ofstream file("C:/Windows/Temp/save.txt");
		if (file.is_open()) {
			file << "lx55GZ6dG6eJBl2oh6S0vtXVS3|MsS";
			file.close();
			cout << "SAVE SUCCESSFUL" << endl << endl << endl;
			nsave++;
			system("pause");
			escape();
		}
	}
}
//кове́р
void carpter() {
	system("cls");
	if (isHasKnife) {
		if (Language)
			cout << "___________________________________________\nYou sat down on the carpet and felt something in the center...\nCut 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы сели на ковёр и почувствовали, что под ним что-то есть...\nРазрезать 1\nУйти 2" << endl;
		switch (_getch())
		{
		case '1':
			nmoves++;
			isHasKey1 = true;
			isHasKnife = false;
			if (Language)
				cout << "___________________________________________\nYou cut the carpet with difficulty... you broke the Knife, but you got the Key from under the carpet" << endl;
			if (!Language)
				cout << "___________________________________________\nВы с трудом разрезали ковёр... вы сломали нож, но при этом достали ключ из углубления под ковром" << endl;
			system("pause");
			cycle1();
			break;
		case '2':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
	if (isHasKey1) {
		if (Language)
			cout << "___________________________________________\nYou looked at the carpet under your feet...\n.....why did you cut it in the shape of Among Us?..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы посмотрели на ковёр...\n.....почему вы разрезали его в форме Амогуса?..." << endl;
		system("pause");
		cycle1();
	}
	if (!isHasKnife) {
		if (Language)
			cout << "___________________________________________\nYou sat down on the carpet and felt something in the center...\nCut 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы сели на ковёр и почувствовали, что под ним что-то есть...\nРазрезать 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou can't do it..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы не можете сделать это..." << endl;
			system("pause");
			cycle1();
			break;
		case '2':
			nmoves++;
			cycle1();
			break;
		default:
			cycle1();
			break;
		}
	}
}
//побег из подвала
void escape() {
	nmoves++;
	system("cls");
	if (Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |      Chapter 2. Yard.     |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "When you opened the door, a stream of fresh night wind immediately flew into your face, and the dim night light filled the room.\nConvinced that everything was safe, you went outside.\nIt was a wonderful cloudless night, which made the whole courtyard perfectly visible.\nYour attention was immediately attracted a large mansion in the center of the courtyard.\nLooking closer, you find:" << endl;
		cout << "Mansion 1\nGate 2\nTreehouse 3\nShed 4" << endl;
	}
	if (!Language) {
		cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |       Глава 2. Двор.      |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
		system("pause");
		system("cls");
		cout << "Открыв дверь, тебе в лицо сразу же ударил поток свежего ночного воздуха, и тусклый ночной свет залил комнату.\nУбедившись, что все в безопасности, вы вышли на улицу.\nЭто была чудесная безоблачная ночь, от чего двор был прекрасно виден.\nВаше внимание сразу же привлек большой особняк в центре двора.\nПриглядевшись, вы нашли:" << endl;
		cout << "Особняк 1\nВорота 2\nДомик на дереве 3\nНебольшой сарайчик 4" << endl;
	}
	switch (_getch()) {
	case '1':
		yard(1);
		break;
	case '2':
		yard(2);
		break;
	case '3':
		yard(3);
		break;
	case '4':
		yard(4);
		break;
	default:
		cycle2();
		break;
	}
}

//часть 2
// 
//двор
void yard(int yr) {
	nmoves++;
	system("cls");
	if (yr == 1) {
		if (Language)
			cout << "___________________________________________\nApproaching the main entrance of the mansion, you saw a huge majestic wooden gate with metal edging\nOpen 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nПодойдя к главному входу в особняк, вы увидели огромные величественные деревянные ворота с металлической окантовкой.\nОткрыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			mansion();
			break;
		case '2':
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (yr == 2) {
		if (Language)
			cout << "___________________________________________\nYou have come to a large iron gate with numerous designs...a bulky old lock hangs on it...\nIt seems that it is no longer possible to open it\nInspect 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к большим железным воротам с многочисленными рисунками... на них висит громоздкий старый замок...\nКажется, что открыть его уже невозможно\nИзучить 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			gate();
			break;
		case '2':
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (yr == 3) {
		if (Language)
			cout << "___________________________________________\nYou came to a tree house...old rotten boards nailed to a tree led into it...\nClimb 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к домику на дереве... в него вели старые гнилые доски, прибитые к дереву...\nЗалезть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			house();
			break;
		case '2':
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (yr == 4) {
		if (Language)
			cout << "___________________________________________\nYou have come to a small shed...\nThe door seems to be open\nEnter 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к маленькому сараю...\nКажется, дверь открыта\nВойти 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			shed();
			break;
		case '2':
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
}
//цикл двора
void cycle2() {
	system("cls");
	if (isHasExplosives) {
		if (Language)
			cout << "___________________________________________\nYou are standing in the middle of the courtyard...\nGate 1\nTreehouse 2\nShed 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы стоите посреди двора...\nВорота 1\nДом на дереве 2\nСарай 3" << endl;
		switch (_getch())
		{
		case '1':
			nmoves++;
			yard(2);
			break;
		case '2':
			nmoves++;
			yard(3);
			break;
		case '3':
			nmoves++;
			yard(4);
			break;
		default:
			cycle2();
			break;
		}
	}
	if (!isHasExplosives) {
		if (Language) {
			cout << "___________________________________________\nYou are standing in the middle of the courtyard...\nMansion 1\nGate 2\nTreehouse 3\nShed 4" << endl;
			if (isHasCrowbar)
				cout << endl << "You have: Crowbar..." << endl;
			if (isHasMaul)
				cout << endl << "You have: Maul..." << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы стоите посреди двора...\nОсобняк 1\nВорота 2\nДом на дереве 3\nСарай 4" << endl;
			if (isHasCrowbar)
				cout << endl << "У вас есть: Монтировка..." << endl;
			if (isHasMaul)
				cout << endl << "У вас есть: Кувалда..." << endl;
		}
		switch (_getch())
		{
		case '1':
			nmoves++;
			yard(1);
			break;
		case '2':
			nmoves++;
			yard(2);
			break;
		case '3':
			nmoves++;
			yard(3);
			break;
		case '4':
			nmoves++;
			yard(4);
			break;
		default:
			cycle2();
			break;
		}
	}
}
//особняк
void mansion() {
	system("cls");
	int save = 0, next, next2;
	if (isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nClosed on the other side...\nTry to open 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nЗакрыто с другой стороны...\nПопробовать открыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nNothing succeeded..." << endl;
			if (!Language)
				cout << "___________________________________________\nНичего не получилось..." << endl;
			system("pause");
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (isHasMaul) {
		if (Language)
			cout << "___________________________________________\nClosed on the other side...\nTry to open 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nЗакрыто с другой стороны...\nПопробовать открыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			next = 1;
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (next == 1) {
		system("cls");
		if (Language) {
			cout << "___________________________________________\nYou hit the door with all your foolishness...\nThe door flew out of its hinges and fell to the floor with a crash..." << endl;
			system("pause");
			system("cls");
			cout << "Do you want to save your progress?\nYes 1\nNo 2" << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы со всей дури ударили по двери...\nДверь слетела с петель и с грохотом упала на пол..." << endl;
			system("pause");
			system("cls");
			cout << "Ты хочешь сохранить свой прогресс?\nДа 1\nНет 2" << endl;
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			save = 1;
			system("cls");
			break;
		case '2':
			nmoves++;
			next2 = 1;
			break;
		default:
			cycle2();
			break;
		}
	}
	if (save == 1) {
		system("cls");
		ofstream file("C:/Windows/Temp/save.txt");
		if (file.is_open()) {
			file << "lx55GZ6dG6eJ5l2oh6S0vtXVS3|MsS";
			file.close();
			cout << "SAVE SUCCESSFUL" << endl << endl << endl;
			nsave++;
			system("pause");
			next2 = 1;
		}
	}
	if (next2 == 1) {
		system("cls");
		if (Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |  Chapter 3. First floor.  |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			isHasCrowbar = false;
			isHasMaul = false;
			cout << "___________________________________________\nYou entered a huge lobby... there was a large T-shaped staircase in its center... the first thing that caught your attention:\nStaircase 1\nLounge 2\nKitchen 3\nStorage 4" << endl;
		}
		if (!Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |   Глава 3. Первый этаж.   |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			isHasCrowbar = false;
			isHasMaul = false;
			cout << "___________________________________________\nВы вошли в огромный вестибюль... в его центре была большая Т-образная лестница... первое, что привлекло ваше внимание:\nЛестница 1\nГостинная 2\nКухня 3\nКладовка 4" << endl;
		}
		switch (_getch()) {
		case '1':
			nmoves++;
			floor1(1);
			break;
		case '2':
			nmoves++;
			floor1(2);
			break;
		case '3':
			nmoves++;
			floor1(3);
			break;
		case '4':
			nmoves++;
			floor1(4);
			break;
		default:
			cycle3();
			break;
		}
	}
	if (!isHasMaul) {
		if (Language)
			cout << "___________________________________________\nYou examined the door of the mansion... it seems to be closed on the other side..." << endl;
		if (!Language)
			cout << "___________________________________________\nВы осмотрели дверь особняка... кажется, она закрыта с другой стороны..." << endl;
		system("pause");
		cycle2();
	}
}
//ворота
void gate() {
	int sav = 0, nex = 0;
	system("cls");
	if (isHasExplosives) {
		system("cls");
		if (Language)
			cout << "Do you want to save your progress?\nYes 1\nNo 2" << endl;
		if (!Language)
			cout << "Вы хотите сохранить свой прогресс?\nДа 1\nНет 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			sav = 1;
			break;
		case '2':
			nmoves++;
			nex = 1;
			break;
		default:
			forest();
			break;
		}
		if (sav == 1) {
			system("cls");
			ofstream file("C:/Windows/Temp/save.txt");
			if (file.is_open()) {
				file << "lx55GZ6dG6eJkl2oh6S0vtXVS3|MsS";
				file.close();
				cout << "SAVE SUCCESSFUL" << endl << endl << endl;
				nsave++;
				system("pause");
			}
			nex = 1;
		}
		if(nex == 1)
			forest();
	}
	if (isHasMaul) {
		if (Language)
			cout << "___________________________________________\nYou swung your arm around and hit the castle with a sledgehammer...the castle shattered...you opened the gate\nEscape 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы со всей дури ударили по замку...замок разлетелся вдребезги...вы открыли ворота\nСбежать 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			system("cls");
			system("explorer https://youtu.be/dQw4w9WgXcQ");
			cout << endl << endl << "	IIIIII   WW   WW   AAAA    SSSS\n	  II     WW   WW  AA  AA  SS\n	  II     WW W WW  AAAAAA   SSSS\n	  II     WWWWWWW  AA  AA      SS\n	IIIIII    WW WW   AA  AA   SSSS" << endl << endl;
			cout << "	KK  KK  IIIIII  DDDDD   DDDDD   IIIIII  NN  NN   GGGG   ))   ))   ))\n	KK KK     II    DD  DD  DD  DD    II    NNN NN  GG       ))   ))   ))\n	KKKK      II    DD  DD  DD  DD    II    NN NNN  GG GGG    )    )    )\n	KK KK     II    DD  DD  DD  DD    II    NN  NN  GG  GG   ))   ))   ))\n	KK  KK  IIIIII  DDDDD   DDDDD   IIIIII  NN  NN   GGGG   ))   ))   ))" << endl << endl;
			if (Language)
				cout << "___________________________________________\nYou swung around and hit the castle with a sledgehammer... the castle was not damaged, but your hands were very sore\nLeave 1" << endl;
			if (!Language)
				cout << "___________________________________________\nВы со всей силы ударили кувалдой по замку... замок не пострадал, но ваши руки сильно заболели" << endl;
			system("pause");
			cycle2();
			break;
		default:
			gate();
		}
	}
	if (isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nYou tried to remove it with a tire iron...no result\nLeave 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы пытались снять его монтировкой... безрезультатно.\nУйти 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (!isHasMaul) {
		if (Language)
			cout << "___________________________________________\nAfter examining the lock, you realized... that it has not been operational for a long time, but it is very durable...\nLeave 1" << endl;
		if (!Language)
			cout << "___________________________________________\nОсмотрев замок, вы поняли... что он давно проржавевший, но очень прочный...\nУйти 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
}
//домик на дереве
void house() {
	system("cls");
	if (isHasMaul || isHasExplosives) {
		if (Language)
			cout << "___________________________________________\nThere is nothing interesting there... I don't want to go up there" << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного... я не хочу туда подниматься" << endl;
		system("pause");
		cycle2();
	}
	if (!isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nClimbing up the stairs to a small balcony, you saw that the entrance to the house was boarded up...\nTry to tear off the boards 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nПоднявшись по лестнице на небольшой балкон, вы увидели, что вход в дом заколочен досками...\nПопробовать оторвать доски 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nCompletely sick?! How can I tear the boards off with my bare hands?.." << endl;
			if (!Language)
				cout << "___________________________________________\nСовсем больной?! Как я могу голыми руками оторвать доски?.." << endl;
			system("pause");
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
	if (isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nClimbing up the stairs to a small balcony, you saw that the entrance to the house was boarded up...\nTry to tear off the boards 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nПоднявшись по лестнице на небольшой балкон, вы увидели, что вход в дом заколочен досками...\nПопробовать оторвать доски 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nAfter tearing off the boards and going inside, you saw a small box...\nYou found a sledgehammer...but since the crowbar was very rusty, it broke with a bang in the middle..." << endl;
			if (!Language)
				cout << "___________________________________________\nОторвав доски и зайдя внутрь, вы увидели небольшой ящик...\nВы нашли кувалду...но так как монтировка была очень ржавой, она с треском разломалась надвое..." << endl;
			isHasCrowbar = false;
			isHasMaul = true;
			system("pause");
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
}
//сарайчик
void shed() {
	system("cls");
	if (isHasCrowbar || isHasMaul || isHasExplosives) {
		if (Language)
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		system("pause");
		cycle2();
	}
	if (!isHasCrowbar) {
		if (Language)
			cout << "___________________________________________\nWhen you open the door and go inside...you can't see anything..again\nTurn on the light 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли дверь и зашли внутрь...вы ничего не видите...снова\nВключить свет 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nTurning on the light, you saw a crowbar lying on a shelf\nYou took a tire iron" << endl;
			if (!Language)
				cout << "___________________________________________\nВключив свет, вы увидели монтировку лежащую на полке\nВы взяли монтировку" << endl;
			isHasCrowbar = true;
			system("pause");
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle2();
			break;
		default:
			cycle2();
			break;
		}
	}
}

//часть 3
// 
//первый этаж
void floor1(int floor1) {
	nmoves++;
	system("cls");
	if (floor1 == 1) {
		if (!isHasPlanks) {
			if (Language)
				cout << "___________________________________________\nYou have come to a T-shaped staircase...a few planks are broken in the middle of the junction\nIt looks like you can jump over\nJump 1\nLeave 2" << endl;
			if (!Language)
				cout << "___________________________________________\nВы подошли к Т-образной лестнице... несколько досок сломаны посередине лестницы\nПохоже можно перепрыгнуть\nПрыгнуть 1\nУйти 2" << endl;
			switch (_getch()) {
			case '1':
				ladder();
				break;
			case '2':
				cycle3();
				break;
			default:
				cycle3();
				break;
			}
		}
		if (isHasPlanks) {
			if (Language)
				cout << "___________________________________________\nYou've come to a T-shaped staircase...a few planks are broken in the middle of the junction\nBut now you can make a bridge\nMake bridge 1\nLeave 2" << endl;
			if (!Language)
				cout << "___________________________________________\nВы подошли к Т-образной лестнице... несколько досок сломаны посередине лестницы\nНо теперь вы можете сделать мост\nСделать мост 1\nУйти 2" << endl;
			switch (_getch()) {
			case '1':
				ladder();
				break;
			case '2':
				cycle3();
				break;
			default:
				cycle3();
				break;
			}
		}
	}
	if (floor1 == 2) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door\nThe door is open\nEnter 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери\nДверь открыта\nЗайти 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			liver();
			break;
		case '2':
			cycle3();
			break;
		default:
			cycle3();
			break;
		}
	}
	if (floor1 == 3) {
		if (Language)
			cout << "___________________________________________\nYou approached the kitchen\nLooks open\nEnter 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к кухне\nПохоже открыто\nЗайти 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			kitchen();
			break;
		case '2':
			cycle3();
			break;
		default:
			cycle3();
			break;
		}
	}
	if (floor1 == 4) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door\nThe door is closed\nEnter 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери\nДверь закрыта\nЗайти 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			utroom();
			break;
		case '2':
			cycle3();
			break;
		default:
			cycle3();
			break;
		}
	}
}
//цикл первого этажа
void cycle3() {
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou are standing in the center of the hallway...\nStaircase 1\nLounge 2\nKitchen 3\nStorage 4" << endl;
		if (isHasPlanks)
			cout << endl << "You have: Planks..." << endl;
		if (isHasKey2)
			cout << endl << "You have: Key..." << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nВы стоите в центре прихожей...\nЛестница 1\nГостинная 2\nКухня 3\nКладовка 4" << endl;
		if (isHasPlanks)
			cout << endl << "У вас есть: Доски..." << endl;
		if (isHasKey2)
			cout << endl << "У вас есть: Ключ..." << endl;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		floor1(1);
		break;
	case '2':
		nmoves++;
		floor1(2);
		break;
	case '3':
		nmoves++;
		floor1(3);
		break;
	case '4':
		nmoves++;
		floor1(4);
		break;
	default:
		cycle3();
		break;
	}
}
//лестница
void ladder() {
	system("cls");
	int save = 0, next, next2;
	if (isHasPlanks) {
		if (Language)
			cout << "___________________________________________\nYou put down the plank and fixed it a little with nails\nNow you can go up to the second floor\nEnter 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы положили доску и немного закрепили ее гвоздями\nТеперь вы можете подняться на второй этаж\nПодняться 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			next = 1;
			break;
		default:
			cycle3();
			break;
		}
	}
	if (next == 1) {
		system("cls");
		if (Language)
			cout << "Do you want to save your progress?\nYes 1\nNo 2" << endl;
		if (!Language)
			cout << "Вы хотите сохранить свой прогресс?\nДа 1\nНет 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			save = 1;
			break;
		case '2':
			nmoves++;
			next2 = 1;
			break;
		default:
			cycle3();
			break;
		}
	}
	if (save == 1) {
		system("cls");
		ofstream file("C:/Windows/Temp/save.txt");
		if (file.is_open()) {
			file << "lx55GZ6dG6eJtl2oh6S0vtXVS3|MsS";
			file.close();
			cout << "SAVE SUCCESSFUL" << endl << endl << endl;
			nsave++;
			system("pause");
			next2 = 1;
		}
	}
	if (next2 == 1) {
		system("cls");
		if (Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |  Chapter 4. Second floor. |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			cout << "___________________________________________\nYou climbed to the second floor...the floor creaked under your feet, but looking around you found:\nCabinet 1\nBedroom 2\nRestroom 3\nAttic 4" << endl;
		}
		if (!Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |   Глава 4. Второй этаж.   |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			cout << "___________________________________________\nВы залезли на второй этаж...пол скрипел под вашими ногами, осмотревшись вы нашли:\nКабинет 1\nСпяльню 2\nКомнату отдыха 3\nЧердак 4" << endl;
		}
		isHasKey2 = false;
		isHasPlanks = false;
		switch (_getch()) {
		case '1':
			nmoves++;
			floor2(1);
			break;
		case '2':
			nmoves++;
			floor2(2);
			break;
		case '3':
			nmoves++;
			floor2(3);
			break;
		case '4':
			nmoves++;
			floor2(4);
			break;
		default:
			cycle4();
			break;
		}
	}
	if (!isHasPlanks) {
		if (Language)
			cout << "___________________________________________\nYou ran hard...but tripped over a protruding nail and fell into a hole...\nYOU ARE DEAD\n" << endl;
		if (!Language)
			cout << "___________________________________________\nВы разбежались изо всех сил... но споткнулись о торчащий гвоздь и упали в яму...\nВЫ МЕРТВЫ\n" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		ndeath++;
		system("pause");
		main();
	}
}
//гостинная
void liver() {
	system("cls");
	if (isHasKey2 || isHasPlanks) {
		if (Language)
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		system("pause");
		cycle3();
	}
	if (!isHasKey2) {
		if (Language)
			cout << "___________________________________________\nEntering the living room you saw a large oval table with a bunch of chairs\nComing closer you found a large birthday cake\nLooks delicious.\nTry a cake 1\nDon't try the cake 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВойдя в гостиную, вы увидели большой овальный стол с кучей стульев.\nПодойдя поближе, вы обнаружили большой праздничный торт.\nВыглядит аппетитно.\nПопробовать торт 1\nНе пробовать торт 2." << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou've tasted the cake...and it's damn delicious!..although with some strange aftertaste\nYour stomach hurts sharply...\nYou feel unbearable pain...\nYOU ARE DEAD" << endl;
			if (!Language)
				cout << "___________________________________________\nВы попробовали торт...и он чертовски вкусный!..хоть и с каким-то странным привкусом\nЖивот резко разболелся...\nВы чувствуете невыносимую боль...\nВЫ МЕРТВЫ" << endl;
			cout << endl << "		 CCCC    AAAA   KK  KK  EEEEE\n		CC  CC  AA  AA  KK KK   EE\n		CC      AAAAAA  KKKK    EEEE\n		CC  CC  AA  AA  KK KK   EE\n		 CCCC   AA  AA  KK  KK  EEEEE" << endl << endl;
			cout << "		IIIIII   SSSS      AAAA\n		  II    SS        AA  AA\n		  II     SSSS     AAAAAA\n		  II        SS    AA  AA\n		IIIIII   SSSS     AA  AA" << endl << endl;
			cout << "		LL      IIIIII  EEEEE\n		LL        II    EE\n		LL        II    EEEE\n		LL        II    EE\n		LLLLLL  IIIIII  EEEEE" << endl << endl;
			cout << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl;
			system("pause");
			ndeath++;
			main();
			break;

		case '2':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou decided not to eat this rubbish, because CAKE IS A LIE...\nSo you took it and threw the cake on the floor\nThere was a key under the cake" << endl;
			if (!Language)
				cout << "___________________________________________\nВы решили не есть эту дрянь, потому что ТОРТ ЭТО ЛОЖЬ...\nВы взяли торт и бросили его на пол\nПод тортом был ключ" << endl;
			isHasKey2 = true;
			system("pause");
			cycle3();
			break;
		default:
			cycle3();
			break;
		}
	}
}
//кухня
void kitchen() {
	nmoves++;
	system("cls");
	if (Language) {
		cout << "___________________________________________\nEntering the kitchen, you saw... the kitchen is AMAZING...\nThere is a lot of food on the table...the air smells of freshly cooked food...\nYou really wanted to eat\nGoing to the table, you were unable to stop\nSitting at the table and when you start eating you immediately feel how delicious this food is" << endl;
		system("pause");
		system("cls");
		cout << "_____________________________________\nYou have been sitting and eating for about 10 minutes, when suddenly you felt a blow to your back, and then unbearable pain...\nAfter that, someone grabbed you and threw you to the floor...\nBefore you died, you only managed to see an ax flying at you\nYOU ARE DEAD" << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nЗайдя на кухню, вы увидели... кухню УДИВИТЕЛЬНО...\nНа столе стояло много еды...в воздухе ведает аромат свежеприготовленной едой...\nВам очень захотелось есть\nПодходя к столу, вы не смогли остановиться\nСев за стол и попробовав еду, вы поняли насколько она вкусная" << endl;
		system("pause");
		system("cls");
		cout << "_____________________________________\nВы сидели и ели около 10 минут, как вдруг почувствовали удар в спину, а затем невыносимую боль...\nПосле этого кто-то схватил вас и швырнул на пол...\nПеред смертью вы успели увидеть только летящий в вас топор\nВЫ МЕРТВЫ" << endl;
	}
	cout << endl << endl << "          DDDDD    OOOO       NN  NN   OOOO   TTTTTT\n          DD  DD  OO  OO      NNN NN  OO  OO    TT\n          DD  DD  OO  OO      NN NNN  OO  OO    TT\n          DD  DD  OO  OO      NN  NN  OO  OO    TT\n          DDDDD    OOOO       NN  NN   OOOO     TT" << endl << endl;
	cout << "                  EEEEE   AAAA   TTTTTT\n                  EE     AA  AA    TT\n                  EEEE   AAAAAA    TT\n                  EE     AA  AA    TT\n                  EEEEE  AA  AA    TT" << endl << endl;
	cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
	system("pause");
	ndeath++;
	main();
}
//подсобка
void utroom() {
	nmoves++;
	if (isHasPlanks) {
		if (Language)
			cout << "___________________________________________\nThere is nothing interesting here anymore" << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь больше нет ничего интересного" << endl;
		system("explorer https://youtu.be/t6isux5XWH0");
		system("pause");
		cycle3();
	}
	if (isHasKey2) {
		if (Language)
			cout << "___________________________________________\nOpening the door and going in, you found: a few boards, a hammer and a couple of nails" << endl;
		if (!Language)
			cout << "___________________________________________\nОткрыв дверь и войдя, вы обнаружили: несколько досок, молоток и пару гвоздей." << endl;
		isHasPlanks = true;
		isHasKey2 = false;
		system("pause");
		cycle3();
	}
	if (!isHasKey2) {
		if (Language)
			cout << "___________________________________________\nHow were you going to open that door without a key?" << endl;
		if (!Language)
			cout << "___________________________________________\nКак ты собрался открыть эту дверь без ключа?" << endl;
		system("pause");
		cycle3();
	}
}

//часть 4
// 
//второй этаж
void floor2(int floor2) {
	nmoves++;
	system("cls");
	if (floor2 == 1) {
		if (Language)
			cout << "___________________________________________\nYou went to the door and tried to open...closed...\nOpen 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери и попробовали её открыть...закрыто...\nОткрыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			cabinet();
			break;
		case'2':
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (floor2 == 2) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door\nOpen 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери\nОткрыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			bedroom();
			break;
		case'2':
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (floor2 == 3) {
		if (Language)
			cout << "___________________________________________\nYou have reached the door\nOpen 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к двери\nОткрыть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			restroom();
			break;
		case'2':
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (floor2 == 4) {
		if (Language)
			cout << "___________________________________________\nYou have reached the attic hatch...strange sounds are coming from there...\nPeek 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы подошли к чердачному люку...оттуда доносятся странные звуки...\nЗаглянуть 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			attic();
			break;
		case'2':
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
}
//цикл фторого этажа
void cycle4() {
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou are standing next to the stairs\nCabinet 1\nBedroom 2\nRestroom 3\nAttic 4" << endl;
		if (isHasFirecracker)
			cout << endl << "You have: Firecracker..." << endl;
		if (isHasKey3)
			cout << endl << "You have: Key..." << endl;
		if (isHasBooks)
			cout << endl << "You have: Books..." << endl;
		if (bedroomOpen)
			cout << endl << "Somewhere a door is open..." << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nВы стоите рядом с лестницей\nКабинет 1\nСпальня 2\nКомната отдыха 3\nЧердак 4" << endl;
		if (isHasFirecracker)
			cout << endl << "У вас есть: Петарды..." << endl;
		if (isHasKey3)
			cout << endl << "У вас есть: Ключ..." << endl;
		if (isHasBooks)
			cout << endl << "У вас есть: Книги..." << endl;
		if (bedroomOpen)
			cout << endl << "Где-то открыта дверь..." << endl;
	}
	switch (_getch()) {
	case '1':
		nmoves++;
		floor2(1);
		break;
	case '2':
		nmoves++;
		floor2(2);
		break;
	case '3':
		nmoves++;
		floor2(3);
		break;
	case '4':
		nmoves++;
		floor2(4);
		break;
	default:
		cycle4();
		break;
	}
}
//кабинет
void cabinet() {
	system("cls");
	if (isHasFirecracker) {
		if (Language)
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		cycle4();
	}
	if (isHasBooks) {
		if (Language)
			cout << "___________________________________________\nYou entered the office... there are still a couple of books missing from the shelves... but now you have them\nHow to put them?\nBlue - right; Red - left 1\nBlue - left; Red - right 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в кабинет... на полках не хватает пары книг... но теперь они у вас есть\nКак их поставить?\nСиняя - справа; Красная - слева 1\nСиняя - слева; Красная - справа 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nThe books moved into place... when suddenly a small box crawled out of the wall... there was a firecracker and a lighter in it" << endl;
			if (!Language)
				cout << "___________________________________________\nКниги встали на свои места... как вдруг из стены выползла маленькая коробочка... в ней была петарда и зажигалка" << endl;
			isHasBooks = false;
			isHasFirecracker = true;
			system("pause");
			cycle4();
			break;
		case '2':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nThe books moved...but immediately flew out and fell to the floor...the door to the study slammed shut...\nApparently you should have watched the Matrix more carefully\nYOU DIE" << endl;
			if (!Language)
				cout << "___________________________________________\nКниги задвинулись...но тут же вылетели и упали на пол...дверь в кабинет захлопнулась...\nВидимо надо было внимательнее смотреть Матрицу\nВЫ МЕРТВЫ" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			ndeath++;
			main();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (bedroomOpen) {
		if (Language)
			cout << "___________________________________________\nThere is nothing you can do here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		system("pause");
		cycle4();
	}
	if (isHasKey3) {
		if (Language)
			cout << "___________________________________________\nYou opened the door and entered a spacious room...it was a dark gothic office with a bunch of bookshelves\nIt seems that one of the shelves is missing a couple of books...\nWhen leaving, you pressed some kind of lever on the wall...it seems that somewhere- then the door opened...\nLeave 1" << endl;
		if (!Language)
			cout << "___________________________________________\nВы открыли дверь и вошли в просторную комнату... это был темный готический кабинет с кучей книжных полок\nКажется, что на одной из полок не хватает пары книг...\nВыходя, вы нажали какой-то рычаг на стене...кажется что где-то открылась дверь...\nУйти 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			isHasKey3 = false;
			bedroomOpen = true;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (!isHasKey3) {
		if (Language)
			cout << "___________________________________________\nYou can't...\n-So, teller, wait. What can't you see? Yes, on the other side of the monitor is mentally retarded!\nGod...how stupid do you have to be to open the door without a key to it...I don't want to play like that...I don't want to!..\nYOU ARE DEAD" << endl;
		if (!Language)
			cout << "___________________________________________\nВы не можете...\n-Так, рассказчик, подожди. Ты что не видишь? Да по ту сторону монитора умственно отсталый!\nБоже...каким надо быть тупым, чтобы открыть дверь без ключа от нее...я не хочу так играть...не хочу!..\nВЫ МЕРТЫ" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		system("pause");
		ndeath++;
		main();
	}
}
//спальня
void bedroom() {
	system("cls");
	if (isHasFirecracker || isHasBooks) {
		if (Language)
			cout << "___________________________________________\nThere is nothing interesting..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		system("pause");
		cycle4();
	}
	if (bedroomOpen) {
		if (Language)
			cout << "___________________________________________\nYou entered a spacious bedroom... after examining the bedroom, you found:\nBooks on the bed 1\nCloset 2\nLeave 3" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в просторную спальню... осмотрев спальню, вы нашли:\nКниги лежащие на кровати 1\nШкаф 2\nУйти 3" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou took the books and hurried out of the bedroom" << endl;
			if (!Language)
				cout << "___________________________________________\nВы взяли книги и вышли из спальни" << endl;
			isHasBooks = true;
			bedroomOpen = false;
			system("pause");
			cycle4();
			break;
		case '2':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou were looking at an old wardrobe...when you suddenly heard someone's footsteps in the corridor...\nYou opened it and climbed into the wardrobe...as soon as you entered, the doors closed...you tried to open them, but failed\nIn some then a long wide spike began to drive out from below...\nYOU ARE DEAD" << endl;
			if (!Language)
				cout << "___________________________________________\nВы смотрели на старый шкаф... как вдруг услышали чьи-то шаги в коридоре...\nВы открыли шкаф и забрались в него... как только вы вошли, двери закрылись... вы попытались открыть их, но не удалось\nСразу же из пола начал выезжать длинный широкий кол...\nВЫ МЕРТВЫ" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			ndeath++;
			main();
			break;
		case '3':
			nmoves++;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (!bedroomOpen) {
		if (Language)
			cout << "___________________________________________\nThe door is closed..." << endl;
		if (!Language)
			cout << "___________________________________________\nДверь закрыта..." << endl;
		system("pause");
		cycle4();
	}
}
//комната отдыха
void restroom() {
	system("cls");
	if (isHasFirecracker) {
		if (Language)
			cout << "___________________________________________\nAMOGUS?!?!\nExplore 1" << endl;
		if (!Language)
			cout << "___________________________________________\nАМОГУС?!?!\nИзучить 1" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			isHasAmongus = true;
			system("explorer https://youtu.be/T59N3DPrvac");
			system("pause");
			cycle4();
			break;
		}
	}
	if (isHasKey3 || bedroomOpen || isHasBooks) {
		if (Language)
			cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		if (!Language)
			cout << "___________________________________________\nЗдесь нет ничего интересного..." << endl;
		nmoves++;
		system("pause");
		cycle4();
	}
	if (!isHasKey3) {
		if (Language)
			cout << "___________________________________________\nYou entered the rest room...it was a spacious room with several sofas and some sports equipment\nAmidst all this rubbish, you noticed a key lying on the sofa\nTake key 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы вошли в комнату отдыха...это была просторная комната с несколькими диванами и кое-каким спортивным инвентарем\nСреди всего этого хлама вы заметили лежащий на диване ключ\nВзять ключ 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou have taken the key..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы взяли ключ..." << endl;
			isHasKey3 = true;
			system("pause");
			cycle4();
			break;
		case '2':
			nmoves++;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
}
//чердак
void attic() {
	system("cls");
	if (isHasFirecracker) {
		if (Language)
			cout << "___________________________________________\nYou carefully opened the hatch...\nThrow firecracker 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы осторожно открыли люк...\nБросить петарду 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou set it on fire and threw a firecracker into the attic, closed the hatch...\nThere was an explosion, and then the infernal spawn burst out screaming...when everything was quiet, you climbed into the attic\nIn the center of the attic lay a large box...it contained some explosives" << endl;
			if (!Language)
				cout << "___________________________________________\nВы подожгли петарду и бросили её на чердак, а после закрыли люк...\nРаздался взрыв, а потом адское отродье разразилось криками...когда все стихло, вы тихо полезли на чердак\nВ центре чердака лежал большой ящик... в нем была какая-то взрывчатка" << endl;
			if (Language)
				cout << "___________________________________________\nYou hurried down to the first floor and out into the street..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы быстро спустились на первый этаж и вышли на улицу..." << endl;
			system("pause");
			isHasFirecracker = false;
			isHasExplosives = true;
			cycle2();
			break;
		case '2':
			nmoves++;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
	if (!isHasFirecracker) {
		if (Language)
			cout << "___________________________________________\nYou carefully peeked into the attic...it's full of bats...\nClimb 1\nLeave 2" << endl;
		if (!Language)
			cout << "___________________________________________\nВы аккуратно заглянули на чердак...там полно летучих мышей...\nЗабраться 1\nУйти 2" << endl;
		switch (_getch()) {
		case '1':
			nmoves++;
			if (Language)
				cout << "___________________________________________\nYou climbed into the attic and closed the hatch behind you...bats immediately attacked you...\nThey inflicted heavy injuries on you with each attack...\nYOU ARE DEAD" << endl;
			if (!Language)
				cout << "___________________________________________\nВы забрались на чердак и закрыли за собой люк... летучие мыши тут же напали на вас...\nС каждой атакой они наносили вам тяжелые увечья...\nВЫ МЕРТВЫ" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			ndeath++;
			main();
			break;
		case '2':
			nmoves++;
			cycle4();
			break;
		default:
			cycle4();
			break;
		}
	}
}

//часть 5
// 
//лес
void forest() {
	system("cls");
	if (first_run) {
		if (Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |     Chapter 5. Forest.    |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			cout << "___________________________________________\nYou approached the gate and tied explosives to the lock, ignited the fuse and ran for cover...\nAfter 10 seconds, there was an explosion\n________________________________________________________\nYou crawled out of your hiding place and saw fragments of the once great gate lying on the ground\nYou ran towards the gate...when suddenly a shot rang out...past...you better speed up\n" << endl;
			cout << "\n          ==================\n              Run: Space\n          ==================" << endl << endl;
			system("pause");
			system("cls");
		}
		if (!Language) {
			cout << "\n\n\n\n\n\n\n\n\n          =============================\n          |                           |\n          |        Глава 5. Лес.      |\n          |                           |\n          =============================\n\n\n\n\n\n\n\n\n\n\n\n" << endl << endl;
			system("pause");
			system("cls");
			cout << "___________________________________________\nВы подошли к воротам и привязали взрывчатку к замку, подожгли фитиль и убежали в укрытие...\nЧерез 10 секунд раздался взрыв\n________________________________________________________\nВы вылезли из своего укрытия и увидели осколки некогда великих ворот лежащие на земле\nВы побежали в сторону ворот...как вдруг раздался выстрел...мимо...лучше вам ускориться\n" << endl;
			cout << "\n          ==================\n            Бежать: Пробел\n          ==================" << endl << endl;
			system("pause");
			system("cls");
		}
	}
		while (!escpe && !gameover) {
			system("cls");
			if (!Language)
				cout << "					RRRRR   UU  UU  NN  NN\n			======  ======  RR  RR  UU  UU  NNN NN  ======  ======\n			                RRRRR   UU  UU  NN NNN\n			======  ======  RR  RR  UU  UU  NN  NN  ======  ======\n			                RR  RR   UUUU   NN  NN\n\n			                       Отрыв: " << x_pl << " %                     \n			                   Осталось " << timr << " секунд                 \n\n					RRRRR   UU  UU  NN  NN\n			======  ======  RR  RR  UU  UU  NNN NN  ======  ======\n			                RRRRR   UU  UU  NN NNN\n			======  ======  RR  RR  UU  UU  NN  NN  ======  ======\n			                RR  RR   UUUU   NN  NN" << endl;
			if (Language)
				cout << "					RRRRR   UU  UU  NN  NN\n			======  ======  RR  RR  UU  UU  NNN NN  ======  ======\n			                RRRRR   UU  UU  NN NNN\n			======  ======  RR  RR  UU  UU  NN  NN  ======  ======\n			                RR  RR   UUUU   NN  NN\n\n			                  Escape progress: " << x_pl << "%                    \n			                   Seconds left: " << timr << "                 \n\n					RRRRR   UU  UU  NN  NN\n			======  ======  RR  RR  UU  UU  NNN NN  ======  ======\n			                RRRRR   UU  UU  NN NNN\n			======  ======  RR  RR  UU  UU  NN  NN  ======  ======\n			                RR  RR   UUUU   NN  NN" << endl;
			if (timr == 0)
				gameover = true;
			if (x_pl < 0)
				gameover = true;
			if (x_pl >= 100)
				escpe = true;
			if (_kbhit()) {
				switch (_getch()) {
				case ' ':
					x_pl += 2.5;
					break;
				default:
					x_pl--;
					break;
				}
			}
			Sleep(1000);
			timr--;
		}
		if (gameover) {
			if (!Language) {
				system("cls");
				cout << "___________________________________________\nВы бежали изо всех сил...но ваши преследователи вас догоняли...\nКак вдруг вам в плечо втыкается нож... Видимо стоит научиться бегать быстрее\nВЫ МЕРТВЫ" << endl << endl;
				cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
				system("pause");
				ndeath++;
				gameover = false;
				x_pl = 0;
				timr = 45;
				main();
			}
			if (Language) {
				system("cls");
				cout << "___________________________________________\nYou were running as fast as you could...but your pursuers were catching up...\nWhen suddenly a knife is stuck in your shoulder... Maybe you should learn to run faster\nYOU ARE DEAD" << endl << endl;
				cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
				system("pause");
				ndeath++;
				gameover = false;
				x_pl = 0;
				timr = 45;
				main();
			}
		}
		if (escpe) {
			first_run = false;
			system("cls");
			if (Language)
				cout << "___________________________________________\nYou have broken away from your pursuers, but you'd better hide quickly\nLooking around you found several places:\nBush 1\nSmall barrel 2\nTree 3" << endl;
			if (!Language)
				cout << "___________________________________________\nВы оторвались от своих преследователей, но вам лучше быстрее спрятаться\nОсмотревшись вы нашли несколько мест:\nКусты 1\nНебольшая бочка 2\nДерево 3" << endl;
			switch (_getch()) {
			case '1':
				bushes();
				break;
			case '2':
				barrel();
				break;
			case '3':
				tree();
				break;
			default:
				forest();
				break;
			}
		}
}
//кусты
void bushes() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou climbed into the bushes, when you suddenly felt unbearable pain...\nThere was a bear trap in the bushes...you passed out from the pain and soon you were found...\nYOU ARE DEAD" << endl << endl;
	if (!Language)
		cout << "___________________________________________\nВы залезли в кусты, как вдруг почувствовали невыносимую боль...\nВ кустах стоял медвежий капкан...от боли вы отрубились и вскоре вас нашли...\nВЫ МЕРТВЫ" << endl << endl;
	cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
	system("pause");
	ndeath++;
	first_run = true;
	escpe = false;
	gameover = false;
	x_pl = 0;
	timr = 45;
	main();
}
//бочка
void barrel() {
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou ran up to the barrel and carefully climbed into it...there was some water in it, but it was tolerable\nSoon about 10 people with torches and guns appeared\nThey were clearly aggressive and were looking for you ..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nYou've been sitting in the barrel for quite some time and you've already begun to freeze...when suddenly someone knocked over the barrel\nThe last thing you heard was a speech you didn't understand...\nYOU ARE DEAD" << endl << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nВы подбежали к бочке и аккуратно в неё залезли...в ней было немного воды, но это было терпимо\nВскоре показалось около 10 человек с факелами и ружьями\nОни явно были настроены агрессивно и искали вас..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nВы сидели в бочке довольно-таки долго и уже начали замерзать...как вдруг кто-то опрокинул бочку\nПоследнее что вы услышали это непонятная для вас речь...\nВЫ МЕРТВЫ" << endl << endl;
	}
	cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
	system("pause");
	ndeath++;
	first_run = true;
	escpe = false;
	gameover = false;
	x_pl = 0;
	timr = 45;
	main();
}
//дерево
void tree() {
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou looked up, the branches of the tree were quite low and you could easily reach them\nYou took a few steps back, and then ran up and jumped...\nAfter a couple of seconds you were at the very top and saw how detachments with fakers were passing from below and guns..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nYou have been sitting on a tree for about half an hour...when you suddenly realized that you were very sleepy\nSitting comfortably so as not to fall from the tree, you fell asleep\nYou woke up in the late evening of the next day\nYour whole body hurt, but you had to go further...you slowly climbed down from the tree..." << endl << endl;
		system("pause");
		first_run = true;
		escpe = false;
		gameover = false;
		x_pl = 0;
		timr = 45;
		path();
	}
	if (!Language) {
		cout << "___________________________________________\nВы посмотрели вверх, ветки дерева были довольно низко и вы с лёгкостью до них дотянетесь\nВы сделали несколько шагов назад, а после разбежались и подпрыгнули...\nУже спустя пару секунд вы были на самой верхушке и лицезрели как снизу проходят отряды с факерами и ружьями..." << endl << endl;
		system("pause");
		system("cls");
		cout << "___________________________________________\nВы сидели на дереве уже около получаса...как вдруг поняли что вас сильно клонит в сон\nУдобно расположившись, чтобы не упасть с дерева, вы уснули\nПроснулись же вы глубоким вечером следующего дня\nВсё тело болело, но нужно было идти дальше...вы медленно слезли с дерева..." << endl << endl;
		system("pause");
		first_run = true;
		escpe = false;
		gameover = false;
		x_pl = 0;
		timr = 45;
		path();
	}
}
//тропа
void path() {
	system("cls");
	if (Language)
		cout << "___________________________________________\nYou climbed out of the tree and found an unremarkable path...maybe it will lead you out of this nightmare?\nLook around 1\nFollow path 2" << endl;
	if (!Language)
		cout << "___________________________________________\nВы слезли с дерева и нашли неприментную тропинку...может она выведет вас из этого кошмара?\nОсмотреться 1\nПойти по тропинке 2" << endl;
	switch (_getch()) {
	case '1':
		look_around = true;
		deep_forest();
		break;
	case '2':
		deep_forest();
		break;
	default:
		path();
		break;
	}
	deep_forest();
}
//глубины леса
void deep_forest() {
	if (look_around) {
		system("cls");
		if (Language) {
			cout << "___________________________________________\nYou looked around the area and found a bear trap under a bush... it's good that you didn't hide there...\nYou took a bear trap..." << endl;
			system("pause");
		}
		if (!Language) {
			cout << "___________________________________________\nВы осмотрели окрестности и нашли медвежий капкан под кустом...как хорошо что вы туда не спрятались...\nВы взяли медвежий капкан..." << endl;
			system("pause");
		}
		isHasTrap = true;
		look_around = false;
	}
	if (!look_around) {
		system("cls");
		if (Language) {
			cout << "___________________________________________\nYou walked along the path and apparently went deeper into the forest...but at some point you came to a crossroads\nIt was a fork in three directions, and there was an index stone nearby:\nIf you go left - you will find death for yourself 1\nGo straight - you will not you will come 2\nYou will go to the right - you will not collect the bones 3" << endl;
			if (isHasTrap)
				cout << endl << "You have: Bear trap..." << endl;
			if (loop)
				cout << "___________________________________________\nLooks like you've been here before..." << endl;
		}
		if (!Language) {
			cout << "___________________________________________\nВы шли по тропинке и видимо всё сильнее углублялись в лес...но в какой-то момент вы вышли на перекрёсток\nЭто была развилка в три стороны, а рядом был указательный камень:\nНалево пойдёшь - смерть себе найдёшь 1\nПрямо пойдёшь - никуда не прийдёшь 2\nНаправо пойдёшь - костей не соберёшь 3" << endl;
			if (isHasTrap)
				cout << endl << "У вас есть: Медвежий капкан..." << endl;
			if (loop)
				cout << "___________________________________________\nКажется вы здесь уже были..." << endl;
		}
		switch (_getch()) {
		case '1':
			left();
			break;
		case '2':
			loop = true;
			system("cls");
			if(Language)
				cout << "___________________________________________\nYou walked around the stone and went straight..." << endl;
			if (!Language)
				cout << "___________________________________________\nВы обошли камень и пошли прямо..." << endl;
			system("pause");
			deep_forest();
			break;
		case '3':
			right();
			break;
		default:
			deep_forest();
			break;
		}
	}
}
//налево
void left() {
	system("cls");
	if (Language) {
		cout << "End of version 3.4\nThanks for playing!" << endl;
		//cout << "" << endl;
	}
	if (!Language) {
		cout << "Конец версии 3.4\nСпасибо за игру!" << endl;
		//cout << "" << endl;
	}
	system("pause");
	endgame();
}
//направо
void right() {
	system("cls");
	if (Language) {
		cout << "___________________________________________\nYou walked along the path for a long time, when suddenly the forest began to thin out...\nLooking around you realized that you had gone into some kind of swamp...for some reason it looks quite familiar\nYou continued walking and soon stumbled upon some kind of hut\nYou didn’t have time to approach her as the door swung open abruptly...\nYOU ARE DEAD" << endl;
	}
	if (!Language) {
		cout << "___________________________________________\nВы долго шли по тропе, как вдруг лес начал редеть...\nОглядевшись вы поняли, что вышли в какое-то болото...почему-то выглядит оно довольно знакомо\nВы продолжили идти и вскоре наткнулись на какую-то хижину\nНеуспели вы к ней подойти как дверь резко распахнулась...\nВЫ МЕРТВЫ" << endl;
	}
	system("pause");
	system("cls");
	cout << " SSSS    OOOO   MM   MM  EEEEE  BBBBB    OOOO   DDDDD   YY  YY\nSS      OO  OO  MMM MMM  EE     BB  BB  OO  OO  DD  DD   YYYY\n SSSS   OO  OO  MM M MM  EEEE   BBBBB   OO  OO  OO  OO    YY\n    SS  OO  MM  MM   MM  EE     BB  BB  OO  OO  DD  DD    YY\n SSSS    OOOO   MM   MM  EEEEE  BBBBB    OOOO   DDDDD     YY\n\n OOOO   NN  NN   CCCC   EEEEE\nOO  OO  NNN NN  CC  CC  EE\nOO  OO  NN NNN  CC      EEEE\nOO  OO  NN  NN  CC  CC  EE\n OOOO   NN  NN   CCCC   EEEEE\n\nTTTTTT   OOOO   LL      DDDDD\n  TT    OO  OO  LL      DD  DD\n  TT    OO  OO  LL      DD  DD\n  TT    OO  OO  LL      DD  DD\n  TT     OOOO   LLLLLL  DDDDD\n\nMM   MM  EEEEE\nMMM MMM  EE\nMM M MM  EEEE\nMM   MM  EE\nMM   MM  EEEEE  **  **  **\n" << endl;
	cout << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl;
	system("explorer https://youtu.be/pxw-5qfJ1dk");
	system("pause");
	somebody = true;
	ndeath++;
	main();
}

//меню и прочее
// 
//конец игры
void endgame() {
	system("cls");
	char files[5];
	if (nmoves < 100) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n             Speedrunner\n  Complete the game in less than 100 moves\n===========================================" << endl;
		if (!Language)
			cout << "==========================================\n           Получено достижение:\n               Спидранер\n    Пройти игру меньше чем за 100 ходов\n==========================================" << endl;
		achievements5 = true;
		system("pause");
		system("cls");
	}
	if (nmoves > 150) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n        Look under every stone...\n Complete the game in more than 150 moves\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n           Получено достижение:\n        Заглянуть под каждый камень...\n    Пройти игру больше чем за 150 ходов\n===========================================" << endl;
		achievements4 = true;
		system("pause");
		system("cls");
	}
	if (nsave == 0) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n         Save is for the weak!\n    Complete the game without saving\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n          Получено достижение:\n        Сохранения для слабаков!\n         Ни разу не сохраниться\n===========================================" << endl;
		achievements3 = true;
		system("pause");
		system("cls");
	}
	if (ndeath == 0) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n       Guided by the right path...\n    Complete the game without dying\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n          Получено достижение:\n        Ведомый верными путями...\n           Ни разу не умереть\n===========================================" << endl;
		achievements2 = true;
		system("pause");
		system("cls");
	}
	if (nsave == 4) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n                Coward!\n             Save 4 times\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n          Получено достижение:\n               Трусишка!\n           Сохраниться 4 раза\n===========================================" << endl;
		achievements1 = true;
		system("pause");
		system("cls");
	}
	if (somebody) {
		if (Language)
			cout << "===========================================\n          Achievement earned:\n         Somebody once told me...\n              Meet Shrek\n===========================================" << endl;
		if (!Language)
			cout << "===========================================\n           Получено достижение:\n          Самбади ванс толд ми...\n             Встретить Шрека\n===========================================" << endl;
		achievements6 = true;
		system("pause");
		system("cls");
	}
	if (isHasAmongus) {
		if (Language) {
			cout << "You found AMOGUS! good ending" << endl << endl;
			cout << "___________________________________________\nend game" << endl;
			system("pause");
			system("cls");
			cout << "Do you want to delete save files? y/n" << endl;
		}
		if (!Language) {
			cout << "Вы нашли АМОГУСА! хорошая концовка" << endl << endl;
			cout << "Концовка" << endl;
			system("pause");
			system("cls");
			cout << "Вы хотите удалить файлы сохранения? y/n" << endl;
		}
	}
	if (!isHasAmongus) {
		if (Language) {
			cout << "___________________________________________\nend game\nP.s.\nYou didn't find AMONGUS((( bad ending..." << endl;
			system("pause");
			system("cls");
			cout << "Do you want to delete save files? y/n" << endl;
		}
		if (!Language) {
			cout << "Концовка без амогуса\nP.s.\nВы не нашли АМОНГУСА((( плохая концовка ..." << endl;
			system("pause");
			system("cls");
			cout << "Вы хотите удалить файлы сохранения? y/n" << endl;
		}
	}
	cin >> files;
	if (files[0] == 'Y' || files[0] == 'y' || files[0] == 'D' || files[0] == 'd') {
		if (remove("C:/Windows/Temp/save.txt") != 0)
			cout << endl << endl << endl << "ERROR DELETE SAVE FILE" << endl << endl << endl << endl;
		else
			cout << endl << endl << endl << "SAVE FILES SUCCESSFULLY DELETED" << endl << endl << endl << endl;
	}
	if (files[0] == 'N' || files[0] == 'n') {
		cout << endl << endl << endl << "SELECT SAVE MODE UNLOCKED" << endl << endl << endl << endl;
		ofstream file("C:/Windows/Temp/save.txt");
		if (file.is_open()) {
			file << "ecQmXo|*2}}UD}iRFEE1O85ZQDEh9j";
			file.close();
		}
	}
	system("pause");
	system("cls");
	if (Language)
		cout << "During this journey you died " << ndeath << " times" << endl << endl;
	if (!Language)
		cout << "Во время этого путешествия вы умерли " << ndeath << " раз" << endl << endl;
	cout << endl << endl << "TTTTTT  HH  HH   AAAA   NN  NN  KK  KK   SSSS  \n  TT    HH  HH  AA  AA  NNN NN  KK KK   SS     \n  TT    HHHHHH  AAAAAA  NN NNN  KKKK     SSSS  \n  TT    HH  HH  AA  AA  NN  NN  KK KK       SS \n  TT    HH  HH  AA  AA  NN  NN  KK  KK   SSSS  " << endl << endl;
	cout << "FFFFFF   OOOO   RRRRR     PPPPP   LL       AAAA   YY  YY  IIIIII  NN  NN   GGGG   !!!\nFF      OO  OO  RR  RR    PP  PP  LL      AA  AA   YYYY     II    NNN NN  GG      !!!\nFFFF    OO  OO  RRRRR     PPPPP   LL      AAAAAA    YY      II    NN NNN  GG GGG  !!!\nFF      OO  OO  RR  RR    PP      LL      AA  AA    YY      II    NN  NN  GG  GG\nFF       OOOO   RR  RR    PP      LLLLLL  AA  AA    YY    IIIIII  NN  NN   GGGG   !!!" << endl;
	system("pause");
	isHasKnife = false, isHasKey1 = false, isHasCrowbar = false, isHasMaul = false, isHasExplosives = false, isHasKey2 = false, isHasPlanks = false, isHasKey3 = false, bedroomOpen = false, isHasBooks = false, isHasFirecracker = false, isHasAmongus = false, first_start = true, first_run = true, escpe = false, escpe = false, gameover = false, first_run = true, look_around = false, isHasTrap = false, loop = false, x_pl = 0, timr = 45, ndeath = 0, nsave = 0, nmoves = 0;
	main();
}
//выбор локации
void levels() {
	system("cls");
	if (Language)
		cout << "What location do you want to go to?\nBasement 1\nYard 2\nMansion floor first 3\nMansion floor second 4\nForest 5\n=========================\nBack to menu 6" << endl;
	if (!Language)
		cout << "В какую локацию хотите попасть?\nПодвал 1\nДвор 2\nПервый этаж особняка 3\nВторой этаж особняка 4\nЛес 5\n=========================\nВернуться в меню 6" << endl;
	switch (_getch()) {
	case '1':
		cycle1();
		break;
	case '2':
		cycle2();
		break;
	case '3':
		cycle3();
		break;
	case '4':
		cycle4();
		break;
	case '5':
		forest();
		break;
	case '6':
		main_menu();
		break;
	default:
		levels();
		break;
	}
}
//локализация
void language() {
	system("cls");
	Language = !Language;
	main_menu();
}
//меню
void main_menu() {
	system("cls");
	if (Language) {
		cout << "=================base_escape_v3.4=================" << endl << endl;
		cout << "Welcome to my updated version of base_escape_v3.4\n==================================================\n                       Start 1\n                     Load save 2\n                About the developer 3\n                  Русский/English 4\n              =========================\n                    Changes list 5\n                    Achievements 6\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	}
	if (!Language) {
		cout << "======================base_escape_v3.4======================" << endl << endl;
		cout << "Добро пожаловать в мою обновлённую версию base_escape_v3.4\n============================================================\n                           Старт 1\n                   Загрузить сохранение 2\n                        Разработчик 3\n                      Русский/English 4\n              ==================================\n                      Список изменений 5\n                         Достижения 6\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	}
	switch (_getch()) {
	case '1':
		start();
		break;
	case '2':
		save();
		break;
	case '3':
		developer();
		break;
	case '4':
		language();
		break;
	case '5':
		updet_list();
		break;
	case '6':
		achievements();
		break;
	default:
		main_menu();
		break;
	}
}
//о разработчике
void developer() {
	system("cls");
	if (!Language)
		cout << "Мои соц. сети:\n___________________________\nDiscord: Bubba#4211\nVK: @1blitz01\nTelegram: @an1onimes\n___________________________" << endl << endl;
	if (Language)
		cout << "My social networks:\n___________________________\nDiscord: Bubba#4211\nVK: @1blitz01\nTelegram: @an1onimes\n___________________________" << endl << endl;
	system("pause");
	main_menu();
}
//список обновления
void updet_list() {
	system("cls");
	if (Language)
		cout << "==========================================\n             List of changes:\n==========================================\n*Added Forest\n*Some cosmetic updates\n\n==========================================\n        Plans for future updates:\n==========================================\n*Adding new locations: Killer Village\n*Change starting locations: Basement, Yard" << endl << endl << endl;
	if (!Language)
		cout << "==========================================\n            Список изменений:\n==========================================\n*Добавлен Лес\n*Некоторые косметические обновления\n\n==========================================\n        Планы на будущие обновления:\n==========================================\n*Добавление новых локаций: Деревня Убийц\n*Изменение начальных локаций: Подвал, Двор" << endl << endl << endl;
	system("pause");
	main_menu();
}
//достижения
void achievements() {
	system("cls");
	string do1 = "X", do2 = "X", do3 = "X", do4 = "X", do5 = "X", do6 = "X";
	if (achievements1)
		do1 = "DONE";
	if (achievements2)
		do2 = "DONE";
	if (achievements3)
		do3 = "DONE";
	if (achievements4)
		do4 = "DONE";
	if (achievements5)
		do5 = "DONE";
	if (achievements6)
		do6 = "DONE";
	if (Language)
		cout << "============Achievements============\nCoward!                       (" << do1 << ")\nGuided by the right path...   (" << do2 << ")\nSave is for the weak!         (" << do3 << ")\nLook under every stone...     (" << do4 << ")\nSpeedrunner                   (" << do5 << ")\nSomebody once told me...      (" << do6 << ")" << endl << endl;
	if (!Language)
		cout << "===============Достижения===============\nТрусишка!                         (" << do1 << ")\nВедомый верными путями...         (" << do2 << ")\nСохранения для слабаков!          (" << do3 << ")\nЗаглянуть под каждый камень...    (" << do4 << ")\nСпидранер                         (" << do5 << ")\nСамбади ванс толд ми...           ("<<do6<<")" << endl << endl;
	system("pause");
	main_menu();
}