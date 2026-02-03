#include <iostream>
using namespace std;
void floor3(int fl3, int fr3);
int main(int c);
void enter1(int ent1, int con1);
void cyc1(int cp1);
void cyc2(int cp2);
void cyc3(int cp3);
void liver1(int liv1) {
	char dead = '0';
	int cakeislie;
	cout << "___________________________________________\nEntering the living room you saw a large oval table with a bunch of chairs\nComing closer you found a large birthday cake\nLooks delicious. Try?\nYes 1\nNo 2" << endl;
	cin >> cakeislie;
	if (cakeislie == 1) {
		cout << "___________________________________________\nYou've tasted the cake...and it's damn delicious!..although with some strange aftertaste\nYour stomach hurts sharply...\nYou feel unbearable pain...\nYOU DIE" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
	else {
		cout << "___________________________________________\nYou decided not to eat this rubbish, because CAKE IS A LIE...\nSo you took it and threw the cake on the floor\nThere was a key under the cake" << endl;
		cyc2(1);
	}
}
void liver2(int liv2) {
	cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
	cyc2(1);
}
void liver3(int liv3) {
	cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
	cyc3(1);
}