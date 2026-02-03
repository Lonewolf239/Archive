#include "include.h"
using namespace  std;
void start(int start);
void floor3(int fl3, int fr3);
int main() {
	setlocale(LC_CTYPE, "rus");
	int st;
	char sae[25];
	cout << "В игре есть множество секреток и пасхалок, но для некоторых нужен доступ в интернет" << endl << endl;
	cout << "Если у вас есть код сохранения, введите его далее..." << endl << endl;
	cout << "Добро пожаловать в мою первую тестовую игру\nBase_escape_1.1.0_rus\nВведите число: (1) для старта; (2) для загрузки сохранения" << endl;
	cin >> st;
	if (st == 2) {
		ifstream file("save.txt");
		if (!file.is_open()) {
			cout << "ОТСУТСТВУЕТ ФАЙЛ СОХРАНЕНИЯ!" << endl;
			start(1);
		}
		else {
			file.getline(sae, 25);
			if (sae[5] == '1') {
				cout << endl << endl << "ЗАГРУЗКА СОХРАНЕНИЯ..." << endl << endl;
				cout << endl << endl << "СОХРАНЕНИЕ ЗАГРУЖЕНО УСПЕШНО" << endl << endl;
				enter1(1, 0);
			}
			if (sae[5] == '2') {
				cout << endl << endl << "ЗАГРУЗКА СОХРАНЕНИЯ..." << endl << endl;
				cout << endl << endl << "СОХРАНЕНИЕ ЗАГРУЖЕНО УСПЕШНО" << endl << endl;
				floor3(1, 0);
			}
		}
	}
	if (st == 1) {
		start(1);
	}
	return 0;
}