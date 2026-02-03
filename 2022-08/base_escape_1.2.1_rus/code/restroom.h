#include <iostream>
using namespace std;
void cyep1(int cy1);
void cyep2(int cy2);
void cyep3(int cy3);
void cyep5(int cy5);
void cyep5(int cy5);
void restroom1(int rest1) {
	int back;
	cout << "___________________________________________\nВы зашли в комнату отдыха...это была просторная комната с несколькими диванчиками и некоторым спорт инвентарём\nСреди всего этого мусора вы заметили лежащий на диване ключ\nВзять ключ 1; Уйти 2" << endl;
	cin >> back;
	if (back == 1) {
		cout << "___________________________________________\nВы взяли ключ" << endl;
		cyep2(1);
	}
	if (back == 2)
		cyep1(1);
}
void restroom2(int rest2) {
	cout << "___________________________________________\nЗдесь больше нет ничего интересного..." << endl;
	cyep2(1);
}
void restroom3(int rest3) {
	cout << "___________________________________________\nЗдесь больше нет ничего интересного..." << endl;
	cyep3(1);
}
void restroom4(int rest4) {
	cout << "___________________________________________\nЗдесь больше нет ничего интересного..." << endl;
	cyep4(1);
}
void restroom5(int rest5) {
	int x;
	cout << "___________________________________________\nAMOGUS?!?!\nИзучить 1" << endl;
	cin >> x;
	if(x==1)
	system("explorer https://youtu.be/T59N3DPrvac");
	cyep5(1);
}