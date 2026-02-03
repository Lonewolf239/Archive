#include <Windows.h>
#include <iostream>
namespace Calculator1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form {
	public:
		main(void) {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~main() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ prog_name;
	protected:

	private: int screenHeight, screenWidth;
		   bool Language = true;
	protected: Point lastLocation;

	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ All_clear;
	private: System::Windows::Forms::Button^ minus_or_plus;
	private: System::Windows::Forms::Button^ delenie;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ umnojenie;

	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ zero;

	private: System::Windows::Forms::Button^ res;
	private: System::Windows::Forms::Button^ fore;
	private: float first_number = 0, second_number = 0;
	private: wchar_t user_match = '0';
	private: bool choice_did = false, res_done = false, to_float = false, point_set = false;
	private: float tes = 0;
	private: System::Windows::Forms::PictureBox^ ext_btn;
	private: System::Windows::Forms::PictureBox^ help_btn;
	private: System::Windows::Forms::Label^ math_choice;
	private: System::Windows::Forms::Button^ point;
	private: System::Windows::Forms::PictureBox^ prog_icon;
	private: ToolTip^ g;

	private: System::Windows::Forms::Panel^ settings_panel;
	private: System::Windows::Forms::GroupBox^ setting_group;
	private: System::Windows::Forms::PictureBox^ tg_btn;
	private: System::Windows::Forms::PictureBox^ github_btn;
	private: System::Windows::Forms::PictureBox^ bug_report_btn;
	private: System::Windows::Forms::PictureBox^ place_order_btn;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->prog_icon = (gcnew System::Windows::Forms::PictureBox());
			this->help_btn = (gcnew System::Windows::Forms::PictureBox());
			this->ext_btn = (gcnew System::Windows::Forms::PictureBox());
			this->prog_name = (gcnew System::Windows::Forms::Label());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->result = (gcnew System::Windows::Forms::Label());
			this->math_choice = (gcnew System::Windows::Forms::Label());
			this->All_clear = (gcnew System::Windows::Forms::Button());
			this->minus_or_plus = (gcnew System::Windows::Forms::Button());
			this->delenie = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->umnojenie = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->res = (gcnew System::Windows::Forms::Button());
			this->fore = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->settings_panel = (gcnew System::Windows::Forms::Panel());
			this->setting_group = (gcnew System::Windows::Forms::GroupBox());
			this->place_order_btn = (gcnew System::Windows::Forms::PictureBox());
			this->bug_report_btn = (gcnew System::Windows::Forms::PictureBox());
			this->github_btn = (gcnew System::Windows::Forms::PictureBox());
			this->tg_btn = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prog_icon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->help_btn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ext_btn))->BeginInit();
			this->panel2->SuspendLayout();
			this->settings_panel->SuspendLayout();
			this->setting_group->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->place_order_btn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bug_report_btn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->github_btn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tg_btn))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->prog_icon);
			this->panel1->Controls->Add(this->help_btn);
			this->panel1->Controls->Add(this->ext_btn);
			this->panel1->Controls->Add(this->prog_name);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(282, 25);
			this->panel1->TabIndex = 0;
			// 
			// prog_icon
			// 
			this->prog_icon->Dock = System::Windows::Forms::DockStyle::Left;
			this->prog_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prog_icon.Image")));
			this->prog_icon->Location = System::Drawing::Point(0, 0);
			this->prog_icon->Name = L"prog_icon";
			this->prog_icon->Size = System::Drawing::Size(25, 25);
			this->prog_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->prog_icon->TabIndex = 3;
			this->prog_icon->TabStop = false;
			this->prog_icon->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &main::prog_name_MouseDown);
			this->prog_icon->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &main::prog_name_MouseMove);
			this->prog_icon->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &main::prog_name_MouseUp);
			// 
			// help_btn
			// 
			this->help_btn->Dock = System::Windows::Forms::DockStyle::Right;
			this->help_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"help_btn.Image")));
			this->help_btn->Location = System::Drawing::Point(232, 0);
			this->help_btn->Name = L"help_btn";
			this->help_btn->Size = System::Drawing::Size(25, 25);
			this->help_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->help_btn->TabIndex = 2;
			this->help_btn->TabStop = false;
			this->help_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::help_btn_MouseClick);
			this->help_btn->MouseEnter += gcnew System::EventHandler(this, &main::help_btn_MouseEnter);
			this->help_btn->MouseLeave += gcnew System::EventHandler(this, &main::help_btn_MouseLeave);
			this->help_btn->MouseHover += gcnew System::EventHandler(this, &main::help_btn_MouseHover);
			// 
			// ext_btn
			// 
			this->ext_btn->Dock = System::Windows::Forms::DockStyle::Right;
			this->ext_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ext_btn.Image")));
			this->ext_btn->Location = System::Drawing::Point(257, 0);
			this->ext_btn->Name = L"ext_btn";
			this->ext_btn->Size = System::Drawing::Size(25, 25);
			this->ext_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ext_btn->TabIndex = 1;
			this->ext_btn->TabStop = false;
			this->ext_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::ext_btn_MouseClick);
			this->ext_btn->MouseEnter += gcnew System::EventHandler(this, &main::ext_btn_MouseEnter);
			this->ext_btn->MouseLeave += gcnew System::EventHandler(this, &main::ext_btn_MouseLeave);
			// 
			// prog_name
			// 
			this->prog_name->BackColor = System::Drawing::Color::Black;
			this->prog_name->Cursor = System::Windows::Forms::Cursors::Default;
			this->prog_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->prog_name->ForeColor = System::Drawing::Color::White;
			this->prog_name->Location = System::Drawing::Point(25, 0);
			this->prog_name->Name = L"prog_name";
			this->prog_name->Size = System::Drawing::Size(207, 25);
			this->prog_name->TabIndex = 0;
			this->prog_name->Text = L"Calculator";
			this->prog_name->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->prog_name->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &main::prog_name_MouseDown);
			this->prog_name->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &main::prog_name_MouseMove);
			this->prog_name->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &main::prog_name_MouseUp);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->Clear->Location = System::Drawing::Point(12, 97);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(60, 60);
			this->Clear->TabIndex = 1;
			this->Clear->TabStop = false;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &main::Clear_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DimGray;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->result);
			this->panel2->Controls->Add(this->math_choice);
			this->panel2->Location = System::Drawing::Point(12, 31);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(258, 60);
			this->panel2->TabIndex = 2;
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::Color::Transparent;
			this->result->Dock = System::Windows::Forms::DockStyle::Fill;
			this->result->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::Color::White;
			this->result->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->result->Location = System::Drawing::Point(36, 0);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(218, 56);
			this->result->TabIndex = 0;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// math_choice
			// 
			this->math_choice->Dock = System::Windows::Forms::DockStyle::Left;
			this->math_choice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold));
			this->math_choice->ForeColor = System::Drawing::Color::White;
			this->math_choice->Location = System::Drawing::Point(0, 0);
			this->math_choice->Name = L"math_choice";
			this->math_choice->Size = System::Drawing::Size(36, 56);
			this->math_choice->TabIndex = 1;
			this->math_choice->Text = L" ";
			this->math_choice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// All_clear
			// 
			this->All_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->All_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->All_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->All_clear->Location = System::Drawing::Point(78, 97);
			this->All_clear->Name = L"All_clear";
			this->All_clear->Size = System::Drawing::Size(60, 60);
			this->All_clear->TabIndex = 3;
			this->All_clear->TabStop = false;
			this->All_clear->Text = L"AC";
			this->All_clear->UseVisualStyleBackColor = false;
			this->All_clear->Click += gcnew System::EventHandler(this, &main::All_clear_Click);
			// 
			// minus_or_plus
			// 
			this->minus_or_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->minus_or_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus_or_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->minus_or_plus->Location = System::Drawing::Point(144, 97);
			this->minus_or_plus->Name = L"minus_or_plus";
			this->minus_or_plus->Size = System::Drawing::Size(60, 60);
			this->minus_or_plus->TabIndex = 4;
			this->minus_or_plus->TabStop = false;
			this->minus_or_plus->Text = L"+/-";
			this->minus_or_plus->UseVisualStyleBackColor = false;
			this->minus_or_plus->Click += gcnew System::EventHandler(this, &main::minus_or_plus_Click);
			// 
			// delenie
			// 
			this->delenie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delenie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->delenie->Location = System::Drawing::Point(210, 97);
			this->delenie->Name = L"delenie";
			this->delenie->Size = System::Drawing::Size(60, 60);
			this->delenie->TabIndex = 5;
			this->delenie->TabStop = false;
			this->delenie->Text = L"/";
			this->delenie->UseVisualStyleBackColor = false;
			this->delenie->Click += gcnew System::EventHandler(this, &main::delenie_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->one->Location = System::Drawing::Point(12, 163);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(60, 60);
			this->one->TabIndex = 6;
			this->one->TabStop = false;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->two->Location = System::Drawing::Point(78, 163);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(60, 60);
			this->two->TabIndex = 7;
			this->two->TabStop = false;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->three->Location = System::Drawing::Point(144, 163);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(60, 60);
			this->three->TabIndex = 8;
			this->three->TabStop = false;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// umnojenie
			// 
			this->umnojenie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->umnojenie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->umnojenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->umnojenie->Location = System::Drawing::Point(210, 163);
			this->umnojenie->Name = L"umnojenie";
			this->umnojenie->Size = System::Drawing::Size(60, 60);
			this->umnojenie->TabIndex = 9;
			this->umnojenie->TabStop = false;
			this->umnojenie->Text = L"*";
			this->umnojenie->UseVisualStyleBackColor = false;
			this->umnojenie->Click += gcnew System::EventHandler(this, &main::umnojenie_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->five->Location = System::Drawing::Point(78, 229);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(60, 60);
			this->five->TabIndex = 11;
			this->five->TabStop = false;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->six->Location = System::Drawing::Point(144, 229);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(60, 60);
			this->six->TabIndex = 12;
			this->six->TabStop = false;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->minus->Location = System::Drawing::Point(210, 229);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(60, 60);
			this->minus->TabIndex = 13;
			this->minus->TabStop = false;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &main::minus_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->seven->Location = System::Drawing::Point(12, 295);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(60, 60);
			this->seven->TabIndex = 14;
			this->seven->TabStop = false;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->eight->Location = System::Drawing::Point(78, 295);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(60, 60);
			this->eight->TabIndex = 15;
			this->eight->TabStop = false;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->nine->Location = System::Drawing::Point(144, 295);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(60, 60);
			this->nine->TabIndex = 16;
			this->nine->TabStop = false;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->plus->Location = System::Drawing::Point(210, 295);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(60, 60);
			this->plus->TabIndex = 17;
			this->plus->TabStop = false;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &main::plus_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->zero->Location = System::Drawing::Point(12, 361);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(126, 60);
			this->zero->TabIndex = 18;
			this->zero->TabStop = false;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// res
			// 
			this->res->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->res->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->res->Location = System::Drawing::Point(210, 361);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(60, 60);
			this->res->TabIndex = 22;
			this->res->TabStop = false;
			this->res->Text = L"=";
			this->res->UseVisualStyleBackColor = false;
			this->res->Click += gcnew System::EventHandler(this, &main::res_Click);
			// 
			// fore
			// 
			this->fore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->fore->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->fore->Location = System::Drawing::Point(12, 229);
			this->fore->Name = L"fore";
			this->fore->Size = System::Drawing::Size(60, 60);
			this->fore->TabIndex = 10;
			this->fore->TabStop = false;
			this->fore->Text = L"4";
			this->fore->UseVisualStyleBackColor = false;
			this->fore->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// point
			// 
			this->point->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point->Location = System::Drawing::Point(144, 361);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(60, 60);
			this->point->TabIndex = 21;
			this->point->TabStop = false;
			this->point->Text = L",";
			this->point->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->point->UseVisualStyleBackColor = false;
			this->point->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// settings_panel
			// 
			this->settings_panel->Controls->Add(this->setting_group);
			this->settings_panel->Location = System::Drawing::Point(0, 25);
			this->settings_panel->Name = L"settings_panel";
			this->settings_panel->Size = System::Drawing::Size(282, 300);
			this->settings_panel->TabIndex = 23;
			this->settings_panel->Visible = false;
			// 
			// setting_group
			// 
			this->setting_group->Controls->Add(this->place_order_btn);
			this->setting_group->Controls->Add(this->bug_report_btn);
			this->setting_group->Controls->Add(this->github_btn);
			this->setting_group->Controls->Add(this->tg_btn);
			this->setting_group->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->setting_group->ForeColor = System::Drawing::Color::White;
			this->setting_group->Location = System::Drawing::Point(0, 0);
			this->setting_group->Name = L"setting_group";
			this->setting_group->Size = System::Drawing::Size(282, 300);
			this->setting_group->TabIndex = 0;
			this->setting_group->TabStop = false;
			// 
			// place_order_btn
			// 
			this->place_order_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"place_order_btn.Image")));
			this->place_order_btn->Location = System::Drawing::Point(15, 16);
			this->place_order_btn->Margin = System::Windows::Forms::Padding(15, 3, 15, 5);
			this->place_order_btn->Name = L"place_order_btn";
			this->place_order_btn->Size = System::Drawing::Size(252, 75);
			this->place_order_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->place_order_btn->TabIndex = 3;
			this->place_order_btn->TabStop = false;
			this->place_order_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::place_order_btn_MouseClick);
			this->place_order_btn->MouseEnter += gcnew System::EventHandler(this, &main::place_order_btn_MouseEnter);
			this->place_order_btn->MouseLeave += gcnew System::EventHandler(this, &main::place_order_btn_MouseLeave);
			this->place_order_btn->MouseHover += gcnew System::EventHandler(this, &main::place_order_btn_MouseHover);
			// 
			// bug_report_btn
			// 
			this->bug_report_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bug_report_btn.Image")));
			this->bug_report_btn->Location = System::Drawing::Point(15, 85);
			this->bug_report_btn->Margin = System::Windows::Forms::Padding(15, 3, 15, 5);
			this->bug_report_btn->Name = L"bug_report_btn";
			this->bug_report_btn->Size = System::Drawing::Size(252, 75);
			this->bug_report_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bug_report_btn->TabIndex = 2;
			this->bug_report_btn->TabStop = false;
			this->bug_report_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::bug_report_btn_MouseClick);
			this->bug_report_btn->MouseEnter += gcnew System::EventHandler(this, &main::bug_report_btn_MouseEnter);
			this->bug_report_btn->MouseLeave += gcnew System::EventHandler(this, &main::bug_report_btn_MouseLeave);
			this->bug_report_btn->MouseHover += gcnew System::EventHandler(this, &main::bug_report_btn_MouseHover);
			// 
			// github_btn
			// 
			this->github_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"github_btn.Image")));
			this->github_btn->Location = System::Drawing::Point(15, 154);
			this->github_btn->Margin = System::Windows::Forms::Padding(15, 3, 15, 5);
			this->github_btn->Name = L"github_btn";
			this->github_btn->Size = System::Drawing::Size(252, 75);
			this->github_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->github_btn->TabIndex = 1;
			this->github_btn->TabStop = false;
			this->github_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::github_btn_MouseClick);
			this->github_btn->MouseEnter += gcnew System::EventHandler(this, &main::github_btn_MouseEnter);
			this->github_btn->MouseLeave += gcnew System::EventHandler(this, &main::github_btn_MouseLeave);
			this->github_btn->MouseHover += gcnew System::EventHandler(this, &main::github_btn_MouseHover);
			// 
			// tg_btn
			// 
			this->tg_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tg_btn.Image")));
			this->tg_btn->Location = System::Drawing::Point(15, 223);
			this->tg_btn->Margin = System::Windows::Forms::Padding(15, 3, 15, 15);
			this->tg_btn->Name = L"tg_btn";
			this->tg_btn->Size = System::Drawing::Size(252, 75);
			this->tg_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->tg_btn->TabIndex = 0;
			this->tg_btn->TabStop = false;
			this->tg_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::tg_btn_MouseClick);
			this->tg_btn->MouseEnter += gcnew System::EventHandler(this, &main::tg_btn_MouseEnter);
			this->tg_btn->MouseLeave += gcnew System::EventHandler(this, &main::tg_btn_MouseLeave);
			this->tg_btn->MouseHover += gcnew System::EventHandler(this, &main::tg_btn_MouseHover);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->ClientSize = System::Drawing::Size(282, 433);
			this->Controls->Add(this->settings_panel);
			this->Controls->Add(this->point);
			this->Controls->Add(this->res);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->fore);
			this->Controls->Add(this->umnojenie);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->delenie);
			this->Controls->Add(this->minus_or_plus);
			this->Controls->Add(this->All_clear);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator By. Lonewolf239";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prog_icon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->help_btn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ext_btn))->EndInit();
			this->panel2->ResumeLayout(false);
			this->settings_panel->ResumeLayout(false);
			this->setting_group->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->place_order_btn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bug_report_btn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->github_btn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tg_btn))->EndInit();
			this->ResumeLayout(false);

		}
	private: System::Void delenie_Click(System::Object^ sender, System::EventArgs^ e) {
		math_doing(L'/');
	}
	private: System::Void umnojenie_Click(System::Object^ sender, System::EventArgs^ e) {
		math_doing(L'*');
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_doing(L'-');
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_doing(L'+');
	}
	private: System::Void add_number(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast <Button^>(sender);
		this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		if (this->res_done) {
			this->result->Text = "0";
			this->res_done = false;
		}
		if (this->result->Text->Length > 4)
			return;
		if (this->result->Text == "0") {
			if (button->Text != ",")
				this->result->Text = "";
		}
		if (this->point_set && button->Text == ",")
			return;
		else if (!this->point_set && button->Text == ",")
			this->point_set = true;
		this->result->Text += button->Text;
	}
	private: System::Void res_Click(System::Object^ sender, System::EventArgs^ e) {
		doing_result();
	}
	private: System::Void math_doing(wchar_t match_do) {
		if (this->choice_did || this->res_done)
			return;
		if (this->result->Text == "0,")
			this->result->Text = "0";
		this->first_number = System::Convert::ToSingle(this->result->Text);
		this->user_match = match_do;
		this->result->Text = "0";
		this->point_set = false;
		this->math_choice->Text = System::Convert::ToString(match_do);
		this->choice_did = true;
	}
	private: System::Void doing_result() {
		if (this->choice_did) {
			this->second_number = System::Convert::ToSingle(this->result->Text);
			this->res_done = true;
			this->point_set = false;
			this->math_choice->Text = " ";
			switch (this->user_match) {
			case L'/':
				if (this->second_number == 0) {
					this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					this->result->Text = "Error\nDivision by 0";
					this->choice_did = false;
					return;
				}
				this->tes = this->first_number / this->second_number;
				this->result->Text = System::Convert::ToString(this->tes);
				break;
			case L'*':
				this->tes = this->first_number * this->second_number;
				this->result->Text = System::Convert::ToString(this->tes);
				break;
			case L'-':
				this->tes = this->first_number - this->second_number;
				this->result->Text = System::Convert::ToString(this->tes);
				break;
			case L'+':
				this->tes = this->first_number + this->second_number;
				this->result->Text = System::Convert::ToString(this->tes);
				break;
			}
			this->choice_did = false;
		}
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->result->Text = "0";
		this->math_choice->Text = " ";
		this->point_set = false;
		if (this->res_done) {
			this->first_number = 0;
			this->second_number = 0;
			this->user_match = '0';
			this->choice_did = false;
			this->res_done = false;
			this->tes = 0;
		}
	}
	private: System::Void All_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->result->Text = "0";
		this->math_choice->Text = " ";
		this->point_set = false;
		this->first_number = 0;
		this->second_number = 0;
		this->user_match = '0';
		this->choice_did = false;
		this->res_done = false;
		this->tes = 0;
	}
	private: System::Void minus_or_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		if (this->res_done) {
			this->result->Text = "0";
			this->math_choice->Text = " ";
			this->point_set = false;
			this->res_done = false;
			return;
		}
		float new_num = System::Convert::ToSingle(this->result->Text);
		new_num *= -1;
		this->result->Text = System::Convert::ToString(new_num);
	}
	private: System::Void ext_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			Application::Exit();
	}
	private: System::Void ext_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->ext_btn->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void ext_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->ext_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void help_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			if (!this->settings_panel->Visible) {
				this->settings_panel->Visible = true;
				this->ClientSize = System::Drawing::Size(282, 325);
			}
			else {
				this->settings_panel->Visible = false;
				this->ClientSize = System::Drawing::Size(282, 433);
			}
		}
	}
	private: System::Void help_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->help_btn->BackColor = System::Drawing::Color::DarkGray;
	}
	private: System::Void help_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->help_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void prog_name_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			lastLocation = e->Location;
	}
	private: System::Void prog_name_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->prog_name->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->prog_icon->Cursor = System::Windows::Forms::Cursors::SizeAll;
			int newX = this->Location.X + e->X - lastLocation.X;
			int newY = this->Location.Y + e->Y - lastLocation.Y;
			if (newX < 0)
				newX = 0;
			if (newY < 0)
				newY = 0;
			if (newX + this->Width > screenWidth)
				newX = screenWidth - this->Width;
			if (newY + this->Height > screenHeight)
				newY = screenHeight - this->Height;
			this->Location = Point(newX, newY);
		}
	}
	private: System::Void prog_name_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->prog_name->Cursor = System::Windows::Forms::Cursors::Default;
		this->prog_icon->Cursor = System::Windows::Forms::Cursors::Default;
	}
	private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e) {
		LCID sysLocale = GetSystemDefaultLCID();
		char locale[3];
		GetLocaleInfoA(sysLocale, LOCALE_SISO639LANGNAME, locale, sizeof(locale));
		if (std::string(locale) == "ru") {
			this->Language = false;
			this->Text = L"Калькулятор By. Lonewolf239";
			this->prog_name->Text = L"Калькулятор";
		}
		screenWidth = System::Windows::Forms::Screen::PrimaryScreen->Bounds.Width;
		screenHeight = System::Windows::Forms::Screen::PrimaryScreen->Bounds.Height;
	}
	private: System::Void help_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		ToolTip^ g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (Language) {
			g->ToolTipTitle = "Hint";
			g->SetToolTip(help_btn, "About developer");
		}
		else {
			g->ToolTipTitle = "Подсказка";
			g->SetToolTip(help_btn, "О разработчике");
		}
	}
	private: System::Void tg_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			(gcnew System::Diagnostics::Process())->Start("https://t.me/+VLJzjVRg8ElkZWYy");
	}
	private: System::Void tg_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->tg_btn->Size = System::Drawing::Size(246, 69);
		this->tg_btn->Location = System::Drawing::Point(18, 227);
	}
	private: System::Void tg_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->tg_btn->Size = System::Drawing::Size(252, 75);
		this->tg_btn->Location = System::Drawing::Point(15, 223);
	}
	private: System::Void tg_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		ToolTip^ g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (Language) {
			g->ToolTipTitle = "Hint";
			g->SetToolTip(tg_btn, "Open developer's Telegram");
		}
		else {
			g->ToolTipTitle = "Подсказка";
			g->SetToolTip(tg_btn, "Открыть Telegram разработчика");
		}
	}
	private: System::Void github_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			(gcnew System::Diagnostics::Process())->Start("https://github.com/Lonewolf239");
	}
	private: System::Void github_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->github_btn->Size = System::Drawing::Size(246, 69);
		this->github_btn->Location = System::Drawing::Point(18, 158);
	}
	private: System::Void github_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->github_btn->Size = System::Drawing::Size(252, 75);
		this->github_btn->Location = System::Drawing::Point(15, 154);
	}
	private: System::Void github_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		ToolTip^ g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (Language) {
			g->ToolTipTitle = "Hint";
			g->SetToolTip(github_btn, "Open developer's GitHub");
		}
		else {
			g->ToolTipTitle = "Подсказка";
			g->SetToolTip(github_btn, "Открыть GitHub разработчика");
		}
	}
	private: System::Void bug_report_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			(gcnew System::Diagnostics::Process())->Start("https://t.me/Lonewolf239_BugReportBOT");
	}
	private: System::Void bug_report_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->bug_report_btn->Size = System::Drawing::Size(246, 69);
		this->bug_report_btn->Location = System::Drawing::Point(18, 89);
	}
	private: System::Void bug_report_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		ToolTip^ g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (Language) {
			g->ToolTipTitle = "Hint";
			g->SetToolTip(bug_report_btn, "Report bugs");
		}
		else {
			g->ToolTipTitle = "Подсказка";
			g->SetToolTip(bug_report_btn, "Сообщить об ошибках");
		}
	}
	private: System::Void bug_report_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->bug_report_btn->Size = System::Drawing::Size(252, 75);
		this->bug_report_btn->Location = System::Drawing::Point(15, 85);
	}
	private: System::Void place_order_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			(gcnew System::Diagnostics::Process())->Start("https://t.me/Lonewolf239_OrderBOT");
	}
	private: System::Void place_order_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->place_order_btn->Size = System::Drawing::Size(246, 69);
		this->place_order_btn->Location = System::Drawing::Point(18, 20);
	}
	private: System::Void place_order_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->place_order_btn->Size = System::Drawing::Size(252, 75);
		this->place_order_btn->Location = System::Drawing::Point(15, 16);
	}
	private: System::Void place_order_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		delete g;
		g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (Language) {
			g->ToolTipTitle = "Hint";
			g->SetToolTip(place_order_btn, "Place order");
		}
		else {
			g->ToolTipTitle = "Подсказка";
			g->SetToolTip(place_order_btn, "Оформить заказ");
		}
	}
};
}