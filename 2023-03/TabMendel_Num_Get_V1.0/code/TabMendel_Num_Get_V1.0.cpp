#include<iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int ch = 0;
bool first_time = true, error = true;

string mendel[] = {
"h", "1", "he","2","li","3","be","4","b","5","c","6","n","7","o","8","f","9","ne","10",
"na","11","mg","12","al","13","si","14","p","15","s","16","cl","17","ar","18","k","19","ca","20",
"sc","21","ti","22","v","23","cr","24","mn","25","fe","26","co","27","ni","28","cu","29","zn","30",
"ga","31","ge","32","as","33","se","34","br","35","kr","36","rb","37","sr","38","y","39","zr","40",
"nb","41","mo","42","tc","43","ru","44","rh","45","pd","46","ag","47","cd","48","in","49","sn","50",
"sb","51","te","52","i","53","xe","54","cs","55","ba","56","la","57","ce","58","pr","59","nd","60",
"pm","61","sm","62","eu","63","gd","64","tb","65","dy","66","ho","67","er","68","tm","69","yb","70",
"lu","71","hf","72","ta","73","w","74","re","75","os","76","ir","77","pt","78","au","79","hg","80",
"tl","81","pb","82","bi","83","po","84","at","85","rn","86","fr","87","ra","88","ac","89","th","90",
"pa","91","u","92","np","93","pu","94","am","95","cm","96","bk","97","cf","98","es","99","fm","100",
"md","101","no","102","lr","103","rf","104","db","105","sg","106","bh","107","hn","108","mt","109"
};

void doing();

int main() {
    HWND consoleWindow = GetConsoleWindow();
    SetWindowPos(consoleWindow, 0, 800, 375, 0, 0, SWP_NOSIZE|SWP_NOZORDER);
    system("mode con cols=44 lines=22");
    system("cls");
    if (first_time) {
        cout << "TabMendel_Num_Get_V1.0\nBy. Lonewolf239\n_________________\nMax 30 characters\nIf the element name consists of one letter\nIt is better to delimit it with ';'\n_________________\nStart: Enter\nExit: ESC\n_________________" << endl;
        int ch = _getch();
        first_time = false;
        switch (ch) {
        case 27:
            exit(0);
            break;
        case 13:
            doing();
            break;
        default:
            main();
        }
    }
    doing();
    return 0;
}

void doing() {
    system("cls");
    bool first_num = true;
    char get[] = { "==============================" };
    string result, output, first, predres;
    cout << "Enter: ";
    cin >> get;
    for (int i = 0; i < 31; i++) {
        if (get[i] == '=')
            break;
        if (first_num && get[i] != ';') {
            first = get[i];
            if (first == "o" && get[i + 1] != 's') {
                output += "8";
                if (get[i + 2] != '=')
                    output += ", ";
                continue;
            }
            first_num = false;
            continue;
        }
        if (first_num && get[i] == ';')
            continue;
        if (get[i] == ';') {
            for (int j = 0; j < 220; j += 2) {
                if (first == mendel[j]) {
                    result = mendel[j + 1];
                    output += result;
                    if (get[i + 2] != '=')
                        output += ", ";
                    first_num = true;
                    break;
                }
            }
            continue;
        }
        if (get[i + 1] == '=')
            predres = first;
        else
            predres = first + get[i];
        for (int j = 0; j < 220; j += 2) {
            if (predres == mendel[j]) {
                result = mendel[j + 1];
                break;
            }
        }
        output += result;
        result = "";
        if (get[i + 2] != '=')
            output += ", ";
        first_num = true;
    }
    cout << "Result: " << output << endl;
    ch = _getch();
    if (ch == 27)
        exit(0);
    main();
}