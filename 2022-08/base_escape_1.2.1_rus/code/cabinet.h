#include <iostream>
using namespace std;
void enter1(int ent1, int con1);
int main(int c);
void cyep2(int cy2);
void cyep3(int cy3);
void cyep5(int cy5);
void cyep5(int cy5);
void floor3(int fl3, int fr3);
void cabinet1(int cab1) {
	if (cab1 == 1) {
		char dead = '0';
		cout << "___________________________________________\nВы не может...\n-Так, разказчик подожди. Ты что не видишь? Да по ту сторону монитора умственно отсталый!\nБоже...насколько надо быть тупым чтоб дверь открывать не имея ключа от неё...я не хочу так играть...не хочу!..\nВЫ ПОГИБЛИ" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		cin >> dead;
		if (dead != '0')
			main(0);
	}
}
void cabinet2(int cab2) {
	int x;
	if (cab2 == 1) {
		cout << "___________________________________________\nВы открыли дверь и вошли в просторную комнату...это был тёмный готический кабинет с кучей книжных полок\nКажется на одной из полок не хватает пары книг...\nУходя вы нажали на какой-то рычаг на стене...кажется где-то открылась дверь...\nУйти 1" << endl;
		cin >> x;
	}
	if (x == 1) {
		ofstream file("save.txt");
		if (file.is_open()) {
			file << "v?n8*pnqXdb@?Wo~|o2H1ZvpB";
			file.close();
			cout << endl << "СОХРАНЕНИЕ ПРОШЛО УСПЕШНО" << endl;
		}
		cyep3(1);
	}
}
void cabinet3(int cab3) {
	if (cab3 == 1) {
		cout << "___________________________________________\nВы пока ничего не можете тут сделать..."<<endl;
		cyep3(1);
	}
}
void cabinet4(int cab4) {
	char dead = '0';
	if (cab4 == 1) {
		int con;
		cout << "___________________________________________\nВы зашли в кабинет...на полках всё так же не хватает пары книг...но теперь то они при вас\nКак их поставить?\nСиняя - справа; Красная - слева 1\nСиняя - слева; Красная - справа 2" << endl;
		cin >> con;
		if (con == 1) {
			cout << "___________________________________________\nКниги задвинулись на свои места...как вздруг из стены вылез маленький ящик...в нём лежала петарда и зажигалка" << endl;
			cyep5(1);
		}
		if (con == 2) {
			cout << "___________________________________________\nКниги задвинулись...но тут же вылетели и упали на пол...дверь в кабинет резко захлопнулась...\nВидимо вам надо было внимательнее смотреть Матрицу\nВЫ ПОГИБЛИ" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			cin >> dead;
			if (dead != '0')
				main(0);
		}
	}
}
void cabinet5(int cab5) {
	if (cab5 == 1) {
		cout << "___________________________________________\nТут нет больше ничего интересного..." << endl;
		cyep5(1);
	}
}