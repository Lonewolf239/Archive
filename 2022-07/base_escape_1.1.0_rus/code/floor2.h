#include <iostream>
using namespace std;
void cyep1(int cy1);
void cyep2(int cy2);
void cabinet1(int cab1);
void cabinet2(int cab2);
void bedroom1(int bed1);
void bedroom2(int bed2);
void restroom1(int rest1);
void restroom2(int rest2);
void attic1(int att1);
void attic2(int att2);
void cyep3(int cy3);
void cyep4(int cy4);
void cyep5(int cy5);
void cabinet3(int cab3);
void cabinet4(int cab4);
void cabinet5(int cab5);
void bedroom3(int bed3);
void bedroom4(int bed4);
void bedroom5(int bed5);
void restroom3(int rest3);
void restroom4(int rest4);
void restroom5(int rest5);
void attic3(int att3);
void attic4(int att4);
void attic5(int att5);
void floor1(int fl1, int fr1) { //инвентарь пуст
	int cab1, bed1, rest1, att1;
	if (fl1 == 1) {
		cout << "___________________________________________\nВы стоите рядом с лестницой\nКабинет 1\nСпальня 2\nКомната отдыха 3\nЧердак 4" << endl;
		cin >> fr1;
	}
	switch (fr1) {
	case 1:
		cout << "___________________________________________\nВы подошли к двери и попытались открыть...закрыто...\nОткрыть 1; Уйти 2" << endl;
		cin >> cab1;
		if (cab1 == 1)
			cabinet1(1);            //Кабинет
		if (cab1 == 2)
			cyep1(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> bed1;
		if (bed1 == 1)
			bedroom1(1);
		if (bed1 == 2)
			cyep1(1);              //Спальня
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> rest1;
		if (rest1 == 1)
			restroom1(1);             //Комната отдыха
		if (rest1 == 2)
			cyep1(1);
		break;
	case 4:
		cout << "___________________________________________\nВы подошли к люку на чердак...оттуда доносятся странные звуки...\nЗаглянуть 1; Уйти 2" << endl;
		cin >> att1;
		if (att1 == 1)
			attic1(1);               //Чердак
		if (att1 == 2)
			cyep1(1);
		break;
	}
}
void floor2(int fl2, int fr2) { //есть ключ
	int cab2, bed2, rest2, att2;
	if (fl2 == 1) {
		cout << "___________________________________________\nВы стоите рядом с лестницой\n(У вас есть Ключ)\nКабинет 1\nСпальня 2\nКомната отдыха 3\nЧердак 4" << endl;
		cin >> fr2;
	}
	switch (fr2) {
	case 1:
		cout << "___________________________________________\nВы подошли к двери и попытались открыть...закрыто...\nОткрыть 1; Уйти 2" << endl;
		cin >> cab2;
		if (cab2 == 1)
			cabinet2(1);            //Кабинет
		if (cab2 == 2)
			cyep2(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> bed2;
		if (bed2 == 1)
			bedroom2(1);
		if (bed2 == 2)
			cyep2(1);              //Спальня
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> rest2;
		if (rest2 == 1)
			restroom2(1);             //Комната отдыха
		if (rest2 == 2)
			cyep2(1);
		break;
	case 4:
		cout << "___________________________________________\nВы подошли к люку на чердак...оттуда доносятся странные звуки...\nЗаглянуть 1; Уйти 2" << endl;
		cin >> att2;
		if (att2 == 1)
			attic2(1);               //Чердак
		if (att2 == 2)
			cyep2(1);
		break;
	}
}
void floor3(int fl3, int fr3) { //открыта спальня
	int cab3, bed3, rest3, att3;
	if (fl3 == 1) {
		cout << "___________________________________________\nВы стоите рядом с лестницой\nКабинет 1\nСпальня 2\nКомната отдыха 3\nЧердак 4" << endl;
		cin >> fr3;
	}
	switch (fr3) {
	case 1:
		cout << "___________________________________________\nВы подошли к двери...ну теперь открыто\nЗайти 1; Уйти 2" << endl;
		cin >> cab3;
		if (cab3 == 1)
			cabinet3(1);            //Кабинет
		if (cab3 == 2)
			cyep3(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> bed3;
		if (bed3 == 1)
			bedroom3(1);
		if (bed3 == 2)
			cyep3(1);              //Спальня
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> rest3;
		if (rest3 == 1)
			restroom3(1);             //Комната отдыха
		if (rest3 == 2)
			cyep3(1);
		break;
	case 4:
		cout << "___________________________________________\nВы подошли к люку на чердак...оттуда доносятся странные звуки...\nЗаглянуть 1; Уйти 2" << endl;
		cin >> att3;
		if (att3 == 1)
			attic3(1);               //Чердак
		if (att3 == 2)
			cyep3(1);
		break;
	}
}
void floor4(int fl4, int fr4) { //есть книги
	int cab4, bed4, rest4, att4;
	if (fl4 == 1) {
		cout << "___________________________________________\nВы стоите рядом с лестницой\n(У вас есть Книги)\nКабинет 1\nСпальня 2\nКомната отдыха 3\nЧердак 4" << endl;
		cin >> fr4;
	}
	switch (fr4) {
	case 1:
		cout << "___________________________________________\nВы подошли к двери...ну теперь открыто\nЗайти 1; Уйти 2" << endl;
		cin >> cab4;
		if (cab4 == 1)
			cabinet4(1);            //Кабинет
		if (cab4 == 2)
			cyep4(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> bed4;
		if (bed4 == 1)
			bedroom4(1);
		if (bed4 == 2)
			cyep4(1);              //Спальня
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> rest4;
		if (rest4 == 1)
			restroom4(1);             //Комната отдыха
		if (rest4 == 2)
			cyep4(1);
		break;
	case 4:
		cout << "___________________________________________\nВы подошли к люку на чердак...оттуда доносятся странные звуки...\nЗаглянуть 1; Уйти 2" << endl;
		cin >> att4;
		if (att4 == 1)
			attic4(1);               //Чердак
		if (att4 == 2)
			cyep4(1);
		break;
	}
}
void floor5(int fl5, int fr5) { //есть петарда
	int cab5, bed5, rest5, att5;
	if (fl5 == 1) {
		cout << "___________________________________________\nВы стоите рядом с лестницой\n(У вас есть Петарда)\nКабинет 1\nСпальня 2\nКомната отдыха 3\nЧердак 4" << endl;
		cin >> fr5;
	}
	switch (fr5) {
	case 1:
		cout << "___________________________________________\nВы подошли к двери...ну теперь открыто\nЗайти 1; Уйти 2" << endl;
		cin >> cab5;
		if (cab5 == 1)
			cabinet5(1);            //Кабинет
		if (cab5 == 2)
			cyep5(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> bed5;
		if (bed5 == 1)
			bedroom5(1);
		if (bed5 == 2)
			cyep5(1);              //Спальня
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к двери\nОткрыть 1; Уйти 2" << endl;
		cin >> rest5;
		if (rest5 == 1)
			restroom5(1);             //Комната отдыха
		if (rest5 == 2)
			cyep5(1);
		break;
	case 4:
		cout << "___________________________________________\nВы подошли к люку на чердак...оттуда доносятся странные звуки...\nЗаглянуть 1; Уйти 2" << endl;
		cin >> att5;
		if (att5 == 1)
			attic5(1);               //Чердак
		if (att5 == 2)
			cyep5(1);
		break;
	}
}