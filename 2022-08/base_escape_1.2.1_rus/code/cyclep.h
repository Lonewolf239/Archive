#include <iostream>
using namespace std;
void yard1(int yrd1, int yr1);
void yard2(int yrd2, int yr2);
void yard3(int yrd3, int yr3);
void yard4(int yrd4, int yr4);
void cyclep1(int cp1) { //инвентарь пуст
	if (cp1 == 1)
		yard1(1, 0);
}
void cyclep2(int cp2) { //есть монтировка
	if (cp2 == 1)
		yard2(1, 0);
}
void cyclep3(int cp3) { //есть кувалда
	if (cp3 == 1)
		yard3(1, 0);
}
void cyclep4(int cp4) { //есть взрывчатка
	if (cp4 == 1)
		yard4(1, 0);
}