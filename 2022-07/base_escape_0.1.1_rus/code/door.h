#include <iostream>
using namespace std;
void cycle1(int cycle1);
void cycle2(int cycle2);
void cycle3(int cycle3);
void escape(int esc);
void door1(int door1) {
	if (door1 == 1) {
		cout << "___________________________________________\nЯ не могу открыть эту дверь..." << endl;
		cycle1(1);
	}
}
void door2(int doo2) {
	cout << "___________________________________________\nЯ не могу открыть эту дверь..." << endl;
	cycle2(1);
}
void door3(int doo3) {
	if (doo3 == 1) {
		cout << "___________________________________________\nВы вставили ключ в замок и повернули... замок открылся и с лязгом металла упал на пол..." << endl;
		escape(1);
	}
}