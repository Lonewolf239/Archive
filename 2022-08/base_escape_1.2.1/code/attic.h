#include <iostream>
using namespace std;
void yard4(int yrd4, int yr4);
void enter1(int ent1, int con1);
void floor3(int fl3, int fr3);
void cyep1(int cy1);
void cyep2(int cy2);
void cyep3(int cy3);
void cyep4(int cy4);
void cyep5(int cy5);
int main(int c);
void attic1(int att1) {
	char dead = '0';
	int y;
	cout << "___________________________________________\nYou carefully peeked into the attic...it's full of bats...\nClimb 1; Leave 2" << endl;
	cin >> y;
	if (y == 1) {
		cout << "___________________________________________\nYou climbed into the attic and closed the hatch behind you...bats immediately attacked you...\nThey inflicted heavy injuries on you with each attack...\nYOU DIE" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
	if (y == 2)
		cyep1(1);
}
void attic2(int att2) {
	char dead = '0';
	int y;
	cout << "___________________________________________\nYou carefully peeked into the attic...it's full of bats...\nClimb 1; Leave 2" << endl;
	cin >> y;
	if (y == 1) {
		cout << "___________________________________________\nYou climbed into the attic and closed the hatch behind you...bats immediately attacked you...\nThey inflicted heavy injuries on you with each attack...\nYOU DIE" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
	if (y == 2)
		cyep2(1);
}
void attic3(int att3) {
	char dead = '0';
	int y;
	cout << "___________________________________________\nYou carefully peeked into the attic...it's full of bats...\nClimb 1; Leave 2" << endl;
	cin >> y;
	if (y == 1) {
		cout << "___________________________________________\nYou climbed into the attic and closed the hatch behind you...bats immediately attacked you...\nThey inflicted heavy injuries on you with each attack...\nYOU DIE" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
	if (y == 2)
		cyep3(1);
}
void attic4(int att4) {
	char dead = '0';
	int y;
	cout << "___________________________________________\nYou carefully peeked into the attic...it's full of bats...\nClimb 1; Leave 2" << endl;
	cin >> y;
	if (y == 1) {
		cout << "___________________________________________\nYou climbed into the attic and closed the hatch behind you...bats immediately attacked you...\nThey inflicted heavy injuries on you with each attack...\nYOU DIE" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
	if (y == 2)
		cyep4(1);
}
void attic5(int att5) {
	int x, y;
	cout << "___________________________________________\nYou carefully opened the hatch...\nThrow firecracker 1; Leave 2" << endl;
	cin >> x;
	if (x == 1) {
		cout << "___________________________________________\nYou set it on fire and threw a firecracker into the attic, closed the hatch...\nThere was an explosion, and then the infernal spawn burst out screaming...when everything was quiet, you climbed into the attic\nIn the center of the attic lay a large box...it contained some explosives\nReturn to the yard 1" << endl;
		cin >> y;
		if (y == 1) {
			cout << "___________________________________________\nYou hurried down to the first floor and out into the street..." << endl;
			yard4(1, 0);
		}
	}	
	if(x==2)
	cyep5(1);
}