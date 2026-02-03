#include <iostream>
using namespace std;
void cycle1(int cycle1);
void cycle2(int cycle2);
void cycle3(int cycle3);
void window1(int win1) {
	int back;
	if (win1 == 1) {
		cout << "___________________________________________\nYou looked out the window...there is night\nYou turned around and went to the center of the room.." << endl;
		cin >> back;
	}
	if (back > 0 && back < 5) {
		cycle1(1);
	}
}
void window2(int win2) {
	int back;
	if (win2 == 1) {
		cout << "___________________________________________\nYou looked out the window...there is night\nYou turned around and went to the center of the room.." << endl;
		cin >> back;
	}
	if (back > 0 && back < 5) {;
		cycle2(1);
	}
}
void window3(int win3) {
	int back;
	if (win3 == 1) {
		system("explorer https://youtu.be/jeM9yRJwKl8");
		cout << "___________________________________________\nYou looked out the window...there is night\nYou turned around and went to the center of the room.." << endl;
		cin >> back;
	}
	if (back > 0 && back < 5) {
		cycle3(1);
	}
}