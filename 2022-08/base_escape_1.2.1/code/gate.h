#include <iostream>
using namespace std;
int main(int c);
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void gate1(int gat1) {
	int back;
	cout << "___________________________________________\nAfter examining the castle, you realized... that it has not been operational for a long time, but it is very durable...\nLeave 1" << endl;
	cin >> back;
	if (back == 1)
		cyclep1(1);
}
void gate2(int gat2) {
	int back;
	cout << "___________________________________________\nYou tried to remove it with a tire iron...no result\nLeave 1" << endl;
	cin >> back;
	if (back == 1)
		cyclep2(1);
}
void gate3(int gat3) {
	int back, x;
	cout << "___________________________________________\nYou swung your arm around and hit the castle with a sledgehammer...the castle shattered...you opened the gate\nLeave 1" << endl;
	cin >> x;
	if(x>0)
	system("explorer https://youtu.be/dQw4w9WgXcQ");
	cout << endl<<endl<< "оньсрхк)" << endl << endl;
	cout << "___________________________________________\nYou swung around and hit the castle with a sledgehammer... the castle was not damaged, but your hands were very sore\nLeave 1" << endl;
	cin >> back;
	if (back == 1)
		cyclep3(1);
}
void gate4(int gat4) {
	char yn;
	char x ='0';
	cout << "___________________________________________\nYou approached the gate and tied explosives to the lock, set fire to the fuse and fled to the shelter...\nAfter 10 seconds, an explosion sounded\n___________________________________________\nYou crawled out of your hiding place and saw the pieces of the once great gate lying on the ground\nApparently your terrible adventure is over ...\nYou quietly and peacefully went into the sunset (but now it's dawn...)" << endl;
	cout << endl << endl << endl << "Do you want to delete save files? y/n" << endl;
	cin >> yn;
	if (yn == 'y') {
		if (remove("save.txt") != 0)
			cout << endl << endl << endl << "ERROR DELETE SAVE FILE" << endl << endl << endl << endl;
		else
			cout << endl << endl << endl << "SAVE FILES SUCCESSFULLY DELETED" << endl << endl << endl << endl;
	}
	if (yn == 'n') {
		cout << endl << endl << endl << "SELECT SAVE MODE UNLOCKED" << endl << endl << endl << endl;
		ofstream file("save.txt");
		if (file.is_open()) {
			file << "njbuCxccF@pNiB0dyeR97Q9aP";
			file.close();
		}
	}
	cout << "TTTTTT  HH  HH   AAAA   NN  NN  KK  KK   SSSS  \n  TT    HH  HH  AA  AA  NNN NN  KK KK   SS     \n  TT    HHHHHH  AAAAAA  NN NNN  KKKK     SSSS  \n  TT    HH  HH  AA  AA  NN  NN  KK KK       SS \n  TT    HH  HH  AA  AA  NN  NN  KK  KK   SSSS  " << endl << endl;
	cout << "FFFFFF   OOOO   RRRRR     PPPPP   LL       AAAA   YY  YY  IIIIII  NN  NN   GGGG   !!!\nFF      OO  OO  RR  RR    PP  PP  LL      AA  AA   YYYY     II    NNN NN  GG      !!!\nFFFF    OO  OO  RRRRR     PPPPP   LL      AAAAAA    YY      II    NN NNN  GG GGG  !!!\nFF      OO  OO  RR  RR    PP      LL      AA  AA    YY      II    NN  NN  GG  GG\nFF       OOOO   RR  RR    PP      LLLLLL  AA  AA    YY    IIIIII  NN  NN   GGGG   !!!" << endl;
	cin >> x;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	if (x != '0')
		main(1);
}