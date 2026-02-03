#include <iostream>
using namespace std;
void enter1(int ent1, int con1);
int main(int c);
void cyep2(int cy2);
void cyep3(int cy3);
void cyep5(int cy5);
void cyep5(int cy5);
void floor3(int fl3, int fr3);
void cabinet1(int cab1) {
	if (cab1 == 1) {
		char dead = '0';
		cout << "___________________________________________\nYou can't...\n-So, teller, wait. What can't you see? Yes, on the other side of the monitor is mentally retarded!\nGod...how stupid do you have to be to open the door without a key to it...I don't want to play like that...I don't want to!..\nYOU DIE" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
}
void cabinet2(int cab2) {
	int x;
	if (cab2 == 1) {
		cout << "___________________________________________\nYou opened the door and entered a spacious room...it was a dark gothic office with a bunch of bookshelves\nIt seems that one of the shelves is missing a couple of books...\nWhen leaving, you pressed some kind of lever on the wall...it seems that somewhere- then the door opened...\nLeave 1" << endl;
		cin >> x;
	}
	if (x == 1) {
		ofstream file("save.txt");
		if (file.is_open()) {
			file << "v?n8*pnqXdb@?Wo~|o2H1ZvpB";
			file.close();
			cout << endl << "SAVE SUCCESSFUL" << endl;
		}
		cyep3(1);
	}
}
void cabinet3(int cab3) {
	if (cab3 == 1) {
		cout << "___________________________________________\nThere is nothing you can do here..."<<endl;
		cyep3(1);
	}
}
void cabinet4(int cab4) {
	char dead = '0';
	if (cab4 == 1) {
		int con;
		cout << "___________________________________________\nYou entered the office... there are still a couple of books missing from the shelves... but now you have them\nHow to put them?\nBlue - on the right; Red - left 1\nBlue - left; Red - right 2" << endl;
		cin >> con;
		if (con == 1) {
			cout << "___________________________________________\nThe books moved into place... when suddenly a small box crawled out of the wall... there was a firecracker and a lighter in it" << endl;
			cyep5(1);
		}
		if (con == 2) {
			cout << "___________________________________________\nThe books moved...but immediately flew out and fell to the floor...the door to the study slammed shut...\nApparently you should have watched the Matrix more carefully\nYOU DIE" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			cin >> dead;
			if (dead != '0')
				main(0);
		}
	}
}
void cabinet5(int cab5) {
	if (cab5 == 1) {
		cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		cyep5(1);
	}
}