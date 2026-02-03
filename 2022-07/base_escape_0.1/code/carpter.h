#include <iostream>
using namespace std;
void cycle1(int cycle1);
void cycle2(int cycle2);
void cycle3(int cycle3);
void carpter1(int carp1) {
	int car1;
	cout << "___________________________________________\nYou sat down on the carpetand felt some object in the center...\nCut the carpet 1; Leave 2" << endl;
	cin >> car1;
	if (car1 == 1) {
		cout << "___________________________________________\nYou can't do it..." << endl;
		cycle1(1);
	}
	else
		cycle1(1);
}
void carpter2(int carp2) {
	int car2;
	cout << "___________________________________________\nYou sat down on the carpetand felt some object in the center...\nCut the carpet 1; Leave 2" << endl;
	cin >> car2;
	if (car2 == 1) {
		cout << "___________________________________________\nYou cut the carpet...there was a recess under it...\nYou take the key..." << endl;
		cycle3(1);
	}
	else
		cycle2(1);
}
void carpter3(int carp3) {
	int car3;
	cout << "___________________________________________\nYou looked at the cut rug...nothing intresting...\nLeave 1" << endl;
	cin >> car3;
	if (car3 == 1)
		cycle3(1);
}