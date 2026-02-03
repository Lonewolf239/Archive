#include <iostream>
using namespace std;
void cyc1(int cp1);
void cyc2(int cp2);
void cyc3(int cp3);
void utroom1(int rotn1) {
	cout << "___________________________________________\nКак ты собирался открыть эту дверь без ключа?" << endl;
	cyc1(1);
}
void utroom2(int rotn2) {
	cout << "___________________________________________\nОткрыв дверь и зайдя, ты нашёл: несколько досок, молоток и пару гвоздей" << endl;
	cyc3(1);
}
void utroom3(int rotn3) {
	cout << "___________________________________________\nЗдесь уже нет ничего интересного" << endl;
	system("explorer https://youtu.be/t6isux5XWH0");
	cyc3(1);
}