#include <iostream>
using namespace std;
void cyc1(int cp1);
void cyc2(int cp2);
void cyc3(int cp3);
void utroom1(int rotn1) {
	cout << "___________________________________________\nHow were you going to open that door without a key?" << endl;
	cyc1(1);
}
void utroom2(int rotn2) {
	cout << "___________________________________________\nOpening the door and going in, you found: a few boards, a hammer and a couple of nails" << endl;
	cyc3(1);
}
void utroom3(int rotn3) {
	cout << "___________________________________________\nThere is nothing interesting here anymore" << endl;
	system("explorer https://youtu.be/t6isux5XWH0");
	cyc3(1);
}