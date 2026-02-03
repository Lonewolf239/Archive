#include <iostream>
using namespace std;
void location1(int loc, int c1);
void start(int start) {
	int con, con1, con2, loc;
	if (start == 1) {
		cout << "___________________________________________\nUse numbers from (1) to (4) to control\nContinue 1:" << endl;
		cin >> con;
	}
	if (con > 0 && con < 5) {
		cout << "___________________________________________\nYou woke up in an unknown place. Looks like a basement..." << endl;
		cin >> con1;
	}
	if (con1 > 0 && con1 < 5) {
		cout << "___________________________________________\nLooking around, you realized that you did not see anything :(" << endl;
		cin >> con2;
	}
	if (con2 > 0 && con2 < 5) {
		cout << "___________________________________________\nLooking around AT FEEL, you realized that it was a small room...\nYou found:\nWindow 1\nCloset 2\nDoor 3\nCarpet lying on the floor 4" << endl;
		cin >> loc;
		location1(0,loc);
	}
}