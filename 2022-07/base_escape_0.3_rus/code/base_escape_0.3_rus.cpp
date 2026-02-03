#include "include.h"
using namespace  std;
void start(int start);
int main() {
	setlocale(LC_CTYPE, "rus");
	int st = 0;
	cout << "Добро пожаловать в мою первую тестовую игру\nBase_escape_0.3_rus\nВведите число (1) для старта:" << endl;
	cin >> st;
	if (st == 1)
		start(1);
	return 0;
}