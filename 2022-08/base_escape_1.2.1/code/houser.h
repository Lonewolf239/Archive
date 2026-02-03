#include <iostream>
using namespace std;
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void cyclep4(int cp4);
void house1(int hou1) {
	int ret;
	cout << "___________________________________________\nClimbing up the stairs to a small balcony, you saw that the entrance to the house was boarded up...\nTear off the boards 1; Leave 2" << endl;
	cin >> ret;
	if (ret == 1) {
		cout << "___________________________________________\nCompletely sick?! How can I tear the boards off with my bare hands?." << endl;
		cyclep1(1);
	}
	if (ret == 2)
		cyclep1(1);
}
void house2(int hou2) {
	int ret;
	cout << "___________________________________________\nClimbing up the stairs to a small balcony, you saw that the entrance to the house was boarded up...\nTear off the boards 1; Leave 2" << endl;
	cin >> ret;
	if (ret == 1) {
		cout << "___________________________________________\nAfter tearing off the boards and going inside, you saw a small box...\nYou found a sledgehammer" << endl;
		cyclep3(1);
	}
	if (ret == 2)
		cyclep2(1);
}
void house3(int hou3) {
	cout << "___________________________________________\nThere is nothing interesting there ... I don't want to go up there" << endl;
	cyclep3(1);
}
void house4(int hou4) {
	cout << "___________________________________________\nThere is nothing interesting there ... I don't want to go up there" << endl;
	cyclep4(1);
}