#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <algorithm>
#pragma comment(lib, "user32")

using namespace std;

//основные глобальные переменные
string pred_password;
char password[256]{}, password1[256]{};
string password2;
bool first = true, first_scan = true, first_type = true, first_start = true, tr = true;
int user;
int r0 = 0, r1 = 0, r2 = 0, r3 = 0;
int num_fun;
string fun_set0, fun_set1, fun_set2, fun_set3;
string ogr;
string fun0, fun1, fun2, fun3;
string fun_path0, fun_path1, fun_path2, fun_path3;
string pred_info0, pred_info1, pred_info2, pred_info3;
char fun_information0[256]{}, fun_information1[256]{}, fun_information2[256]{}, fun_information3[256]{};
char ch0, ch1, ch2, ch3;
string c0, c1, c2, c3;
string n0, n1, n2, n3;
string f0, f1, f2, f3;
string type0, type1, type2, type3;
string none, secret_data;
string s0, s1, s2, s3;
POINT p;
RECT r;
int x, y;
string choice;


//костыли
void main_menu();
void function_setting();
void create_function();
void change_function();
void change_password();
void log_out();
void function0();
void function1();
void function2();
void function3();

BOOL IsUserAnAdmin() {
	BOOL bResult = FALSE;
	PSID psidAdmin = NULL;
	SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;
	if (AllocateAndInitializeSid(&NtAuthority, 2,
		SECURITY_BUILTIN_DOMAIN_RID,
		DOMAIN_ALIAS_RID_ADMINS,
		0, 0, 0, 0, 0, 0, &psidAdmin)) {
		if (!CheckTokenMembership(NULL, psidAdmin, &bResult))
			bResult = TRUE;
	}
	if (psidAdmin)
		FreeSid(psidAdmin);
	return bResult;
}

//main
int main() {
	bool did = false;
	bool did_pas = false;
	system("mode con cols=88 lines=33");
	HWND consoleWindow = GetConsoleWindow();
	GetWindowRect(consoleWindow, &r);
	x = GetSystemMetrics(SM_CXSCREEN) / 2 - (r.right - r.left) / 2;
	y = GetSystemMetrics(SM_CYSCREEN) / 2 - (r.bottom - r.top) / 2;
	SetWindowPos(consoleWindow, 0, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(handle, &structCursorInfo);
	structCursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(handle, &structCursorInfo);
	srand(static_cast<unsigned int>(time(NULL)));
	system("cls");
	if (!IsUserAnAdmin()) {
		system("cls");
		cout << "\033[32mNo Administrator!\nRun pleH as Administrator\033[0m" << endl;
		Sleep(1500);
		exit(0);
	}
	ifstream userID("C:/Windows/System32/wups4.dll");
	if (userID.is_open()) {
		userID >> user;
		first = false;
		userID.close();
	}
	if (first) {
		user = 1000 + rand() % 8999;
		if (user > 9999)
			user -= 1000;
		first = false;
		ofstream user_id("C:/Windows/System32/wups4.dll");
		user_id << user;
		user_id.close();
	}
	ifstream enter("C:/Windows/System32/wups3.dll");
	if (enter.is_open()) {
		int rf, i = 0;
		char ch;
		getline(enter, password2);
		strcpy_s(password, password2.c_str());
		enter.close();
		cout << "Welcome to \033[31mpleH\033[0m User#" << user << "\n"		\
				"\033[36m=====================\033[0m\n"					\
				"Enter password: 1\n"										\
				"Reset the password: 2\n"									\
				"Exit: ESC\n";
		rf = _getch();
		switch (rf) {
		case 49:
			cout << "\nEnter password: ";
			do {
				ch = _getch();
				if (ch != '\r') {
					if (ch == '\b') {
						if (i > 0) {
							i--;
							cout << "\b \b";
						}
					}
					else {
						password1[i] = ch;
						i++;
						cout << "\033[31m*\033[0m";
					}
				}
			} while (ch != '\r');
			password1[i] = '\0';
			GetCursorPos(&p);
			SetCursorPos(90000000, 900000000);
			BlockInput(true);
			if (strcmp(password1, password) == 0) {
				cout << "\n\n\033[32mAccess allowed\033[0m" << endl;
				Sleep(750);
				main_menu();
			}
			else {
				cout << "\n\n\033[31mIncorrect password\033[0m" << endl;
				Sleep(750);
				SetCursorPos(p.x, p.y);
				BlockInput(false);
				main();
			}
			break;
		case 50:
			system("cls");
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = TRUE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			cout << "This will lead to the complete loss of all data.\nAre you sure about this? \033[32myes\033[0m/\033[31mno\033[0m" << endl;
			cin >> choice;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = FALSE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c) { return std::tolower(c); });
			if (choice == "yes") {
				did_pas = false;
				remove("C:/Windows/System32/wups3.dll");
				remove("C:/Windows/System32/wups4.dll");
				remove("C:/Windows/System32/Rafidfire64.dll");
				remove("C:/Windows/System32/Ragidfire64.dll");
				remove("C:/Windows/System32/Rauidfire64.dll");
				remove("C:/Windows/System32/Rasidfire64.dll");
				remove("C:/Windows/System32/amvrt32.dll");
				remove("C:/Windows/System32/amvgt32.dll");
				remove("C:/Windows/System32/amvit32.dll");
				remove("C:/Windows/System32/amvrit32.dll");
				system("cls");
				cout << "Hello User#" << user << "\nCreate and write down a password\n\033[31m(Don't use a space!):\033[0m ";
				while (!did_pas) {
					GetConsoleCursorInfo(handle, &structCursorInfo);
					structCursorInfo.bVisible = TRUE;
					SetConsoleCursorInfo(handle, &structCursorInfo);
					system("cls");
					cout << "Hello User#" << user << "\nCreate and write down a password\n\033[31m(Don't use a space!):\033[0m ";
					while (!did) {
						GetConsoleCursorInfo(handle, &structCursorInfo);
						structCursorInfo.bVisible = TRUE;
						SetConsoleCursorInfo(handle, &structCursorInfo);
						system("cls");
						cout << "Hello User#" << user << "\nCreate and write down a password\n\033[31m(Don't use a space!):\033[0m ";
						getline(cin, pred_password);
						for (int i = 0; i < pred_password.length(); i++) {
							if (pred_password[i] == ' ') {
								GetCursorPos(&p);
								SetCursorPos(90000000, 900000000);
								BlockInput(true);
								GetConsoleCursorInfo(handle, &structCursorInfo);
								structCursorInfo.bVisible = FALSE;
								SetConsoleCursorInfo(handle, &structCursorInfo);
								system("cls");
								cout << "\033[31mDon't use a space!\033[0m";
								Sleep(1000);
								did = false;
								SetCursorPos(p.x, p.y);
								BlockInput(false);
								break;
							}
							else
								did = true;
						}
					}
					GetConsoleCursorInfo(handle, &structCursorInfo);
					structCursorInfo.bVisible = FALSE;
					SetConsoleCursorInfo(handle, &structCursorInfo);
					GetCursorPos(&p);
					SetCursorPos(90000000, 900000000);
					BlockInput(true);
					if (pred_password.length() > 37) {
						cout << "\033[31mThe maximum number of characters is 36!\033[0m";
						Sleep(1500);
						SetCursorPos(p.x, p.y);
						BlockInput(false);
					}
					else {
						strcpy_s(password, pred_password.c_str());
						did_pas = true;
					}
				}
				ofstream create_pasfile("C:/Windows/System32/wups3.dll");
				create_pasfile << password;
				create_pasfile.close();
				main_menu();
			}
			else
				main();
			break;
		case 27:
			exit(0);
			break;
		default: main();
		}
	}
	else {
		while (!did_pas) {
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = TRUE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			system("cls");
			cout << "Hello User#" << user << "\nCreate and write down a password\n\033[31m(Don't use a space!):\033[0m ";
			while (!did) {
				GetConsoleCursorInfo(handle, &structCursorInfo);
				structCursorInfo.bVisible = TRUE;
				SetConsoleCursorInfo(handle, &structCursorInfo);
				system("cls");
				cout << "Hello User#" << user << "\nCreate and write down a password\n\033[31m(Don't use a space!):\033[0m ";
				getline(cin, pred_password);
				for (int i = 0; i < pred_password.length(); i++) {
					if (pred_password[i] == ' ') {
						GetCursorPos(&p);
						SetCursorPos(90000000, 900000000);
						BlockInput(true);
						GetConsoleCursorInfo(handle, &structCursorInfo);
						structCursorInfo.bVisible = FALSE;
						SetConsoleCursorInfo(handle, &structCursorInfo);
						system("cls");
						cout << "\033[31mDon't use a space!\033[0m";
						Sleep(1000);
						did = false;
						SetCursorPos(p.x, p.y);
						BlockInput(false);
						break;
					}
					else
						did = true;
				}
			}
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = FALSE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			GetCursorPos(&p);
			SetCursorPos(90000000, 900000000);
			BlockInput(true);
			if (pred_password.length() > 37) {
				cout << "\033[31mThe maximum number of characters is 36!\033[0m";
				Sleep(1500);
				SetCursorPos(p.x, p.y);
				BlockInput(false);
			}
			else {
				strcpy_s(password, pred_password.c_str());
				did_pas = true;
			}
		}
		ofstream create_pasfile("C:/Windows/System32/wups3.dll");
		create_pasfile << password;
		create_pasfile.close();
		main_menu();
	}
}

//главное меню
void main_menu() {
	if (first_start) {
		system("cls");
		cout << "Note: Always use \"_\" instead of a space"		\
			<< "\033[32m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"\
			"BBBBB   YY  YY\n"									\
			"BB  BB   YYYY\n"									\
			"BBBBB     YY\n"									\
			"BB  BB    YY\n"									\
			"BBBBB     YY    **\n\n"							\
			"LL       OOOO   NN  NN  EEEEE  WW   WW   OOOO   LL      FFFFFF   2222    3333    9999\n"	\
			"LL      OO  OO  NNN NN  EE     WW   WW  OO  OO  LL      FF      22  22  3   33  99  99\n"	\
			"LL      OO  OO  NN NNN  EEEE   WW W WW  OO  OO  LL      FFFF       22     333    99999\n"	\
			"LL      OO  OO  NN  NN  EE     WWWWWWW  OO  OO  LL      FF       22     3   33      99\n"	\
			"LLLLLL   OOOO   NN  NN  EEEEE   WW WW    OOOO   LLLLLL  FF      222222   3333    9999\033[0m";;
		Sleep(3000);
		first_start = false;
		SetCursorPos(p.x, p.y);
		BlockInput(false);
	}
	if (first_scan) {
		ifstream func0("C:/Windows/System32/Rafidfire64.dll");
		if (func0.is_open()) {
			ifstream fuc0("C:/Windows/System32/amvrt32.dll");
			if (fuc0.is_open()) {
				fuc0 >> fun_set0;
			}
			num_fun = 1;
			ogr = "\n\033[36m|=======================|\033[0m\n";
			c0 = ": ";
			n0 = "\n";
			f0 = ": 1";
			getline(func0, pred_info0);
			strcpy_s(fun_information0, pred_info0.c_str());
			func0.close();
			for (int i = 0; i < 256; i++) {
				if (fun_information0[i] == ';')
					r0++;
				if (fun_information0[i] != ';' && r0 == 0) {
					if (fun_information0[i] == '_')
						fun_information0[i] = ' ';
					fun0 += fun_information0[i];
				}
				if (fun_information0[i] != ';' && r0 == 1)
					fun_path0 += fun_information0[i];
				if (fun_information0[i] != ';' && r0 == 2)
					ch0 += fun_information0[i];
			}
		}
		ifstream func1("C:/Windows/System32/Ragidfire64.dll");
		if (func1.is_open()) {
			ifstream fuc1("C:/Windows/System32/amvgt32.dll");
			if (fuc1.is_open()) {
				fuc1 >> fun_set1;
			}
			num_fun = 2;
			c1 = ": ";
			n1 = "\n";
			f1 = ": 2";
			getline(func1, pred_info1);
			strcpy_s(fun_information1, pred_info1.c_str());
			func1.close();
			for (int i = 0; i < 256; i++) {
				if (fun_information1[i] == ';')
					r1++;
				if (fun_information1[i] != ';' && r1 == 0) {
					if (fun_information1[i] == '_')
						fun_information1[i] = ' ';
					fun1 += fun_information1[i];
				}
				if (fun_information1[i] != ';' && r1 == 1)
					fun_path1 += fun_information1[i];
				if (fun_information1[i] != ';' && r1 == 2)
					ch1 += fun_information1[i];
			}
		}
		ifstream func2("C:/Windows/System32/Rauidfire64.dll");
		if (func2.is_open()) {
			ifstream fuc2("C:/Windows/System32/amvit32.dll");
			if (fuc2.is_open()) {
				fuc2 >> fun_set2;
			}
			num_fun = 3;
			c2 = ": ";
			n2 = "\n";
			f2 = ": 3";
			getline(func2, pred_info2);
			strcpy_s(fun_information2, pred_info2.c_str());
			func2.close();
			for (int i = 0; i < 256; i++) {
				if (fun_information2[i] == ';')
					r2++;
				if (fun_information2[i] != ';' && r2 == 0) {
					if (fun_information2[i] == '_')
						fun_information2[i] = ' ';
					fun2 += fun_information2[i];
				}
				if (fun_information2[i] != ';' && r2 == 1)
					fun_path2 += fun_information2[i];
				if (fun_information2[i] != ';' && r2 == 2)
					ch2 += fun_information2[i];
			}
		}
		ifstream func3("C:/Windows/System32/Rasidfire64.dll");
		if (func3.is_open()) {
			ifstream fuc3("C:/Windows/System32/amvrit32.dll");
			if (fuc3.is_open()) {
				fuc3 >> fun_set3;
			}
			num_fun = 4;
			c3 = ": ";
			n3 = "\n";
			f3 = ": 4";
			getline(func3, pred_info3);
			strcpy_s(fun_information3, pred_info3.c_str());
			func3.close();
			for (int i = 0; i < 256; i++) {
				if (fun_information3[i] == ';')
					r3++;
				n3 = "\n";
				if (fun_information3[i] != ';' && r3 == 0) {
					if (fun_information3[i] == '_')
						fun_information3[i] = ' ';
					fun3 += fun_information3[i];
				}
				if (fun_information3[i] != ';' && r3 == 1)
					fun_path3 += fun_information3[i];
				if (fun_information3[i] != ';' && r3 == 2)
					ch3 += fun_information3[i];
			}
		}
		first_scan = false;
	}
	string n, n33;
	if (fun0 == "" || fun3 != "")
		n33 = "\n";
	else
		n33 = "";
	if (fun0 == "" && fun1 == "" && fun2 == "" && fun3 == "") {
		n = "\n\n\n\n\n";
		s0 = "", s1 = "", s2 = "", s3 = "";
	}
	else if (fun0 != "" && fun1 == "" && fun2 == "" && fun3 == "") {
		n = "\n\n\n";
		s0 = "\033[36m|\033[0m", s1 = "", s2 = "", s3 = "";
	}
	else if (fun0 != "" && fun1 != "" && fun2 == "" && fun3 == "") {
		n += "\n\n";
		s0 = "\033[36m|\033[0m", s1 = "\033[36m|\033[0m", s2 = "", s3 = "";
	}
	else if (fun0 != "" && fun1 != "" && fun2 != "" && fun3 == "") {
		n = "\n";
		s0 = "\033[36m|\033[0m", s1 = "\033[36m|\033[0m", s2 = "\033[36m|\033[0m", s3 = "";
	}
	else {
		n = "\n";
		s0 = "\033[36m|\033[0m", s1 = "\033[36m|\033[0m", s2 = "\033[36m|\033[0m", s3 = "\033[36m|\033[0m";
	}
	int ch;
	char ch_str;
	system("cls");
	cout << 
		"\033[36m|====== \033[31mpleH_v1.4\033[36m ======|\n"	\
		"|\033[33m    By. Lonewolf239    \033[36m|\n"			\
		"|\033[0m  User#" << user << " in system  \033[36m|\n"	\
		"|=======================|\n"							\
		"|\033[0mFunction setting:     1\033[36m|\n"			\
		"|\033[0mChange password:      2\033[36m|\n"			\
		"|\033[0mLog out:              3\033[36m|\n"			\
		"|=======================|\n"							\
		"|\033[0mDeveloper's Telegram  4\033[36m|\n"			\
		"|\033[0mOrder development     5\033[36m|\n"			\
		"|\033[0mBug report            6\033[36m|\n"			\
		"|\033[0mExit:               ESC\033[36m|"				\
		<< ogr													\
		<< s0 << fun0 << ch0 << s0 << n0					\
		<< s1 << fun1 << ch1 << s1 << n1					\
		<< s2 << fun2 << ch2 << s2 << n2					\
		<< s3 << fun3 << ch3 << s3 <<	n33 <<				\
		"\033[36m|=======================|\033[0m"				\
		<< n													\
		<< "\033[32m\n\n\n\n\n"									\
		"BBBBB   YY  YY\n"										\
		"BB  BB   YYYY\n"										\
		"BBBBB     YY\n"										\
		"BB  BB    YY\n"										\
		"BBBBB     YY    **\n\n"								\
		"LL       OOOO   NN  NN  EEEEE  WW   WW   OOOO   LL      FFFFFF   2222    3333    9999\n"	\
		"LL      OO  OO  NNN NN  EE     WW   WW  OO  OO  LL      FF      22  22  3   33  99  99\n"	\
		"LL      OO  OO  NN NNN  EEEE   WW W WW  OO  OO  LL      FFFF       22     333    99999\n"	\
		"LL      OO  OO  NN  NN  EE     WWWWWWW  OO  OO  LL      FF       22     3   33      99\n"	\
		"LLLLLL   OOOO   NN  NN  EEEEE   WW WW    OOOO   LLLLLL  FF      222222   3333    9999\033[0m";


	ch_str = ch = _getch();
	switch (ch) {
	case 49:
		function_setting();
		break;
	case 50:
		change_password();
		break;
	case 51:
		log_out();
		break;
	case 52:
		system("explorer https://t.me/+VLJzjVRg8ElkZWYy");
		main_menu();
		break;
	case 53:
		system("explorer https://t.me/Lonewolf239_OrderBOT");
		main_menu();
		break;
	case 54:
		system("explorer https://t.me/Lonewolf239_BugReportBOT");
		main_menu();
		break;
	case 27:
		exit(0);
		break;
	}
	if (ch_str == ch0 && fun0 != "")
		function0();
	if (ch_str == ch1 && fun1 != "")
		function1();
	if (ch_str == ch2 && fun2 != "")
		function2();
	if (ch_str == ch3 && fun3 != "")
		function3();
	main_menu();
}

//настройка функии
void function_setting() {
	system("cls");
	int g;
	cout << "Function Settings"								\
		"\n\033[36m|=======================|\033[0m\n"		\
		"Create a function: 1\n"							\
		"Change function: 2\n"								\
		"Exit: ESC\n"										\
		<< "\033[32m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"		\
		"BBBBB   YY  YY\n"									\
		"BB  BB   YYYY\n"									\
		"BBBBB     YY\n"									\
		"BB  BB    YY\n"									\
		"BBBBB     YY    **\n\n"							\
		"LL       OOOO   NN  NN  EEEEE  WW   WW   OOOO   LL      FFFFFF   2222    3333    9999\n"	\
		"LL      OO  OO  NNN NN  EE     WW   WW  OO  OO  LL      FF      22  22  3   33  99  99\n"	\
		"LL      OO  OO  NN NNN  EEEE   WW W WW  OO  OO  LL      FFFF       22     333    99999\n"	\
		"LL      OO  OO  NN  NN  EE     WWWWWWW  OO  OO  LL      FF       22     3   33      99\n"	\
		"LLLLLL   OOOO   NN  NN  EEEEE   WW WW    OOOO   LLLLLL  FF      222222   3333    9999\033[0m";
	g = _getch();
	switch (g) {
	case 49:
		create_function();
		break;
	case 50:
		change_function();
		break;
	case 27:
		main_menu();
		break;
	default:
		function_setting();
	}
}

//создание функции
void create_function() {
	string fun_info[4];
	char new_path[512]{};
	int ch = 0;
	string fun_clas;
	char chc;
	string right_name, path;
	char name[512]{};
	bool did = false, did1 = false, did2 = false;
	system("cls");
	if (num_fun != 4) {
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO structCursorInfo;
		GetConsoleCursorInfo(handle, &structCursorInfo);
		structCursorInfo.bVisible = TRUE;
		SetConsoleCursorInfo(handle, &structCursorInfo);
		while (!did2) {
			system("cls");
			cout << "Function name\n\033[31m(Use \"_\" instead of a space)\033[0m: ";
			cin >> name;
			right_name = name;
			replace(right_name.begin(), right_name.end(), '_', ' ');
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = FALSE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			if (right_name.length() > 20) {
				right_name = "";
				GetCursorPos(&p);
				SetCursorPos(90000000, 900000000);
				BlockInput(true);
				cout << "\033[31mThe maximum number of characters is 20!\033[0m";
				Sleep(1000);
				SetCursorPos(p.x, p.y);
				BlockInput(false);
			}
			else if (right_name == "Exit" || right_name == fun0 || right_name == fun1 || right_name == fun2 || right_name == fun3) {
				right_name = "";
				GetCursorPos(&p);
				SetCursorPos(90000000, 900000000);
				BlockInput(true);
				cout << "\033[31mThis name must not be used!\033[0m";
				Sleep(1000);
				SetCursorPos(p.x, p.y);
				BlockInput(false);
			}
			else {
				if (right_name.length() < 20) {
					for (int i = right_name.length(); i < 20; i++)
						if (i <= right_name.length())
							right_name += ":";
						else
							right_name += "_";
				}
				did2 = true;
			}
		}
		while (!did1) {
			system("cls");
			cout << "What will the function do?\nOpening a file: 1\nOpening a link: 2\nCreating/opening a secret .txt file: 3\nOpening an application: 4" << endl;
			ch = _getch();
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = TRUE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			if (ch == 49) {
				system("cls");
				fun_clas = "0";
				cout << "Enter file path\n(Example: \"C:\\Windows\\something.txt\" \033[31mDO NOT USE \";\"!)\033[0m:\n";
				cin.ignore();
				getline(cin, path);
				if (path.length() > 124) {
					GetCursorPos(&p);
					SetCursorPos(90000000, 900000000);
					BlockInput(true);
					cout << "\033[31mThe maximum number of characters is 124!\033[0m";
					Sleep(1000);
					SetCursorPos(p.x, p.y);
					BlockInput(false);
				}
				else
					did1 = true;
			}
			if (ch == 50) {
				system("cls");
				fun_clas = "1";
				cout << "Enter link\n(Example: \"https://youtu.be/dQw4w9WgXcQ\" \033[31mDO NOT USE \";\"!):\033[0m\n";
				cin.ignore();
				getline(cin, path);
				if (path.length() > 124) {
					GetCursorPos(&p);
					SetCursorPos(90000000, 900000000);
					BlockInput(true);
					cout << "\033[31mThe maximum number of characters is 124!\033[0m";
					Sleep(1000);
					SetCursorPos(p.x, p.y);
					BlockInput(false);
				}
				else
					did1 = true;
			}
			if (ch == 51) {
				system("cls");
				fun_clas = "2";
				path = "C:/Windows/System32/atig5txx.dll";
				ofstream create("C:/Windows/System32/atig5txx.dll");
				create << "Hello, World!";
				create.close();
				did1 = true;
			}
			if (ch == 52) {
				system("cls");
				fun_clas = "3";
				cout << "Enter file path\n(Example: \"C:\\Windows\\something.exe\" \033[31mDO NOT USE \";\"!):\033[0m\n";
				cin.ignore();
				getline(cin, path);
				if (path.length() > 124) {
					GetCursorPos(&p);
					SetCursorPos(90000000, 900000000);
					BlockInput(true);
					cout << "\033[31mThe maximum number of characters is 124!\033[0m";
					Sleep(1000);
					SetCursorPos(p.x, p.y);
					BlockInput(false);
				}
				else
					did1 = true;
			}
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = FALSE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
		}
		while (!did) {
			system("cls");
			cout << "Which key to open this function: ";
			ch = chc = _getch();
			if (ch == 49 || ch == 50 || ch == 9 || ch == 32 || ch == 10 || ch == 27			\
				|| ch == 13 || ch == 51 || ch == 52 || ch == 8 || ch == 53 || ch == 54 ||	\
				chc == ch0 || chc == ch1 || chc == ch2 || chc == ch3) {
				GetCursorPos(&p);
				SetCursorPos(90000000, 900000000);
				BlockInput(true);
				cout << "\n\033[31mThis key must not be used!\033[0m";
				Sleep(1000);
				SetCursorPos(p.x, p.y);
				BlockInput(false);
			}
			else
				did = true;
		}
		system("cls");
		GetCursorPos(&p);
		SetCursorPos(90000000, 900000000);
		BlockInput(true);
		for (int i = 0; i < 2 + rand() % 3; i++) {
			cout << "Done wait a bit.";
			Sleep(200);
			system("cls");
			cout << "Done wait a bit..";
			Sleep(200);
			system("cls");
			cout << "Done wait a bit...";
			Sleep(200);
			system("cls");
		}
		if (num_fun == 0) {
			ogr = "\n\033[36m|=======================|\033[0m\n";
			fun0 = right_name;
			fun_info[0] = name;
			fun_info[1] = fun_path0 = path;
			fun_info[2] = ch0 = chc;
			fun_info[3] = fun_set0 = fun_clas;
			c0 = ": ";
			n0 = "\n";
			f0 = ": 1";
			ofstream f("C:/Windows/System32/amvrt32.dll");
			f << fun_info[3];
			f.close();
			ofstream func0("C:/Windows/System32/Rafidfire64.dll");
			func0 << fun_info[0] << ";" << fun_info[1] << ";" << fun_info[2] << ";";
			func0.close();
		}
		if (num_fun == 1) {
			fun1 = right_name;
			fun_info[0] = name;
			fun_info[1] = fun_path1 = path;
			fun_info[2] = ch1 = chc;
			fun_info[3] = fun_set1 = fun_clas;
			c1 = ": ";
			n1 = "\n";
			f1 = ": 2";
			ofstream f("C:/Windows/System32/amvgt32.dll");
			f << fun_info[3];
			f.close();
			ofstream func1("C:/Windows/System32/Ragidfire64.dll");
			func1 << fun_info[0] << ";" << fun_info[1] << ";" << fun_info[2] << ";" << fun_info[3];
			func1.close();
		}
		if (num_fun == 2) {
			fun2 = right_name;
			fun_info[0] = name;
			fun_info[1] = fun_path2 = path;
			fun_info[2] = ch2 = chc;
			fun_info[3] = fun_set2 = fun_clas;
			c2 = ": ";
			n2 = "\n";
			f2 = ": 3";
			ofstream f("C:/Windows/System32/amvit32.dll");
			f << fun_info[3];
			f.close();
			ofstream func2("C:/Windows/System32/Rauidfire64.dll");
			func2 << fun_info[0] << ";" << fun_info[1] << ";" << fun_info[2] << ";" << fun_info[3];
			func2.close();
		}
		if (num_fun == 3) {
			fun3 = right_name;
			fun_info[0] = name;
			fun_info[1] = fun_path3 = path;
			fun_info[2] = ch3 = chc;
			fun_info[3] = fun_set3 = fun_clas;
			c3 = ": ";
			n3 = "\n";
			f3 = ": 4";
			ofstream f("C:/Windows/System32/amvrit32.dll");
			f << fun_info[3];
			f.close();
			ofstream func3("C:/Windows/System32/Rasidfire64.dll");
			func3 << fun_info[0] << ";" << fun_info[1] << ";" << fun_info[2] << ";" << fun_info[3];
			func3.close();
		}
		num_fun++;
		SetCursorPos(p.x, p.y);
		BlockInput(false);
		function_setting();
	}
	else {
		cout << "\033[31mMaximum number of functions reached!\033[0m" << endl;
		Sleep(1500);
		function_setting();
	}
}

//изменение функции
void change_function() {
	int c, g;
	string ch, n;
	if (tr) {
		if (fun0 != "" && fun1 == "" && fun2 == "" && fun3 == "")
			n = "\n\n\n";
		if (fun_set0 == "0")
			type0 = "Opens a file";
		if (fun_set0 == "1")
			type0 = "Opens a link";
		if (fun_set0 == "2") {
			type0 = "Opens a secret file";
			fun_path0 = "SECRET";
		}
		if (fun_set0 == "3")
			type0 = "Opens the application";
		//
		if (fun0 != "" && fun1 != "" && fun2 == "" && fun3 == "")
			n += "\n\n";
		if (fun_set1 == "0")
			type1 = "Opens a file";
		if (fun_set1 == "1")
			type1 = "Opens a link";
		if (fun_set1 == "2") {
			type1 = "Opens a secret file";
			fun_path1 = "SECRET";
		}
		if (fun_set1 == "3")
			type1 = "Opens the application";
		//
		if (fun0 != "" && fun1 != "" && fun2 != "" && fun3 == "")
			n = "\n";
		if (fun_set2 == "0")
			type2 = "Opens a file";
		if (fun_set2 == "1")
			type2 = "Opens a link";
		if (fun_set2 == "2") {
			type2 = "Opens a secret file";
			fun_path2 = "SECRET";
		}
		if (fun_set2 == "3")
			type2 = "Opens the application";
		//
		if (fun_set3 == "0")
			type3 = "Opens a file";
		if (fun_set3 == "1")
			type3 = "Opens a link";
		if (fun_set3 == "2") {
			type3 = "Opens a secret file";
			fun_path3 = "SECRET";
		}
		if (fun_set3 == "3")
			type3 = "Opens the application";
		type3 = "Opens the application";
		//
		if (fun0 == "") {
			none = "\033[31mEMPTY\033[0m\n";
			n = "\n\n\n";
		}
		else
			none = "";
	}
	system("cls");
	cout << "Functions:\n"
		"\033[36m=======================\033[0m\n"			\
		<< none << fun0 << f0 << n0							\
		<< fun1 << f1 << n1									\
		<< fun2 << f2 << n2									\
		<< fun3 << f3 << n3 <<								\
		"\033[36m=======================\033[0m\n"			\
		"Exit: ESC\nRemove functions: Backspace"			\
		<< n												\
		<< "\033[32m\n\n\n\n\n\n\n\n\n\n\n\n\n\n"			\
		"BBBBB   YY  YY\n"									\
		"BB  BB   YYYY\n"									\
		"BBBBB     YY\n"									\
		"BB  BB    YY\n"									\
		"BBBBB     YY    **\n\n"							\
		"LL       OOOO   NN  NN  EEEEE  WW   WW   OOOO   LL      FFFFFF   2222    3333    9999\n"	\
		"LL      OO  OO  NNN NN  EE     WW   WW  OO  OO  LL      FF      22  22  3   33  99  99\n"	\
		"LL      OO  OO  NN NNN  EEEE   WW W WW  OO  OO  LL      FFFF       22     333    99999\n"	\
		"LL      OO  OO  NN  NN  EE     WWWWWWW  OO  OO  LL      FF       22     3   33      99\n"	\
		"LLLLLL   OOOO   NN  NN  EEEEE   WW WW    OOOO   LLLLLL  FF      222222   3333    9999\033[0m";
	g = _getch();
	switch (g) {
	case 49:
		if (fun0 != "") {
			system("cls");
			cout << "Function information:\n"						\
				"\033[36m=======================\033[0m\n"			\
				"Name: " << fun0 << "\n"							\
				"Function Path/Link: " << fun_path0 << "\n"			\
				"Key used: " << ch0 << "\n"							\
				"Function type: " << type0 <<						\
				"\n\033[36m=======================\033[0m\n"		\
				"Press any key to exit..."							\
				<< "\033[32m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"			\
				"BBBBB   YY  YY\n"									\
				"BB  BB   YYYY\n"									\
				"BBBBB     YY\n"									\
				"BB  BB    YY\n"									\
				"BBBBB     YY    **\n\n"							\
				"LL       OOOO   NN  NN  EEEEE  WW   WW   OOOO   LL      FFFFFF   2222    3333    9999\n"	\
				"LL      OO  OO  NNN NN  EE     WW   WW  OO  OO  LL      FF      22  22  3   33  99  99\n"	\
				"LL      OO  OO  NN NNN  EEEE   WW W WW  OO  OO  LL      FFFF       22     333    99999\n"	\
				"LL      OO  OO  NN  NN  EE     WWWWWWW  OO  OO  LL      FF       22     3   33      99\n"	\
				"LLLLLL   OOOO   NN  NN  EEEEE   WW WW    OOOO   LLLLLL  FF      222222   3333    9999\033[0m";
			c = _getch();
		}
		else
			change_function();
		break;
	case 50:
		if (fun1 != "") {
			system("cls");
			cout << "Function information:\n"						\
				"\033[36m=======================\033[0m\n"			\
				"Name: " << fun1 << "\n"							\
				"Function Path/Link: " << fun_path1 << "\n"			\
				"Key used: " << ch1 << "\n"							\
				"Function type: " << type1 <<						\
				"\n\033[36m=======================\033[0m\n"		\
				"Press any key to exit..."							\
				<< "\033[32m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"			\
				"BBBBB   YY  YY\n"									\
				"BB  BB   YYYY\n"									\
				"BBBBB     YY\n"									\
				"BB  BB    YY\n"									\
				"BBBBB     YY    **\n\n"							\
				"LL       OOOO   NN  NN  EEEEE  WW   WW   OOOO   LL      FFFFFF   2222    3333    9999\n"	\
				"LL      OO  OO  NNN NN  EE     WW   WW  OO  OO  LL      FF      22  22  3   33  99  99\n"	\
				"LL      OO  OO  NN NNN  EEEE   WW W WW  OO  OO  LL      FFFF       22     333    99999\n"	\
				"LL      OO  OO  NN  NN  EE     WWWWWWW  OO  OO  LL      FF       22     3   33      99\n"	\
				"LLLLLL   OOOO   NN  NN  EEEEE   WW WW    OOOO   LLLLLL  FF      222222   3333    9999\033[0m";
			c = _getch();
		}
		else
			change_function();
		break;
	case 51:
		if (fun2 != "") {
			system("cls");
			cout << "Function information:\n"						\
				"\033[36m=======================\033[0m\n"			\
				"Name: " << fun2 << "\n"							\
				"Function Path/Link: " << fun_path2 << "\n"			\
				"Key used: " << ch2 << "\n"							\
				"Function type: " << type2 <<						\
				"\n\033[36m=======================\033[0m\n"		\
				"Press any key to exit..."							\
				<< "\033[32m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"			\
				"BBBBB   YY  YY\n"									\
				"BB  BB   YYYY\n"									\
				"BBBBB     YY\n"									\
				"BB  BB    YY\n"									\
				"BBBBB     YY    **\n\n"							\
				"LL       OOOO   NN  NN  EEEEE  WW   WW   OOOO   LL      FFFFFF   2222    3333    9999\n"	\
				"LL      OO  OO  NNN NN  EE     WW   WW  OO  OO  LL      FF      22  22  3   33  99  99\n"	\
				"LL      OO  OO  NN NNN  EEEE   WW W WW  OO  OO  LL      FFFF       22     333    99999\n"	\
				"LL      OO  OO  NN  NN  EE     WWWWWWW  OO  OO  LL      FF       22     3   33      99\n"	\
				"LLLLLL   OOOO   NN  NN  EEEEE   WW WW    OOOO   LLLLLL  FF      222222   3333    9999\033[0m";
			c = _getch();
		}
		else
			change_function();
		break;
	case 52:
		if (fun3 != "") {
			system("cls");
			cout << "Function information:\n"						\
				"\033[36m=======================\033[0m\n"			\
				"Name: " << fun3 << "\n"							\
				"Function Path/Link: " << fun_path3 << "\n"			\
				"Key used: " << ch3 << "\n"							\
				"Function type: " << type3 <<						\
				"\n\033[36m=======================\033[0m\n"		\
				"Press any key to exit..."							\
				<< "\033[32m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"			\
				"BBBBB   YY  YY\n"									\
				"BB  BB   YYYY\n"									\
				"BBBBB     YY\n"									\
				"BB  BB    YY\n"									\
				"BBBBB     YY    **\n\n"							\
				"LL       OOOO   NN  NN  EEEEE  WW   WW   OOOO   LL      FFFFFF   2222    3333    9999\n"	\
				"LL      OO  OO  NNN NN  EE     WW   WW  OO  OO  LL      FF      22  22  3   33  99  99\n"	\
				"LL      OO  OO  NN NNN  EEEE   WW W WW  OO  OO  LL      FFFF       22     333    99999\n"	\
				"LL      OO  OO  NN  NN  EE     WWWWWWW  OO  OO  LL      FF       22     3   33      99\n"	\
				"LLLLLL   OOOO   NN  NN  EEEEE   WW WW    OOOO   LLLLLL  FF      222222   3333    9999\033[0m";
			c = _getch();
		}
		else
			change_function();
		break;
	case 27:
		function_setting();
		break;
	case 8:
		if (fun0 != "") {
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_CURSOR_INFO structCursorInfo;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = TRUE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			system("cls");
			cout << "Are you sure you want to remove all functions? \033[32myes\033[0m/\033[31mno\033[0m" << endl;
			cin >> ch;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = FALSE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			transform(ch.begin(), ch.end(), ch.begin(), [](unsigned char c) { return tolower(c); });
			if (ch == "yes") {
				GetCursorPos(&p);
				SetCursorPos(90000000, 900000000);
				BlockInput(true);
				for (int i = 0; i < 2 + rand() % 3; i++) {
					system("cls");
					cout << "Just a second.";
					Sleep(200);
					system("cls");
					cout << "Just a second..";
					Sleep(200);
					system("cls");
					cout << "Just a second...";
					Sleep(200);
					system("cls");
				}
				num_fun = 0, ogr = "", fun0 = "", f0 = "", c0 = "", ch0 = '\0', n0 = "", fun1 = "", c1 = "", f1 = "", ch1 = '\0', n1 = "", fun2 = "", f2 = "", c2 = "", ch2 = '\0', n2 = "", fun3 = "", f3 = "", c3 = "", ch3 = '\0', n3 = "";
				remove("C:/Windows/System32/Rafidfire64.dll");
				remove("C:/Windows/System32/Ragidfire64.dll");
				remove("C:/Windows/System32/Rauidfire64.dll");
				remove("C:/Windows/System32/Rasidfire64.dll");
				remove("C:/Windows/System32/amvrt32.dll");
				remove("C:/Windows/System32/amvgt32.dll");
				remove("C:/Windows/System32/amvit32.dll");
				remove("C:/Windows/System32/amvrit32.dll");
				SetCursorPos(p.x, p.y);
				BlockInput(false);
			}
		}
		change_function();
		break;
	}
	change_function();
}

//смена пароля
void change_password() {
	string new_password;
	int pa;
	bool did = false;
	system("cls");
	cout << "\033[36m=======================\033[0m\n"		\
		"Current Password: \033[33m" << password <<			\
		"\033[0m\nChange password: Space"					\
		"\nCancel: ESC\n"									\
		"\033[36m=====================\033[0m\n"			\
		<< "\033[32m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"		\
		"BBBBB   YY  YY\n"									\
		"BB  BB   YYYY\n"									\
		"BBBBB     YY\n"									\
		"BB  BB    YY\n"									\
		"BBBBB     YY    **\n\n"							\
		"LL       OOOO   NN  NN  EEEEE  WW   WW   OOOO   LL      FFFFFF   2222    3333    9999\n"	\
		"LL      OO  OO  NNN NN  EE     WW   WW  OO  OO  LL      FF      22  22  3   33  99  99\n"	\
		"LL      OO  OO  NN NNN  EEEE   WW W WW  OO  OO  LL      FFFF       22     333    99999\n"	\
		"LL      OO  OO  NN  NN  EE     WWWWWWW  OO  OO  LL      FF       22     3   33      99\n"	\
		"LLLLLL   OOOO   NN  NN  EEEEE   WW WW    OOOO   LLLLLL  FF      222222   3333    9999\033[0m";
	pa = _getch();
	if (pa == 32) {
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO structCursorInfo;
		while (!did) {
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = TRUE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			system("cls");
			cout << "Enter a new password\n\033[31m(Don't use a space!):\033[0m ";
			getline(cin, new_password);
			for (int i = 0; i < new_password.length(); i++) {
				if (new_password[i] == ' ') {
					GetCursorPos(&p);
					SetCursorPos(90000000, 900000000);
					BlockInput(true);
					GetConsoleCursorInfo(handle, &structCursorInfo);
					structCursorInfo.bVisible = FALSE;
					SetConsoleCursorInfo(handle, &structCursorInfo);
					system("cls");
					cout << "\033[31mDon't use a space!\033[0m";
					Sleep(1000);
					did = false;
					SetCursorPos(p.x, p.y);
					BlockInput(false);
					break;
				}
				else
					did = true;
			}
		}
		GetConsoleCursorInfo(handle, &structCursorInfo);
		structCursorInfo.bVisible = FALSE;
		SetConsoleCursorInfo(handle, &structCursorInfo);
		strcpy_s(password, new_password.c_str());
		system("cls");
		GetCursorPos(&p);
		SetCursorPos(90000000, 900000000);
		BlockInput(true);
		for (int i = 0; i < 2 + rand() % 3; i++) {
			cout << "Just a second.";
			Sleep(200);
			system("cls");
			cout << "Just a second..";
			Sleep(200);
			system("cls");
			cout << "Just a second...";
			Sleep(200);
			system("cls");
		}
		ofstream new_pass("C:/Windows/System32/wups3.dll");
		new_pass << new_password;
		new_pass.close();
		cout << "\033[32mDONE!\033[0m";
		Sleep(1000);
		SetCursorPos(p.x, p.y);
		BlockInput(false);
	}
	else if (pa == 27)
		main_menu();
	else
		change_password();
}

//функция 1
void function0() {
	int ch;
	//0 file | 1 link | 2 secret |3 app
	system("cls");
	if (fun_set0 == "0") {
		ofstream file_bat("C:/Windows/run.bat");
		file_bat << "@echo OFF\nexplorer \"" << fun_path0 << "\"";
		file_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
	if (fun_set0 == "1") {
		ofstream link_bat("C:/Windows/run.bat");
		link_bat << "@echo OFF\nexplorer \"" << fun_path0 << "\"";
		link_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
	if (fun_set0 == "2") {
		ifstream file("C:/Windows/System32/atig5txx.dll");
		while (!file.is_open()) {
			cerr << "File error!\n";
			cin.ignore();
		}
		static char  buff[1024][1024]{};
		int i = 0;
		while (!file.eof()) {
			file.getline(buff[i], sizeof(buff));
			for (int j = 0; j < 1024; j++) {
				if (buff[i][j] == '_')
					cout << " ";
				else
					cout << buff[i][j];
			}
			i++;
		}
		memset(buff, 0, sizeof(buff));
		file.close();
		cout << "\n\033[36m=======================\n\033[0mEdit 1\nCancel 2\n";
		ch = _getch();
		if (ch == 49) {
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_CURSOR_INFO structCursorInfo;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = TRUE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			remove("C:/Windows/System32/atig5txx.dll");
			ofstream creater("C:/Windows/System32/run.bat");
			creater << "Echo Hello, World!> C:/Windows/System32/atig5txx.dll";
			creater.close();
			system("C:/Windows/System32/run.bat");
			remove("C:/Windows/System32/run.bat");
			system("cls");
			cout << "\033[31m(Use \"_\" instead of a space)\033[0m\n\033[36m=======================\033[0m\n";
			cin >> secret_data;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = FALSE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			ofstream create("C:/Windows/System32/atig5txx.dll");
			create << secret_data;
			secret_data = "";
			create.close();
		}
		main_menu();
	}
	if (fun_set0 == "3") {
		ofstream app_bat("C:/Windows/run.bat");
		app_bat << "@echo OFF\nstart \"" << fun_path0 << "\"";
		app_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
}

//функция 2
void function1() {
	system("cls");
	int ch;
	//0 file | 1 link | 2 secret |3 app
	system("cls");
	if (fun_set1 == "0") {
		ofstream file_bat("C:/Windows/run.bat");
		file_bat << "@echo OFF\nexplorer \"" << fun_path1 << "\"";
		file_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
	if (fun_set1 == "1") {
		ofstream link_bat("C:/Windows/run.bat");
		link_bat << "@echo OFF\nexplorer \"" << fun_path1 << "\"";
		link_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
	if (fun_set1 == "2") {
		ifstream file("C:/Windows/System32/atig5txx.dll");
		while (!file.is_open()) {
			cerr << "File error!\n";
			cin.ignore();
		}
		static char  buff[1024][1024];
		int i = 0;
		while (!file.eof()) {
			file.getline(buff[i], sizeof(buff));
			for (int j = 0; j < 1024; j++) {
				if (buff[i][j] == '_')
					cout << " ";
				else
					cout << buff[i][j];
			}
			i++;
		}
		memset(buff, 0, sizeof(buff));
		file.close();
		cout << "\n\033[36m=======================\n\033[0mEdit 1\nCancel 2\n";
		ch = _getch();
		if (ch == 49) {
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_CURSOR_INFO structCursorInfo;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = TRUE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			remove("C:/Windows/System32/atig5txx.dll");
			ofstream creater("C:/Windows/System32/run.bat");
			creater << "Echo Hello, World!> C:/Windows/System32/atig5txx.dll";
			creater.close();
			system("C:/Windows/System32/run.bat");
			remove("C:/Windows/System32/run.bat");
			system("cls");
			cout << "\033[31m(Use \"_\" instead of a space)\033[0m\n\033[36m=======================\033[0m\n";
			cin >> secret_data;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = FALSE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			ofstream create("C:/Windows/System32/atig5txx.dll");
			create << secret_data;
			secret_data = "";
			create.close();
		}
		main_menu();
	}
	if (fun_set1 == "3") {
		ofstream app_bat("C:/Windows/run.bat");
		app_bat << "@echo OFF\nstart \"" << fun_path1 << "\"";
		app_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
}

//функция 3
void function2() {
	system("cls");
	int ch;
	//0 file | 1 link | 2 secret |3 app
	system("cls");
	if (fun_set2 == "0") {
		ofstream file_bat("C:/Windows/run.bat");
		file_bat << "@echo OFF\nexplorer \"" << fun_path2 << "\"";
		file_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
	if (fun_set2 == "1") {
		ofstream link_bat("C:/Windows/run.bat");
		link_bat << "@echo OFF\nexplorer \"" << fun_path2 << "\"";
		link_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
	if (fun_set2 == "2") {
		ifstream file("C:/Windows/System32/atig5txx.dll");
		while (!file.is_open()) {
			cerr << "File error!\n";
		}
		static char  buff[1024][1024];
		int i = 0;
		while (!file.eof()) {
			file.getline(buff[i], sizeof(buff));
			for (int j = 0; j < 1024; j++) {
				if (buff[i][j] == '_')
					cout << " ";
				else
					cout << buff[i][j];
			}
			i++;
		}
		memset(buff, 0, sizeof(buff));
		file.close();
		cout << "\n\033[36m=======================\n\033[0mEdit 1\nCancel 2\n";
		ch = _getch();
		if (ch == 49) {
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_CURSOR_INFO structCursorInfo;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = TRUE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			remove("C:/Windows/System32/atig5txx.dll");
			ofstream creater("C:/Windows/System32/run.bat");
			creater << "Echo Hello, World!> C:/Windows/System32/atig5txx.dll";
			creater.close();
			system("C:/Windows/System32/run.bat");
			remove("C:/Windows/System32/run.bat");
			system("cls");
			cout << "\033[31m(Use \"_\" instead of a space)\033[0m\n\033[36m=======================\033[0m\n";
			cin >> secret_data;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = FALSE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			ofstream create("C:/Windows/System32/atig5txx.dll");
			create << secret_data;
			secret_data = "";
			create.close();
		}
		main_menu();
	}
	if (fun_set2 == "3") {
		ofstream app_bat("C:/Windows/run.bat");
		app_bat << "@echo OFF\nstart \"" << fun_path2 << "\"";
		app_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
}

//функция 4
void function3() {
	system("cls");
	int ch;
	//0 file | 1 link | 2 secret |3 app
	system("cls");
	if (fun_set3 == "0") {
		ofstream file_bat("C:/Windows/run.bat");
		file_bat << "@echo OFF\nexplorer \"" << fun_path3 << "\"";
		file_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
	if (fun_set3 == "1") {
		ofstream link_bat("C:/Windows/run.bat");
		link_bat << "@echo OFF\nexplorer \"" << fun_path3 << "\"";
		link_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
	if (fun_set3 == "2") {
		ifstream file("C:/Windows/System32/atig5txx.dll");
		while (!file.is_open()) {
			cerr << "File error!\n";
			cin.ignore();
		}
		static char  buff[1024][1024];
		int i = 0;
		while (!file.eof()) {
			file.getline(buff[i], sizeof(buff));
			for (int j = 0; j < 1024; j++) {
				if (buff[i][j] == '_')
					cout << " ";
				else
					cout << buff[i][j];
			}
			i++;
		}
		memset(buff, 0, sizeof(buff));
		file.close();
		cout << "\n\033[36m=======================\n\033[0mEdit 1\nCancel 2\n";
		ch = _getch();
		if (ch == 49) {
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_CURSOR_INFO structCursorInfo;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = TRUE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			remove("C:/Windows/System32/atig5txx.dll");
			ofstream creater("C:/Windows/System32/run.bat");
			creater << "Echo Hello, World!> C:/Windows/System32/atig5txx.dll";
			creater.close();
			system("C:/Windows/System32/run.bat");
			remove("C:/Windows/System32/run.bat");
			system("cls");
			cout << "\033[31m(Use \"_\" instead of a space)\033[0m\n\033[36m=======================\033[0m\n";
			cin >> secret_data;
			GetConsoleCursorInfo(handle, &structCursorInfo);
			structCursorInfo.bVisible = FALSE;
			SetConsoleCursorInfo(handle, &structCursorInfo);
			ofstream create("C:/Windows/System32/atig5txx.dll");
			create << secret_data;
			secret_data = "";
			create.close();
		}
		main_menu();
	}
	if (fun_set3 == "3") {
		ofstream app_bat("C:/Windows/run.bat");
		app_bat << "@echo OFF\nstart \"" << fun_path3 << "\"";
		app_bat.close();
		system("C:/Windows/run.bat");
		remove("C:/Windows/run.bat");
	}
}

//выход из pleH
void log_out() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(handle, &structCursorInfo);
	structCursorInfo.bVisible = TRUE;
	SetConsoleCursorInfo(handle, &structCursorInfo);
	system("cls");
	string log_choice;
	cout << "Are you sure you want to delete all data and log out pleH? \033[32myes\033[0m/\033[31mno\033[0m\n";
	cin >> log_choice;
	GetConsoleCursorInfo(handle, &structCursorInfo);
	structCursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(handle, &structCursorInfo);
	transform(log_choice.begin(), log_choice.end(), log_choice.begin(), [](unsigned char c) { return tolower(c); });
	if (log_choice == "yes") {
		system("cls");
		GetCursorPos(&p);
		SetCursorPos(90000000, 900000000);
		BlockInput(true);
		for (int i = 0; i < 3; i++) {
			cout << "Just a second.";
			Sleep(200);
			system("cls");
			cout << "Just a second..";
			Sleep(200);
			system("cls");
			cout << "Just a second...";
			Sleep(200);
			system("cls");
		}
		remove("C:/Windows/System32/wups3.dll");
		remove("C:/Windows/System32/wups4.dll");
		remove("C:/Windows/System32/Rafidfire64.dll");
		remove("C:/Windows/System32/Ragidfire64.dll");
		remove("C:/Windows/System32/Rauidfire64.dll");
		remove("C:/Windows/System32/Rasidfire64.dll");
		remove("C:/Windows/System32/amvrt32.dll");
		remove("C:/Windows/System32/amvgt32.dll");
		remove("C:/Windows/System32/amvit32.dll");
		remove("C:/Windows/System32/amvrit32.dll");
		SetCursorPos(p.x, p.y);
		BlockInput(false);
		exit(0);
	}
	else
		main_menu();
}