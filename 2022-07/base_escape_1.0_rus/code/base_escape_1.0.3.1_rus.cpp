#include "include.h"
using namespace  std;
void start(int start);
void floor3(int fl3, int fr3);
int main() {
	setlocale(LC_CTYPE, "rus");
	int st = 0;
	cout << "В игре есть множество секреток и пасхалок, но для некоторых нужен доступ в интернет" << endl << endl;
	cout << "Если у вас есть код сохранения, введите его далее..." << endl << endl;
	cout << "Добро пожаловать в мою первую тестовую игру\nBase_escape_1.0.3.1_rus\nВведите число (1) для старта:" << endl;
	cin >> st;
	if (st == 2209) {
		cout << endl << endl << "ЗАГРУЗКА СОХРАНЕНИЯ..." << endl << endl;
		cout << endl << endl << "СОХРАНЕНИЕ ЗАГРУЖЕНО УСПЕШНО" << endl << endl;
		enter1(1, 0);
	}
	if (st == 5296) {
		cout << endl << endl << "ЗАГРУЗКА СОХРАНЕНИЯ..." << endl << endl;
		cout << endl << endl << "СОХРАНЕНИЕ ЗАГРУЖЕНО УСПЕШНО" << endl << endl;
		floor3(1, 0);
	}
	if (st == 1) {
		start(1);
	}
	return 0;
}