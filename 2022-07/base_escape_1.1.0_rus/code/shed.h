#include <iostream>
using namespace std;
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void cyclep4(int cp4);
void shed1(int shd1) {
	int put;
	cout << "___________________________________________\nОткрыв дверь и зайдя внутрь...вы ничего не видите..снова\nВключить свет 1; Уйти 2" << endl;
	cin >> put;
	if (put == 1) {
		cout << "___________________________________________\nВключив свет, вы увидели лежащую на полке фомку\nВы взяли монтировку" << endl;
		cyclep2(1);
	}
	else
		cyclep1(1);
}
void shed2(int shd2) {
	cout << "___________________________________________\nТут больше нет ничего интересного..." << endl;
		cyclep2(1);
}
void shed3(int shd3) {
	cout << "___________________________________________\nТут больше нет ничего интересного..." << endl;
		cyclep3(1);
}
void shed4(int shd4) {
	cout << "___________________________________________\nТут больше нет ничего интересного..." << endl;
	cyclep4(1);
}