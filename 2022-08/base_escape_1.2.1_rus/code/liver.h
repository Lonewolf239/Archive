#include <iostream>
using namespace std;
void floor3(int fl3, int fr3);
int main(int c);
void enter1(int ent1, int con1);
void cyc1(int cp1);
void cyc2(int cp2);
void cyc3(int cp3);
void liver1(int liv1) {
	char dead = '0';
	int cakeislie;
	cout << "___________________________________________\nЗайдя в гостиную вы увидели большой овальный стол с кучей стульев\nПодойдя поближе вы нашли большой праздничный торт\nВыглядит вкусно. Попробовать?\nДа 1\nНет 2" << endl;
	cin >> cakeislie;
	if (cakeislie == 1) {
		cout << "___________________________________________\nВы попробовали торт...а он чертовски вкусный!..правда с каким-то странным послевкусием\nУ вас резко заболел живот...\nВы чувствуйте невыносимую боль...\nВЫ ПОГИБЛИ" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
	else {
		cout << "___________________________________________\nВы решили не есть эту дрянь, ведь ТОРТ ЭТО ЛОЖЬ...\nПоэтому вы взяли и скинули торт на пол\nПод тортом лежал ключ" << endl;
		cyc2(1);
	}
}
void liver2(int liv2) {
	cout << "___________________________________________\nЗдесь нет больше ничего интересного..." << endl;
	cyc2(1);
}
void liver3(int liv3) {
	cout << "___________________________________________\nЗдесь нет больше ничего интересного..." << endl;
	cyc3(1);
}