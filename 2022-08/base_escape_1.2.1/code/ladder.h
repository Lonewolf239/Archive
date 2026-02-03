#include <iostream>
using namespace std;
void floor3(int fl3, int fr3);
int main(int c);
void floor1(int fl1, int fr1);
void ladder1(int lad1) {
	char dead = '0';
	if (lad1 == 1) {
		cout << "___________________________________________\nYou ran hard...but tripped over a protruding nail and fell into a hole...\nYOU DIE\n" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
}
void ladder2(int lad2) {
	char dead = '0';
	if (lad2 == 1) {
		cout << "___________________________________________\nYou ran hard...but tripped over a protruding nail and fell into a hole...\nYOU DIE\n" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
}
void ladder3(int lad3) {
	int x, y;
	if (lad3 == 1) {
		cout << "___________________________________________\nYou put down the plank and fixed it a little with nails\nNow you can go up to the second floor\nGo up 1" << endl;
		cin >> x;
		if (x == 1) {
			cout << "___________________________________________\nYou climbed to the second floor...the floor creaked under your feet, but looking around you found:\nStudy 1\nBedroom 2\nRecreation room 3\nAttic 4" << endl;
			cin >> y;
			floor1(0, y);
		}
	}
}