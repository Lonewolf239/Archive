#include <clocale>
#include "start.h"
#include "Locations.h"
#include "window.h"
#include "cycle.h"
#include "close.h"
#include "door.h"
#include "escape.h"
#include "carpter.h"
using namespace  std;
void start(int start);
int main() {
	setlocale(LC_CTYPE, "rus");
	int st = 0;
	cout << "Добро пожаловать в мою первую тестовую игру\nBase_escape_1.0_rus\nВведите число (1) для старта:" << endl;
	cin >> st;
	if (st == 1)
		start(1);
	return 0;
}