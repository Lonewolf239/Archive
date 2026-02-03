#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	cout << "Get_Key_Code_v.1\n By.Lonewolf239\n================\nExit: ESC\nClear: Backspace\n================" << endl;
	bool start = true;
	string ch1;
	int ch;
	int did = 0, prev0 = 0, prev1 = 0, prev2 = 0, prev3 = 0, prev4 = 0, prev5 = 0, prev6 = 0;
	while (start) {
		ch1 = ch = _getch();
		if (ch == 99)
			did = 0;
		if (did == 0)
			prev0 = ch;
		else if (did == 1)
			prev1 = ch;
		else if (did == 2)
			prev2 = ch;
		else if (did == 3)
			prev3 = ch;
		else if (did == 4)
			prev4 = ch;
		else if (did == 5)
			prev5 = ch;
		else if (did == 6)
			prev6 = ch;
		else
			did = 0;
		did++;
		if (prev0 == 99 && prev1 == 111 && prev2 == 108 && prev3 == 111 && prev4 == 114 && prev5 == 32 && prev6 == 49)
			system("Color 1");
		else if (prev0 == 99 && prev1 == 111 && prev2 == 108 && prev3 == 111 && prev4 == 114 && prev5 == 32 && prev6 == 50)
			system("Color 2");
		else if (prev0 == 99 && prev1 == 111 && prev2 == 108 && prev3 == 111 && prev4 == 114 && prev5 == 32 && prev6 == 51)
			system("Color 3");
		else if (prev0 == 99 && prev1 == 111 && prev2 == 108 && prev3 == 111 && prev4 == 114 && prev5 == 32 && prev6 == 52)
			system("Color 4");
		else if (prev0 == 99 && prev1 == 111 && prev2 == 108 && prev3 == 111 && prev4 == 114 && prev5 == 32 && prev6 == 53)
			system("Color 5");
		else if (prev0 == 99 && prev1 == 111 && prev2 == 108 && prev3 == 111 && prev4 == 114 && prev5 == 32 && prev6 == 54)
			system("Color 6");
		else if (prev0 == 99 && prev1 == 111 && prev2 == 108 && prev3 == 111 && prev4 == 114 && prev5 == 32 && prev6 == 55)
			system("Color 7");
		else if (prev0 == 99 && prev1 == 111 && prev2 == 108 && prev3 == 111 && prev4 == 114 && prev5 == 32 && prev6 == 56)
			system("Color 8");
		else if (prev0 == 99 && prev1 == 111 && prev2 == 108 && prev3 == 111 && prev4 == 114 && prev5 == 32 && prev6 == 57)
			system("Color 9");
		if (ch == 27)
			exit(0);
		if (ch == 8) {
			system("cls");
			continue;
		}
		if (ch == 32)
			ch1 = "Space";
		if (ch == 13)
			ch1 = "Enter";
		if (ch == 10)
			ch1 = "Enter + CTRL";
		if (ch == 9)
			ch1 = "TAB";
		cout << ch1 << ": " << ch << endl << "================" << endl;
	}
	return 0;
}