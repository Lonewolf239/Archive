#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

//Основные переменные
bool tmer = false, first = true;
int seconds, minutes, hours, max_minutes = 1, max_seconds = 30, max_hours = 0, choice = 0;
string choice1 = "<", choice2 = "", choice3 = "", choice4 = "", choice5 = "";

//Костыли функций
void set_time();
void timer();
void developer();

//Программа стартует здесь
int main() {
    system("cls");
    cout << "=========Timer_v1.0=========\nWelcome to NORMAL timer_v1.0\n============================\n          Start 1\n        Set time 2\n     About developer 3\n          Exit 0" << endl;
    switch (_getch()) {
        case '1':
            tmer = true;
            timer();
            break;
        case '2':
            set_time();
            break;
        case '3':
            developer();
            break;
        case '0':
            exit(0);
            break;
        default:
            main();
    }
    return 0;
}

//Таймер
void timer() {
    hours = max_hours, minutes = max_minutes, seconds = max_seconds;
    while(tmer) {
        system ("cls");
        cout << "============\n   " << hours << ":" << minutes << ":" << seconds << "\n============\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        seconds--;
        if (hours == 0 && minutes == 0 && seconds < 0) {
            tmer = false;
            system("cls");
            cout << "======================\n Timer stopped " << max_hours << ":" << max_minutes << ":" << max_seconds << "\n======================\n" << endl;
            system ("pause");
            main();
        }
        if (max_hours == 6 && max_minutes == 6 && max_seconds == 6 && first) {
            system("cls");
            first = false;
            cout << "         SSSS    AAAA   TTTTTT   AAAA   NN  NN\n        SS      AA  AA    TT    AA  AA  NNN NN\n         SSSS   AAAAAA    TT    AAAAAA  NN NNN\n            SS  AA  AA    TT    AA  AA  NN  NN\n         SSSS   AA  AA    TT    AA  AA  NN  NN\n\n\n                 6666    6666    6666\n                66      66      66\n                66666   66666   66666\n                66  66  66  66  66  66\n                 6666    6666    6666\n\n\n         SSSS    AAAA   TTTTTT   AAAA   NN  NN\n        SS      AA  AA    TT    AA  AA  NNN NN\n         SSSS   AAAAAA    TT    AAAAAA  NN NNN\n            SS  AA  AA    TT    AA  AA  NN  NN\n         SSSS   AA  AA    TT    AA  AA  NN  NN" << endl << endl;
            Sleep(2000);
        }
        if (seconds < 0 && minutes == 0 && hours != 0) {
            minutes = 60;
            hours--;
        }
        if (seconds < 0 && minutes != 0) {
            seconds = 59;
            minutes--;
        }
        Sleep(950);
    }
}

//Установка лимита
void set_time() {
    system ("cls");
    cout << "Hours: " << max_hours << " " << choice1 << "\nMinutes: " << max_minutes << " " << choice2 << "\nSeconds: " << max_seconds << " " << choice3 << "\nReset " << choice4 << "\nExit " << choice5 << endl;
    switch (_getch()) {
        case 'w':
            choice--;
            if (choice < 0)
                choice = 4;
            if (choice == 0) {
                choice1 = "<";
                choice2 = "";
                choice3 = "";
                choice4 = "";
                choice5 = "";
            }
            if (choice == 1) {
                choice1 = "";
                choice2 = "<";
                choice3 = "";
                choice4 = "";
                choice5 = "";
            }
            if (choice == 2) {
                choice1 = "";
                choice2 = "";
                choice3 = "<";
                choice4 = "";
                choice5 = "";
            }
            if (choice == 3) {
                choice1 = "";
                choice2 = "";
                choice3 = "";
                choice4 = "<";
                choice5 = "";
            }
            if (choice == 4) {
                choice1 = "";
                choice2 = "";
                choice3 = "";
                choice4 = "";
                choice5 = "<";
            }
            set_time();
            break;
        case 's':
            choice++;
            if (choice > 4)
                choice = 0;
            if (choice == 0) {
                choice1 = "<";
                choice2 = "";
                choice3 = "";
                choice4 = "";
                choice5 = "";
            }
            if (choice == 1) {
                choice1 = "";
                choice2 = "<";
                choice3 = "";
                choice4 = "";
                choice5 = "";
            }
            if (choice == 2) {
                choice1 = "";
                choice2 = "";
                choice3 = "<";
                choice4 = "";
                choice5 = "";
            }
            if (choice == 3) {
                choice1 = "";
                choice2 = "";
                choice3 = "";
                choice4 = "<";
                choice5 = "";
            }
            if (choice == 4) {
                choice1 = "";
                choice2 = "";
                choice3 = "";
                choice4 = "";
                choice5 = "<";
            }
            set_time();
            break;
        case 'e':
            if (choice == 0) {
                system("cls");
                cout << "Hours: ";
                cin >> max_hours;
                set_time();
            }
            if (choice == 1) {
                system("cls");
                cout << "Minutes: ";
                cin >> max_minutes;
                if (max_minutes >= 60) {
                    max_minutes = 0;
                    max_hours++;
                }
                set_time();
            }
            if (choice == 2) {
                system("cls");
                cout << "Seconds: ";
                cin >> max_seconds;
                if (max_seconds >= 60) {
                    max_seconds = 0;
                    max_minutes++;
                }
                set_time();
            }
            if (choice == 3) {
                max_hours = 0;
                max_minutes = 1;
                max_seconds = 30;
                set_time();
            }
            if (choice == 4) {
                choice1 = "<";
                choice2 = "";
                choice3 = "";
                choice4 = "";
                choice5 = "";
                choice = 0;
                main();
            }
            break;
        default:
            set_time();
    }
}

//О разработчике
void developer() {
    system("cls");
    cout << "My social networks:\n___________________________\nDiscord: Bubba#4211\nVK: @1blitz01\nTelegram: @an1onimes\n___________________________" << endl << endl;
    system("pause");
    main();
}