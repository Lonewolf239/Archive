#include <iostream>
using namespace std;
void cycle1(int cycle1);
void cycle2(int cycle2);
void cycle3(int cycle3);
void window1(int win1);
void window2(int win2);
void window3(int win3);
void close1(int cl1);
void close2(int cl2);
void close3(int cl3);
void door1(int door1);
void door2(int door2);
void door3(int door3);
void carpter1(int carp1);
void carpter2(int carp2);
void location1(int loc, int c1) {
	int wind1, cls1, dr1, crp1;
	if (loc == 1) {
		cout << "___________________________________________\nВы стоите в центре подвала...\nОкно 1\nШкаф 2\nДверь 3\nКовёр лежащий на полу 4" << endl;
		cin >> c1;
	}
	switch (c1) {
	case 1:
		cout << "___________________________________________\nВы подошли к окну и попытались его открыть...оно закрыто\nУйти 1; Посмотреть в окно 2" << endl;
		cin >> wind1;
		if (wind1 == 1) {
			cycle1(1);
		}
		else
			window1(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к шкафу... он разделен на два отделения, нижнее и верхнее.\nОткрыть верхнее 1\nОткрыть нижнее 2\nУйти 3" << endl;
		cin >> cls1;
		switch (cls1) {
		case 1:
			close1(1);
			break;
		case 2:
			close1(2);
			break;
		case 3:
			cycle1(1);
			break;
		}
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к двери...она закрыта\nУйти 1; Открыть замок 2" << endl;
		cin >> dr1;
		if (dr1 == 1)
			cycle1(1);
		if (dr1 == 2)
			door1(1);
				break;
	case 4:
		cout << "___________________________________________\nВы посмотрели на ковер под ногами...\nкажется, что под ним что-то есть... но его края забетонированы...\nОсмотреть 1" << endl;
		cin >> crp1;
		if (crp1 == 1)
			carpter1(1);
			break;
	}
}
void location2(int isHasKnife, int c2) {
	int wind2, cls2, dr2, crp2;
	if (isHasKnife == 1) {
		cout << "___________________________________________\nВы стоите в центре подвала...\n(У вас есть Нож)\nОкно 1\nШкаф 2\nДверь 3\nКовёр лежащий на полу 4" << endl;
		cin >> c2;
		switch (c2) {
		case 1:
			cout << "___________________________________________\nВы подошли к окну и попытались его открыть...оно закрыто\nУйти 1; Посмотреть в окно 2" << endl;
			cin >> wind2;
			if (wind2 == 1) {
				cycle2(1);
			}
			else
				window2(1);
			break;
		case 2:
			cout << "___________________________________________\nВы подошли к шкафу... он разделен на два отделения, нижнее и верхнее.\nОткрыть верхнее 1\nОткрыть нижнее 2\nУйти 3" << endl;
			cin >> cls2;
			switch (cls2) {
			case 1:
				close2(1);
				break;
			case 2:
				close2(2);
				break;
			case 3:
				cycle2(1);
				break;
			}
			break;
		case 3:
			cout << "___________________________________________\nВы подошли к двери...она закрыта\nУйти 1; Открыть замок 2" << endl;
			cin >> dr2;
			if (dr2 == 1)
				cycle2(1);
			if (dr2 == 2)
				door2(1);
			break;
		case 4:
			cout << "___________________________________________\nВы посмотрели на ковер под ногами...\nкажется, что под ним что-то есть... но его края забетонированы...\nОсмотреть 1" << endl;
			cin >> crp2;
			if (crp2 == 1)
				carpter2(1);
			break;
		}
	}
}
void location3(int isHasKey, int c3) {
	int wind3, cls3, dr3, crp3;
	if (isHasKey == 1) {
		cout << "___________________________________________\nВы стоите в центре подвала...\n(У вас есть Ключ)\nОкно 1\nШкаф 2\nДверь 3\nКовёр лежащий на полу 4" << endl;
		cin >> c3;
	}
	switch (c3) {
	case 1:
		cout << "___________________________________________\nВы подошли к окну и попытались его открыть...оно закрыто\nУйти 1; Посмотреть в окно 2" << endl;
		cin >> wind3;
		if (wind3 == 1) {
			cycle3(1);
		}
		else
			window3(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к шкафу... он разделен на два отделения, нижнее и верхнее.\nОткрыть верхнее 1\nОткрыть нижнее 2\nУйти 3" << endl;
		cin >> cls3;
		switch (cls3) {
		case 1:
			close3(1);
			break;
		case 2:
			close3(2);
			break;
		case 3:
			cycle3(1);
			break;
		}
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к двери...она закрыта\nУйти 1; Открыть замок 2" << endl;
		cin >> dr3;
		if (dr3 == 1)
			cycle3(1);
		if (dr3 == 2)
			door3(1);
		break;
	case 4:
		cout << "___________________________________________\nВы посмотрели на ковер под ногами...\n.....зачем вы разрезали его в форме AMOGUSA?...\nУйти 1" << endl;
		cin >> crp3;
		if (crp3 == 1)
			cycle3(1);
		break;
	}
}