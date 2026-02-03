#include <iostream>
using namespace std;
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void enter1(int ent1, int con1);
void mansion1(int man1) { //инвентарь пуст
	int ret;
	if (man1 == 1)
		cout << "___________________________________________\nYou examined the door of the mansion... it seems to be closed on the other side..." << endl;
	cin >> ret;
	if (ret > 0 && ret < 5)
		cyclep1(1);
}
void mansion2(int man2) { //есть монтировка
	int ret;
	if (man2 == 1)
		cout << "___________________________________________\nClosed on the other side...\nTry to open with crowbar 1; Leave 2" << endl;
	cin >> ret;
	if (ret == 2)
		cyclep2(1);
	if(ret == 1) {
	    cout << "___________________________________________\nNothing succeeded..."<<endl;
		cyclep2(1);
		}
}
void mansion3(int man3) { //есть кувалда
	int ret, t;
	if (man3 == 1)
		cout << "___________________________________________\nClosed on the other side...\nStrike with sledgehammer 1; Leave 2" << endl;
	cin >> ret;
	if (ret == 1) {
	    cout << "___________________________________________\nYou hit the door with all your foolishness...\nThe door flew out of its hinges and fell to the floor with a crash..." << endl;
		cout << "___________________________________________\nYou entered a huge entrance hall... the first thing that caught your attention:\nThe huge T-shaped staircase leading to the second floor 1\nLiving room 2\nKitchen 3\nStorage room 4" << endl;
		ofstream file("save.txt");
		if (file.is_open()) {
			file << "dtM*{AyuP}Vqm$Lt9zmSdH#Qa";
			file.close();
			cout << endl << "SAVE SUCCESSFUL" << endl;
		}
		cin >> t;
		if(t > 0 && t < 5)
		enter1(0,t);
		}
	if(ret == 2)
		cyclep3(1);
}