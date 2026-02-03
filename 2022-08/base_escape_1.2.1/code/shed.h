#include <iostream>
using namespace std;
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void cyclep4(int cp4);
void shed1(int shd1) {
	int put;
	cout << "___________________________________________\nWhen you open the door and go inside...you can't see anything..again\nTurn on the light 1; Leave 2" << endl;
	cin >> put;
	if (put == 1) {
		cout << "___________________________________________\nTurning on the light, you saw a crowbar lying on a shelf\nYou took a tire iron" << endl;
		cyclep2(1);
	}
	else
		cyclep1(1);
}
void shed2(int shd2) {
	cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		cyclep2(1);
}
void shed3(int shd3) {
	cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		cyclep3(1);
}
void shed4(int shd4) {
	cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
	cyclep4(1);
}