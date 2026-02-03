#include <iostream>
using namespace std;
void cyclep1(int cp1);
void cyclep2(int cp2);
void cyclep3(int cp3);
void cyclep4(int cp4);
void mansion1(int man1);
void mansion2(int man2);
void mansion3(int man3);
void gate1(int gat1);
void gate2(int gat2);
void gate3(int gat3);
void gate4(int gat4);
void house1(int hou1);
void house2(int hou2);
void house3(int hou3);
void house4(int hou4);
void shed1(int shd1);
void shed2(int shd2);
void shed3(int shd3);
void shed4(int shd4);
void yard1(int yrd1, int yr1) { //инвентарь пуст
	int mn1, gt1, hos1, sh1;
	if (yrd1 == 1) {
		cout << "___________________________________________\nYou are standing in the middle of the courtyard...\nMansion 1\nGate 2\nTreehouse 3\nSmall shed 4" << endl;
		cin >> yr1;
	}
	switch (yr1) {
	case 1:
		cout << "___________________________________________\nApproaching the main entrance of the mansion, you saw a huge majestic wooden gate with metal edging\nOpen 1; Leave 2" << endl;
		cin >> mn1;
		if (mn1 == 1)
			mansion1(1);
		if (mn1 == 2)
			cyclep1(1);
		break;
	case 2:
		cout << "___________________________________________\nYou have come to a large iron gate with numerous designs...a bulky old lock hangs on it...\nIt seems that it is no longer possible to open it\nStudy 1; Leave 2" << endl;
		cin >> gt1;
		if (gt1 == 1)
			gate1(1);
		if (gt1 == 2)
			cyclep1(1);
		break;
	case 3:
		cout << "___________________________________________\nYou came to a tree house...old rotten boards nailed to a tree led into it...\nClimb 1; Leave 2" << endl;
		cin >> hos1;
		if (hos1 == 1)
			house1(1);
		if (hos1 == 2)
			cyclep1(1);
		break;
	case 4:
		cout << "___________________________________________\nYou have come to a small shed...\nThe door seems to be open\nEnter 1; Leave 2" << endl;
		cin >> sh1;
		if (sh1 == 1)
			shed1(1);
		if (sh1 == 2)
			cyclep1(1);
		break;
	}
}
void yard2(int yrd2, int yr2) { //есть монтировка
	int mn2, gt2, hos2, sh2;
	if (yrd2 == 1) {
		cout << "___________________________________________\nYou are standing in the middle of the courtyard...\n(You have: Crowbar)\nMansion 1\nGate 2\nTreehouse 3\nSmall shed 4" << endl;
		cin >> yr2;
	}
	switch (yr2) {
	case 1:
		cout << "___________________________________________\nApproaching the main entrance of the mansion, you saw a huge majestic wooden gate with metal edging\nOpen 1; Leave 2" << endl;
		cin >> mn2;
		if (mn2 == 1)
			mansion2(1);
		if (mn2 == 2)
			cyclep2(1);
		break;
	case 2:
		cout << "___________________________________________\nYou have come to a large iron gate with numerous designs...a bulky old lock hangs on it...\nIt seems that it is no longer possible to open it\nStudy 1; Leave 2" << endl;
		cin >> gt2;
		if (gt2 == 1)
			gate2(1);
		if (gt2 == 2)
			cyclep2(1);
		break;
	case 3:
		cout << "___________________________________________\nYou came to a tree house...old rotten boards nailed to a tree led into it...\nClimb 1; Leave 2" << endl;
		cin >> hos2;
		if (hos2 == 1)
			house2(1);
		if (hos2 == 2)
			cyclep2(1);
		break;
	case 4:
		cout << "___________________________________________\nYou have come to a small shed...\nThe door seems to be open\nEnter 1; Leave 2" << endl;
		cin >> sh2;
		if (sh2 == 1)
			shed2(1);
		if (sh2 == 2)
			cyclep2(1);
		break;
	}
}
void yard3(int yrd3, int yr3) { //есть кувалда
	int mn3, gt3, hos3, sh3;
	if (yrd3 == 1) {
		cout << "___________________________________________\nYou are standing in the middle of the courtyard...\n(You have: Sledgehammer)\nMansion 1\nGate 2\nTreehouse 3\nSmall Shed 4" << endl;
		cin >> yr3;
	}
	switch (yr3) {
	case 1:
		cout << "___________________________________________\nApproaching the main entrance of the mansion, you saw a huge majestic wooden gate with metal edging\nOpen 1; Leave 2" << endl;
		cin >> mn3;
		if (mn3 == 1)
			mansion3(1);
		if (mn3 == 2)
			cyclep3(1);
		break;
	case 2:
		cout << "___________________________________________\nYou have come to a large iron gate with numerous designs...a bulky old lock hangs on it...\nIt seems that it is no longer possible to open it\nStudy 1; Leave 2" << endl;
		cin >> gt3;
		if (gt3 == 1)
			gate3(1);
		if (gt3 == 2)
			cyclep3(1);
		break;
	case 3:
		cout << "___________________________________________\nYou came to a tree house...old rotten boards nailed to a tree led into it...\nClimb 1; Leave 2" << endl;
		cin >> hos3;
		if (hos3 == 1)
			house3(1);
		if (hos3 == 2)
			cyclep3(1);
		break;
	case 4:
		cout << "___________________________________________\nYou have come to a small shed...\nThe door seems to be open\nEnter 1; Leave 2" << endl;
		cin >> sh3;
		if (sh3 == 1)
			shed3(1);
		if (sh3 == 2)
			cyclep3(1);
		break;
	}
}
void yard4(int yrd4, int yr4) { //есть взрывчатка
	int mn4, gt4, hos4, sh4;
	if (yrd4 == 1) {
		cout << "___________________________________________\nYou are standing in the middle of the courtyard...\n(You have: Explosives)\nGate 1\nTreehouse 2\nSmall shed 3" << endl;
		cin >> yr4;
	}
	switch (yr4) {
	case 1:
		cout << "___________________________________________\nYou have come to a large iron gate with numerous designs...a bulky old lock hangs on it...\nIt seems that it is no longer possible to open it\nStudy 1; Leave 2" << endl;
		cin >> gt4;
		if (gt4 == 1)
			gate4(1);
		if (gt4 == 2)
			cyclep4(1);
		break;
	case 2:
		cout << "___________________________________________\nYou came to a tree house...old rotten boards nailed to a tree led into it...\nClimb 1; Leave 2" << endl;
		cin >> hos4;
		if (hos4 == 1)
			house4(1);
		if (hos4 == 2)
			cyclep4(1);
		break;
	case 3:
		cout << "___________________________________________\nYou have come to a small shed...\nThe door seems to be open\nEnter 1; Leave 2" << endl;
		cin >> sh4;
		if (sh4 == 1)
			shed4(1);
		if (sh4 == 2)
			cyclep4(1);
		break;
	}
}