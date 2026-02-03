#include <iostream>
using namespace std;
void floor1(int fl1, int fr1);
void floor2(int fl2, int fr2);
void floor3(int fl3, int fr3);
void floor4(int fl4, int fr4);
void floor5(int fl5, int fr5);
void cyep1(int cy1) { //инвентарь пуст
	if (cy1 == 1)
		floor1(1, 0);
}
void cyep2(int cy2) { //есть ключ
	if (cy2 == 1)
		floor2(1, 0);
}
void cyep3(int cy3) { //открыта спальня
	if (cy3 == 1)
		floor3(1, 0);
}
void cyep4(int cy4) { //есть книги
	if (cy4 == 1)
		floor4(1, 0);
}
void cyep5(int cy5) { //есть петарда
	if (cy5 == 1)
		floor5(1, 0);
}