#include <iostream>
using namespace std;
void enter1(int ent1, int con1);
int main(int c);
void cyep1(int cy1);
void cyep2(int cy2);
void cyep3(int cy3);
void cyep5(int cy5);
void cyep5(int cy5);
void floor3(int fl3, int fr3);
void bedroom1(int bed1) {
	cout << "___________________________________________\nДверь закрыта..." << endl;
	cyep1(1);
}
void bedroom2(int bed2) {
	cout << "___________________________________________\nДверь закрыта..." << endl;
	cyep2(1);
}
void bedroom3(int bed2) {
	char dead = '0';
	int y;
	if (bed2 == 1) {
		cout << "___________________________________________\nВы зашли в просторную спальню...осмотрев спальню вы нашли\nКниги лежащие на кровати 1\nШкаф 2\nУйти 3" << endl;
		cin >> y;
		switch (y) {
		case 1:
			cout << "___________________________________________\nВы взяли книги и поспешно вышли из спальни" << endl;
			cyep4(1);
			break;
		case 2:
			cout << "___________________________________________\nВы рассматривали старинный шкаф...как вздруг услышали чьи-то шаги в коридоре...\nВы открыли и залезли в шкаф...сразу как вы зашли двери закрылись...вы попытались их открыть, но всё безуспешно\nВ какой-то момент снизу начал выезжать длинный широкий кол...\nВЫ ПОГИБЛИ" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			cin >> dead;
			if (dead != '0')
				main(0);
			break;
		case 3:
			cyep3(1);
			break;
		}
	}
}
void bedroom4(int bed4) {
	cout << "___________________________________________\nТам нет ничего интересного..." << endl;
	cyep4(1);
}
void bedroom5(int bed5) {
	cout << "___________________________________________\nТам нет ничего интересного..." << endl;
	cyep5(1);
}