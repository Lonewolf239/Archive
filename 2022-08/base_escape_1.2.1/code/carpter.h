#include <iostream>
using namespace std;
void cycle1(int cycle1);
void cycle2(int cycle2);
void cycle3(int cycle3);
void carpter1(int carp1) {
	int car1;
	cout << "___________________________________________\nYou sat down on the carpet and felt something in the center...\nCut the carpet 1\nLeave 2" << endl;
	cin >> car1;
	if (car1 == 1) {
		cout << "___________________________________________\nYou can't do it..." << endl;
		cycle1(1);
	}
	else {
		cycle1(1);
	}
}
void carpter2(int carp2) {
	int car2;
	cout << "___________________________________________\nYou sat down on the carpet and felt something in the center...\nCut the carpet 1\nLeave 2" << endl;
	cin >> car2;
	if (car2 == 1) {
		cout << "___________________________________________\nYou cut the carpet...there was an indentation under it...\nYou took out the key..." << endl;
		cycle3(1);
	}
	else {
		cycle2(1);
	}
}