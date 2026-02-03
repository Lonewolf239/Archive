#include <iostream>
using namespace std;
void cyc1(int cycle1);
void cyc2(int cycle2);
void cyc3(int cycle3);
void ladder1(int lad1);
void ladder2(int lad2);
void ladder3(int lad3);
void liver1(int liv1);
void liver2(int liv2);
void liver3(int liv3);
void kitchen1(int kit1);
void kitchen2(int kit2);
void kitchen3(int kit3);
void utroom1(int rotn1);
void utroom2(int rotn2);
void utroom3(int rotn3);
void enter1(int ent1, int con1) {
	int  lad1, livr1, kit1, utr1;
	if (ent1 == 1) {
		cout << "___________________________________________\nВы стоите в центре прихожей\nЛестница 1\nГостиная 2\nКухня 3\nПодсобка 4" << endl;
		cin >> con1;
	}
	switch (con1) {
	case 1:
		cout << "___________________________________________\nВы подошли к Т-образной лестнице...в центре её перекрёстка сломано несколько досок\nВроде можно перепрыгнуть\nПрыгнуть 1; Уйти 2" << endl;
		cin >> lad1;
		if (lad1 == 1)
			ladder1(1);
		if (lad1 == 2)
			cyc1(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к двери\nДверь открыта\nЗайти 1; Уйти 2" << endl;
		cin >> livr1;
		if (livr1 == 1)
			liver1(1);
		if (livr1 == 2)
			cyc1(1);
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к кухне\nВроде открыто\nЗайти 1; Уйти 2" << endl;
		cin >> kit1;
		if (kit1 == 1)
			kitchen1(1);
		if (kit1 == 2)
			cyc1(1);
		break;
	case 4:
		cout << "___________________________________________\nВы подошли к подсобке\nДверь закрыта\nОткрыть замок 1; Уйти 2" << endl;
		cin >> utr1;
		if (utr1 == 1)
			utroom1(1);
		if (utr1 == 2)
			cyc1(1);
		break;
	}
}
void enter2(int ent2, int con2) {
	int  lad2, livr2, kit2, utr2;
	if (ent2 == 1) {
		cout << "___________________________________________\nВы стоите в центре прихожей\n(У вас есть: Ключ)\nЛестница 1\nГостиная 2\nКухня 3\nПодсобка 4" << endl;
		cin >> con2;
	}
	switch (con2) {
	case 1:
		cout << "___________________________________________\nВы подошли к Т-образной лестнице...в центре её перекрёстка сломано несколько досок\nВроде можно перепрыгнуть\nПрыгнуть 1; Уйти 2" << endl;
		cin >> lad2;
		if (lad2 == 1)
			ladder2(1);
		if (lad2 == 2)
			cyc2(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к двери\nДверь открыта\nЗайти 1; Уйти 2" << endl;
		cin >> livr2;
		if (livr2 == 1)
			liver2(1);
		if (livr2 == 2)
			cyc2(1);
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к кухне\nВроде открыто\nЗайти 1; Уйти 2" << endl;
		cin >> kit2;
		if (kit2 == 1)
			kitchen2(1);
		if (kit2 == 2)
			cyc2(1);
		break;
	case 4:
		cout << "___________________________________________\nВы подошли к подсобке\nДверь закрыта\nОткрыть замок 1; Уйти 2" << endl;
		cin >> utr2;
		if (utr2 == 1)
			utroom2(1);
		if (utr2 == 2)
			cyc2(1);
		break;
	}
}
void enter3(int ent3, int con3) {
	int  lad3, livr3, kit3, utr3;
	if (ent3 == 1) {
		cout << "___________________________________________\nВы стоите в центре прихожей\n(У вас есть: Доски, Молоток и Гвозди)\nЛестница 1\nГостиная 2\nКухня 3\nПодсобка 4" << endl;
		cin >> con3;
	}
	switch (con3) {
	case 1:
		cout << "___________________________________________\nВы подошли к Т-образной лестнице...в центре её перекрёстка сломано несколько досок\nНо теперь можно сделать мостик\nПопытаться что-то сделать 1; Уйти 2" << endl;
		cin >> lad3;
		if (lad3 == 1)
			ladder3(1);
		if (lad3 == 2)
			cyc3(1);
		break;
	case 2:
		cout << "___________________________________________\nВы подошли к двери\nДверь открыта\nЗайти 1; Уйти 2" << endl;
		cin >> livr3;
		if (livr3 == 1)
			liver3(1);
		if (livr3 == 2)
			cyc3(1);
		break;
	case 3:
		cout << "___________________________________________\nВы подошли к кухне\nВроде открыто\nЗайти 1; Уйти 2" << endl;
		cin >> kit3;
		if (kit3 == 1)
			kitchen3(1);
		if (kit3 == 2)
			cyc3(1);
		break;
	case 4:
		cout << "___________________________________________\nВы подошли к подсобке\nДверь открыта\nОткрыть замок 1; Уйти 2" << endl;
		cin >> utr3;
		if (utr3 == 1)
			utroom3(1);
		if (utr3 == 2)
			cyc3(1);
		break;
	}
}