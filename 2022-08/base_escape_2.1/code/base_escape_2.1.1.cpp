#include <iostream>
#include <fstream>
using namespace std;
//инвентарь часть 1
bool isHasKnife = false;
bool isHasKey1 = false;
//инвентарь часть 2
bool isHasCrowbar = false;
bool isHasMaul = false;
bool isHasExplosives = false;
//инвентарь часть 3
bool isHasKey2 = false;
bool isHasPlanks = false;
//инвентарь часть 4
bool isHasKey3 = false;
bool bedroomOpen = false;
bool isHasBooks = false;
bool isHasFirecracker = false;
bool isHasAmongus = false;

//костыли функций (часть 1)
void start(int st);
void save(int sav);
void location(char loc[25]);
void cycle1(int cyc);
void window(int win);
void close(int cl);
void door(int dr);
void carpter(int car);
void escape(int escp);

//костыли функций (часть 2)
void yard(char yr[25]);
void cycle2(int cyc2);
void mansion(int man);
void gate(int gt);
void house(int hos);
void shed(int sh);

//костыли функций (часть 3)
void floor1(char floor1[25]);
void cycle3(int cyc3);
void ladder(int lad);
void liver(int liv);
void kitchen(int kit);
void utroom(int utr);

//костыли функций (часть 4)
void floor2(char floor2[25]);
void cycle4(int cyc4);
void cabinet(int cab);
void bedroom(int bed);
void restroom(int res);
void attic(int att);

void endgame(int end);
void levels(int lev);

//main
int main(int newe) {
	char strt = 'RCPS', con1[10];
	if (newe == 1) {
		cout << "WW   WW  EEEEE   LL       CCCC    OOOO   MM   MM  EEEEE\nWW   WW  EE      LL      CC  CC  OO  OO  MMM MMM  EE\nWW W WW  EEEE    LL      CC      OO  OO  MM M MM  EEEE\nWWWWWWW  EE      LL      CC  CC  OO  OO  MM   NN  EE\n WW WW   EEEEE   LLLLLL   CCCC    OOOO   MM   MM  EEEEE" << endl << endl;
		cout << "IIIIII  NN  NN\n  II    NNN NN\n  II    NN NNN\n  II    NN  NN\nIIIIII  NN  NN" << endl << endl;
		cout << "BBBBB    AAAA    SSSS   EEEEE\nBB  BB  AA  AA  SS      EE\nBBBBB   AAAAAA   SSSS   EEEE\nBB  BB  AA  AA      SS  EE\nBBBBB   AA  AA   SSSS   EEEEE" << endl << endl;
		cout << "EEEEE    SSSS    CCCC    AAAA   PPPPP   EEEEE\nEE      SS      CC  CC  AA  AA  PP  PP  EE\nEEEE     SSSS   CC      AAAAAA  PPPPP   EEEE\nEE          SS  CC  CC  AA  AA  PP      EE\nEEEEE    SSSS    CCCC   AA  AA  PP      EEEEE" << endl << endl;
		cout << " 2222         11\n22  22      1111\n   22         11\n 22           11\n222222  **    11" << endl;
		system("pause");
		cout << endl << endl;
		strt = 't';
	}
	if (newe == 0) {
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "Welcome to my updated version of base_escape_2.1.1\nStart\nLoad" << endl;
		cin >> con1;
		if (con1[0] == 's' || con1[0] == 'S') {
			start(1);
		}
		if (con1[0] == 'l' || con1[0] == 'L') {
			save(1);
		}
	}
	if (strt != 'RCPS') {
		cout << "Welcome to my updated version of base_escape_2.1.1\nStart\nLoad" << endl;
		cin >> con1;
		if (con1[0] == 's' || con1[0] == 'S') {
			start(1);
		}
		if (con1[0] == 'l' || con1[0] == 'L') {
			save(1);
		}
	}
	return 0;
}
//Старт
void start(int st) {
	char loc[25];
		cout << "___________________________________________\nYou woke up in an unknown place. Looks like a basement..." << endl;
		system("pause");
		cout << endl;
		cout << "___________________________________________\nLooking around, you realized that you did not see anything :(" << endl;
		system("pause");
		cout << endl;
		cout << "___________________________________________\nLooking around AT FEEL, you realized that it was a small room...\nYou found:\nWindow\nCloset\nDoor\nCarpet" << endl;
		cin >> loc;
		location(loc);
}
//загрузка сохранения
void save(int sav) {
	char sae[35];
	ifstream file("save.txt");
	if (!file.is_open()) {
		cout << endl << endl << endl << "SAVE FILE MISSING!" << endl << endl << endl;
		start(1);
	}
	else{
		isHasKnife = false;
		isHasKey1 = false;
		isHasCrowbar = false;
		isHasMaul = false;
		isHasExplosives = false;
		isHasKey2 = false;
		isHasPlanks = false;
		isHasKey3 = false;
		bedroomOpen = false;
		isHasBooks = false;
		isHasFirecracker = false;
		isHasAmongus = false;
		file.getline(sae, 25);
		file.close();
		if (sae[12] == 'B') {
			cout << endl << endl << "LOADING SAVE..." << endl << endl;
			cout << endl << endl << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			cycle2(1);
		}
		if (sae[12] == '5') {
			cout << endl << endl << "LOADING SAVE..." << endl << endl;
			cout << endl << endl << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			cycle3(1);
		}
		if (sae[12] == 't') {
			cout << endl << endl << "LOADING SAVE..." << endl << endl;
			cout << endl << endl << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			cycle4(1);
		}
		if (sae[16] == 'F') {
			cout << endl << endl << "LOADING SAVE..." << endl << endl;
			cout << endl << endl << "SAVE LOADED SUCCESSFULLY" << endl << endl;
			levels(1);
		}
	}
}
//подвал
void location(char loc[25]) {
	char wind[15], cls[15], dr[15], crp[15];
	if (loc[0] == 'W' || loc[0] == 'w') {
		cout << "___________________________________________\nYou went to the window and tried to open it...it's closed\nLook\nLeave" << endl;
		cin >> wind;
		if (wind[1] == 'O' || wind[1] == 'o') {
			window(1);
		}
		else
			cycle1(1);
	}
	if (loc[1] == 'L' || loc[1] == 'l') {
		cout << "___________________________________________\nYou have reached a closet... it is divided into two compartments, a lower and an upper one.\nOpen:\nUp\nBottom\nLeave" << endl;
		cin >> cls;
		if (cls[0] == 'U' || cls[0] == 'u')
			close(1);
		else if (cls[0] == 'B' || cls[0] == 'b')
			close(2);
		else
			cycle1(1);
	}
	if (loc[0] == 'D' || loc[0] == 'd') {
		cout << "___________________________________________\nYou have reached the door... it is locked\nOpen\nLeave" << endl;
		cin >> dr;
		if (dr[0] == 'O' || dr[0] == 'o')
			door(1);
		else
			cycle1(1);
	}
	if (loc[2] == 'R' || loc[2] == 'r') {
		cout << "___________________________________________\nYou looked at the carpet under your feet...\nIt looks like there's something under it...but its edges are concreted...\nInspect" << endl;
		cin >> crp;
		if (crp[0] == 'I' || crp[0] == 'i')
			carpter(1);
	}
}
//цикл подвала
void cycle1(int cyc) {
	char loc[25];
	cout << "___________________________________________\nYou are standing in the center of the basement...\nWindow\nCloset\nDoor\nCarpet" << endl;
	if (isHasKnife)
		cout << endl << "You have: Knife..." << endl;
	if (isHasKey1)
		cout << endl << "You have: Key..." << endl;
	cin >> loc;
	location(loc);
}
//окно
void window(int win) {
	char back = '0';
	if (win == 1) {
		if (isHasKey1) {
			cout << "		 SSSS    AAAA   UU  UU  LL\n		SS      AA  AA  UU  UU  LL\n		 SSSS   AAAAAA  UU  UU  LL\n		    SS  AA  AA  UU  UU  LL\n		 SSSS   AA  AA   UUUU   LLLLLL" << endl << endl;
			cout << "		 GGGG    OOOO    OOOO   DDDDD   MM   MM   AAAA   NN  NN\n		GG      OO  OO  OO  OO  DD  DD  MMM MMM  AA  AA  NNN NN\n		GG GGG  OO  OO  OO  OO  DD  DD  MM M MM  AAAAAA  NN NNN\n		GG  GG  OO  OO  OO  OO  DD  DD  MM   MM  AA  AA  NN  NN\n		 GGGG    OOOO    OOOO   DDDDD   MM   MM  AA  AA  NN  NN" << endl << endl;
			system("explorer https://youtu.be/jeM9yRJwKl8");
		}
		cout << "___________________________________________\nYou looked out the window...there is night\nYou turned around and went to the center of the room.." << endl;
		cin >> back;
	}
	if (back != '0')
		cycle1(1);
}
//шкаф
void close(int cl) {
	char x[25], y[25];
	if (cl == 1) {
		cout << "___________________________________________\nYou have opened the top drawer... it is empty\nOpen:\nBottom\nLeave" << endl;
		cin >> x;
		if (x[0] == 'B' || x[0] == 'b')
			close(2);
		else
			cycle1(1);
	}
	if (cl == 2 && isHasKnife) {
		cout << "___________________________________________\nYou have opened the bottom drawer... it is empty\nLeave" << endl;
		cin >> y;
		cycle1(1);
	}
	if (cl == 2 && isHasKey1) {
		cout << "___________________________________________\nYou have opened the bottom drawer... it is empty\nLeave" << endl;
		cin >> y;
		cycle1(1);
	}
	if (cl == 2 && !isHasKnife) {
		cout << "___________________________________________\nYou have opened the bottom drawer... there is a knife\nTake:\nKnife\nLeave" << endl;
		cin >> y;
		if (y[0] == 'K' || y[0] == 'k') {
			isHasKnife = true;
			cout << "___________________________________________\nYou took a knife..." << endl;
			cycle1(1);
		}
		else
			cycle1(1);
	}
}
//дверь
void door(int dr) {
	char save[5];
	if (!isHasKey1) {
		cout << "___________________________________________\nI can't open this door..." << endl;
		cycle1(1);
	}
	if (isHasKey1) {
		cout << "___________________________________________\nYou inserted the key into the lock and turned... the lock opened and fell to the floor with a clang of metal..." << endl;
		cout << endl << endl << "Do you want to save your progress?" << endl;
		cin >> save;
		if (save[0] == 'y' || save[0] == 'Y' || save[0] == 'S' || save[0] == 's') {
			ofstream file("save.txt");
			if (file.is_open()) {
				file << "lx55GZ6dG6eJBl2oh6S0vtXVS3|MsS";
				file.close();
				cout << endl << endl << endl << "SAVE SUCCESSFUL" << endl << endl << endl;
			}
			isHasKey1 = false;
			escape(1);
		}
		else {
			isHasKey1 = false;
			escape(1);
		}
	}
}
//кове́р
void carpter(int car) {
	char cut[15];
	if (isHasKnife) {
		cout << "___________________________________________\nYou sat down on the carpet and felt something in the center...\nCut\nLeave" << endl;
		cin >> cut;
		if (cut[0] == 'C' || cut[0] == 'c') {
			isHasKey1 = true;
			isHasKnife = false;
			cout << "___________________________________________\nYou cut the carpet with difficulty ... you broke the Knife, but you got the Key from under the carpet" << endl;
			cycle1(1);
		}
		else
			cycle1(1);
	}
	if (isHasKey1) {
		cout << "___________________________________________\nYou looked at the carpet under your feet...\n.....why did you cut it in the shape of Among Us?..." << endl;
		cycle1(1);
	}
	if (!isHasKnife) {
		cout << "___________________________________________\nYou sat down on the carpet and felt something in the center...\nCut\nLeave" << endl;
		cin >> cut;
		if (cut[0] == 'C' || cut[0] == 'c') {
			cout << "___________________________________________\nYou can't do it..." << endl;
			cycle1(1);
		}
		else
			cycle1(1);
	}
}
//побег из подвала
void escape(int escp) {
	char part2[25];
	if (escp == 1) {
		cout << "When you opened the door, a stream of fresh night wind immediately flew into your face, and the dim night light filled the room.\nConvinced that everything was safe, you went outside.\nIt was a wonderful cloudless night, which made the whole courtyard perfectly visible.\nYour attention was immediately attracted a large mansion in the center of the courtyard.\nLooking closer, you find:" << endl;
		cout << "Mansion\nGate\nTreehouse\nShed" << endl;
		cin >> part2;
		yard(part2);
	}
}

//двор
void yard(char yr[25]) {
	char mn[15], gt[15], hos[15], sh[15];
	if (yr[0] == 'M' || yr[0] == 'm') {
		cout << "___________________________________________\nApproaching the main entrance of the mansion, you saw a huge majestic wooden gate with metal edging\nOpen\nLeave" << endl;
		cin >> mn;
		if (mn[0] == 'O' || mn[0] == 'o')
			mansion(1);
		if (mn[0] == 'L' || mn[0] == 'l')
			cycle2(1);
	}
	if (yr[0] == 'G' || yr[0] == 'g') {
		cout << "___________________________________________\nYou have come to a large iron gate with numerous designs...a bulky old lock hangs on it...\nIt seems that it is no longer possible to open it\nInspect\nLeave" << endl;
		cin >> gt;
		if (gt[0] == 'I' || gt[0] == 'i')
			gate(1);
		if (gt[0] == 'L' || gt[0] == 'l')
			cycle2(1);
	}
	if (yr[0] == 'T' || yr[0] == 't') {
		cout << "___________________________________________\nYou came to a tree house...old rotten boards nailed to a tree led into it...\nClimb\nLeave" << endl;
		cin >> hos;
		if (hos[0] == 'C' || hos[0] == 'c')
			house(1);
		if (hos[0] == 'L' || hos[0] == 'l')
			cycle2(1);
	}
	if (yr[0] == 'S' || yr[0] == 's') {
		cout << "___________________________________________\nYou have come to a small shed...\nThe door seems to be open\nEnter\nLeave" << endl;
		cin >> sh;
		if (sh[0] == 'E' || sh[0] == 'e')
			shed(1);
		if (sh[0] == 'L' || sh[0] == 'l')
			cycle2(1);
	}
}
//цикл двора
void cycle2(int cyc2) {
	char yar[25];
	if (isHasExplosives) {
		cout << "___________________________________________\nYou are standing in the middle of the courtyard...\nGate\nTreehouse\nShed" << endl;
		cin >> yar;
		yard(yar);
	}
	if (!isHasExplosives) {
		cout << "___________________________________________\nYou are standing in the middle of the courtyard...\nMansion\nGate\nTreehouse\nShed" << endl;
		if (isHasCrowbar)
			cout << endl << "You have: Crowbar..." << endl;
		if (isHasMaul)
			cout << endl << "You have: Maul..." << endl;
		cin >> yar;
		yard(yar);
	}
}
//особняк
void mansion(int man) {
	char mn[15], en[15], save[5];
	if (isHasCrowbar) {
		cout << "___________________________________________\nClosed on the other side...\nTry to:\nOpen\nLeave" << endl;
		cin >> mn;
		if (mn[0] == 'L' || mn[0] == 'l')
			cycle2(1);
		if (mn[0] == 'O' || mn[0] == 'o') {
			cout << "___________________________________________\nNothing succeeded..." << endl;
			cycle2(1);
		}
	}
	if (isHasMaul) {
		cout << "___________________________________________\nClosed on the other side...\nStrike with:\nSledgehammer\nLeave" << endl;
		cin >> mn;
		if (mn[0] == 'S' || mn[0] == 's') {
			cout << endl << endl << "Do you want to save your progress?" << endl << endl;
			cin >> save;
			if (save[0] == 'Y' || save[0] == 'y' || save[0] == 'S' || save[0] == 's') {
				ofstream file("save.txt");
				if (file.is_open()) {
					file << "D$S?nX7E~v|I5v5Zp2r?S1UnaD6z3|";
					file.close();
					cout << endl << endl << endl << "SAVE SUCCESSFUL" << endl << endl << endl;
				}
				cout << "___________________________________________\nYou hit the door with all your foolishness...\nThe door flew out of its hinges and fell to the floor with a crash..." << endl;
				cout << "___________________________________________\nYou entered a huge lobby... there was a large T-shaped staircase in its center... the first thing that caught your attention:\nStaircase\nLounge\nKitchen\nStorage" << endl;
				isHasCrowbar = false;
				isHasMaul = false;
				cin >> en;
				floor1(en);
			}
			else {
				cout << "___________________________________________\nYou hit the door with all your foolishness...\nThe door flew out of its hinges and fell to the floor with a crash..." << endl;
				cout << "___________________________________________\nYou entered a huge lobby... there was a large T-shaped staircase in its center... the first thing that caught your attention:\nStaircase\nLounge\nKitchen\nStorage" << endl;
				isHasCrowbar = false;
				isHasMaul = false;
				cin >> en;
				floor1(en);
			}
		}
		if (mn[0] == 'L' || mn[0] == 'l')
			cycle2(1);
	}
	if (!isHasMaul) {
		cout << "___________________________________________\nYou examined the door of the mansion... it seems to be closed on the other side..." << endl;
		cycle2(1);
	}
}
//ворота
void gate(int gt) {
	char back[15], x[15];
	if (isHasExplosives) {
		endgame(1);
	}
	if (isHasMaul) {
		cout << "___________________________________________\nYou swung your arm around and hit the castle with a sledgehammer...the castle shattered...you opened the gate\nEscape" << endl;
		cin >> x;
		if (x[0] == 'E' || x[0] == 'e')
			system("explorer https://youtu.be/dQw4w9WgXcQ");
		cout << endl << endl << "	IIIIII   WW   WW   AAAA    SSSS\n	  II     WW   WW  AA  AA  SS\n	  II     WW W WW  AAAAAA   SSSS\n	  II     WWWWWWW  AA  AA      SS\n	IIIIII    WW WW   AA  AA   SSSS" << endl << endl;
		cout << "	KK  KK  IIIIII  DDDDD   DDDDD   IIIIII  NN  NN   GGGG   ))   ))   ))\n	KK KK     II    DD  DD  DD  DD    II    NNN NN  GG       ))   ))   ))\n	KKKK      II    DD  DD  DD  DD    II    NN NNN  GG GGG    )    )    )\n	KK KK     II    DD  DD  DD  DD    II    NN  NN  GG  GG   ))   ))   ))\n	KK  KK  IIIIII  DDDDD   DDDDD   IIIIII  NN  NN   GGGG   ))   ))   ))" << endl << endl;
		cout << "___________________________________________\nYou swung around and hit the castle with a sledgehammer... the castle was not damaged, but your hands were very sore\nLeave" << endl;
		cin >> back;
		if (back[0] == 'L' || back[0] == 'l')
			cycle2(1);
	}
	if (isHasCrowbar) {
		cout << "___________________________________________\nYou tried to remove it with a tire iron...no result\nLeave" << endl;
		cin >> back;
		if (back[0] == 'L' || back[0] == 'l')
			cycle2(1);
	}
	if (!isHasMaul) {
		cout << "___________________________________________\nAfter examining the castle, you realized... that it has not been operational for a long time, but it is very durable...\nLeave" << endl;
		cin >> back;
		if (back[0] == 'L' || back[0] == 'l')
			cycle2(1);
	}
}
//домик на дереве
void house(int hos) {
	char ret[15];
	if (isHasMaul || isHasExplosives) {
		cout << "___________________________________________\nThere is nothing interesting there... I don't want to go up there" << endl;
		cycle2(1);
	}
	if (!isHasCrowbar) {
		cout << "___________________________________________\nClimbing up the stairs to a small balcony, you saw that the entrance to the house was boarded up...Try to tear off the boards?" << endl;
		cin >> ret;
		if (ret[0] == 'Y' || ret[0] == 'y') {
			cout << "___________________________________________\nCompletely sick?! How can I tear the boards off with my bare hands?." << endl;
			cycle2(1);
		}
		if (ret[0] == 'N' || ret[0] == 'n')
			cycle2(1);
	}
	if (isHasCrowbar) {
		cout << "___________________________________________\nClimbing up the stairs to a small balcony, you saw that the entrance to the house was boarded up...Try to tear off the boards?" << endl;
		cin >> ret;
		if (ret[0] == 'Y' || ret[0] == 'y') {
			cout << "___________________________________________\nAfter tearing off the boards and going inside, you saw a small box...\nYou found a sledgehammer...but since the crowbar was very rusty, it broke with a bang in the middle ..." << endl;
			isHasCrowbar = false;
			isHasMaul = true;
			cycle2(1);
		}
		if (ret[0] == 'N' || ret[0] == 'n')
			cycle2(1);
	}
}
//сарайчик
void shed(int sh) {
	char put[5];
	if (isHasCrowbar || isHasMaul || isHasExplosives) {
		cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		cycle2(1);
	}
	if (!isHasCrowbar) {
		cout << "___________________________________________\nWhen you open the door and go inside...you can't see anything..again\nTurn on the light?" << endl;
		cin >> put;
		if (put[0] == 'Y' || put[0] == 'y') {
			cout << "___________________________________________\nTurning on the light, you saw a crowbar lying on a shelf\nYou took a tire iron" << endl;
			isHasCrowbar = true;
			cycle2(1);
		}
		else
			cycle2(1);
	}
}

//первый этаж
void floor1(char floor1[25]) {
	char lad[15], livr[15], kit[15], utr[15];
	if (floor1[7] == 'S' || floor1[7] == 's') {
		if (!isHasPlanks) {
			cout << "___________________________________________\nYou have come to a T-shaped staircase...a few planks are broken in the middle of the junction\nIt looks like you can jump over\nJump\nLeave" << endl;
			cin >> lad;
			if (lad[0] == 'J' || lad[0] == 'j')
				ladder(1);
			if (lad[0] == 'L' || lad[0] == 'l')
				cycle3(1);
		}
		if (isHasPlanks) {
			cout << "___________________________________________\nYou've come to a T-shaped staircase...a few planks are broken in the middle of the junction\nBut now you can make a bridge\nMake:\nBridge\nLeave" << endl;
			cin >> lad;
			if (lad[0] == 'B' || lad[0] == 'b')
				ladder(1);
			if (lad[0] == 'L' || lad[0] == 'l')
				cycle3(1);
		}
	}
	if (floor1[0] == 'L' || floor1[0] == 'l') {
		cout << "___________________________________________\nYou have reached the door\nThe door is open\nEnter\nLeave" << endl;
		cin >> livr;
		if (livr[0] == 'E' || livr[0] == 'e')
			liver(1);
		if (livr[0] == 'L' || livr[0] == 'l')
			cycle3(1);
	}
	if (floor1[0] == 'K' || floor1[0] == 'k') {
		cout << "___________________________________________\nYou approached the kitchen\nLooks open\nEnter\nLeave" << endl;
		cin >> kit;
		if (kit[0] == 'E' || kit[0] == 'e')
			kitchen(1);
		if (kit[0] == 'L' || kit[0] == 'l')
			cycle3(1);
	}
	if (floor1[1] == 'T' || floor1[1] == 't') {
		cout << "___________________________________________\nYou have reached the back room\nThe door is closed\nOpen\nLeave" << endl;
		cin >> utr;
		if (utr[0] == 'O' || utr[0] == 'o')
			utroom(1);
		if (utr[0] == 'L' || utr[0] == 'l')
			cycle3(1);
	}
}
//цикл первого этажа
void cycle3(int cyc3) {
	char en[25];
	cout << "___________________________________________\nYou are standing in the center of the hallway...\nStaircase\nLounge\nKitchen\nStorage" << endl;
	if (isHasPlanks)
		cout << endl << "You have: Planks..." << endl;
	if (isHasKey2)
		cout << endl << "You have: Key..." << endl;
	cin >> en;
	floor1(en);
}
//лестница
void ladder(int lad) {
	char x[15], y[15], dead = 'DEAD', sav[5];
	if (isHasPlanks) {
		cout << "___________________________________________\nYou put down the plank and fixed it a little with nails\nNow you can go up to the second floor\nEnter" << endl;
		cin >> x;
		if (x[0] == 'E' || x[0] == 'e') {
			cout << endl << endl << "Do you want to save your progress?" << endl;
			cin >> sav;
			if (sav[0] == 'Y' || sav[0] == 'y' || sav[0] == 'S' || sav[0] == 's') {
				ofstream file("save.txt");
				if (file.is_open()) {
					file << "zxt*S0C|iWYltWM7sBoOFDc@JJ@vr2";
					file.close();
					cout << endl << endl << endl << "SAVE SUCCESSFUL" << endl << endl << endl;
					isHasKey2 = false;
					isHasPlanks = false;
					cout << "___________________________________________\nYou climbed to the second floor...the floor creaked under your feet, but looking around you found:\nCabinet\nBedroom\nRestroom\nAttic" << endl;
					cin >> y;
					floor2(y);
				}
				else {
					isHasKey2 = false;
					isHasPlanks = false;
					cout << "___________________________________________\nYou climbed to the second floor...the floor creaked under your feet, but looking around you found:\nCabinet\nBedroom\nRestroom\nAttic" << endl;
					cin >> y;
					floor2(y);
				}
			}
		}
	}
	if (!isHasPlanks) {
		cout << "___________________________________________\nYou ran hard...but tripped over a protruding nail and fell into a hole...\nYOU DIE\n" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		system("pause");
		dead = 's';
		if (dead != 'DEAD')
			main(0);
	}
}
//гостинная
void liver(int liv) {
	char cakeislie[5], dead = 'DEAD';
	if (isHasKey2 || isHasPlanks) {
		cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		cycle3(1);
	}
	if (!isHasKey2) {
		cout << "___________________________________________\nEntering the living room you saw a large oval table with a bunch of chairs\nComing closer you found a large birthday cake\nLooks delicious. Try a cake?" << endl;
		cin >> cakeislie;
		if (cakeislie[0] == 'Y' || cakeislie[0] == 'y') {
			cout << "___________________________________________\nYou've tasted the cake...and it's damn delicious!..although with some strange aftertaste\nYour stomach hurts sharply...\nYou feel unbearable pain...\nYOU DIE" << endl;
			cout << endl << "		 CCCC    AAAA   KK  KK  EEEEE\n		CC  CC  AA  AA  KK KK   EE\n		CC      AAAAAA  KKKK    EEEE\n		CC  CC  AA  AA  KK KK   EE\n		 CCCC   AA  AA  KK  KK  EEEEE" << endl << endl;
			cout << "		IIIIII   SSSS      AAAA\n		  II    SS        AA  AA\n		  II     SSSS     AAAAAA\n		  II        SS    AA  AA\n		IIIIII   SSSS     AA  AA" << endl << endl;
			cout << "		LL      IIIIII  EEEEE\n		LL        II    EE\n		LL        II    EEEE\n		LL        II    EE\n		LLLLLL  IIIIII  EEEEE" << endl << endl;
			cout << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl;
			system("pause");
			dead = 's';
			if (dead != 'DEAD')
				main(0);
		}
		else {
			cout << "___________________________________________\nYou decided not to eat this rubbish, because CAKE IS A LIE...\nSo you took it and threw the cake on the floor\nThere was a key under the cake" << endl;
			isHasKey2 = true;
			cycle3(1);
		}
	}
}
//кухня
void kitchen(int kit) {
	char dead = 'DEAD';
	cout << "___________________________________________\nEntering the kitchen, you saw... the kitchen is AMAZING...\nThere is a lot of food on the table...the air smells of freshly cooked food...\nYou really wanted to eat\nGoing to the table, you were unable to stop\nSitting at the table and when you start eating you immediately feel how delicious this food is" << endl;
	cout << "_____________________________________\nYou have been sitting and eating for about 10 minutes, when suddenly you felt a blow to your back, and then unbearable pain...\nAfter that, someone grabbed you and threw you to the floor...\nBefore you died, you only managed to see an ax flying at you\nYOU DIE" << endl;
	cout << endl << endl << "          DDDDD    OOOO       NN  NN   OOOO   TTTTTT\n          DD  DD  OO  OO      NNN NN  OO  OO    TT\n          DD  DD  OO  OO      NN NNN  OO  OO    TT\n          DD  DD  OO  OO      NN  NN  OO  OO    TT\n          DDDDD    OOOO       NN  NN   OOOO     TT" << endl << endl;
	cout << "                  EEEEE   AAAA   TTTTTT\n                  EE     AA  AA    TT\n                  EEEE   AAAAAA    TT\n                  EE     AA  AA    TT\n                  EEEEE  AA  AA    TT" << endl << endl;
	cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
	system("pause");
	dead = 's';
	if (dead != 'DEAD')
		main(0);
}
//подсобка
void utroom(int utr) {
	if (isHasPlanks) {
		cout << "___________________________________________\nThere is nothing interesting here anymore" << endl;
		system("explorer https://youtu.be/t6isux5XWH0");
		cycle3(1);
	}
	if (isHasKey2) {
		cout << "___________________________________________\nOpening the door and going in, you found: a few boards, a hammer and a couple of nails" << endl;
		isHasPlanks = true;
		isHasKey2 = false;
		cycle3(1);
	}
	if (!isHasKey2) {
		cout << "___________________________________________\nHow were you going to open that door without a key?" << endl;
		cycle3(1);
	}
}

//второй этаж
void floor2(char floor2[25]) {
	char cab[15], bed[15], rest[15], att[15];
	if (floor2[0] == 'C' || floor2[0] == 'c') {
		cout << "___________________________________________\nYou went to the door and tried to open...closed...\nOpen\nLeave" << endl;
		cin >> cab;
		if (cab[0] == 'O' || cab[0] == 'o')
			cabinet(1);
		if (cab[0] == 'L' || cab[0] == 'l')
			cycle4(1);
	}
	if (floor2[0] == 'B' || floor2[0] == 'b') {
		cout << "___________________________________________\nYou have reached the door\nOpen\nLeave" << endl;
		cin >> bed;
		if (bed[0] == 'O' || bed[0] == 'o')
			bedroom(1);
		if (bed[0] == 'L' || bed[0] == 'l')
			cycle4(1);
	}
	if (floor2[0] == 'R' || floor2[0] == 'r') {
		cout << "___________________________________________\nYou have reached the door\nOpen\nLeave" << endl;
		cin >> rest;
		if (rest[0] == 'O' || rest[0] == 'o')
			restroom(1);
		if (rest[0] == 'L' || rest[0] == 'l')
			cycle4(1);
	}
	if (floor2[0] == 'A' || floor2[0] == 'a') {
		cout << "___________________________________________\nYou have reached the attic hatch...strange sounds are coming from there...\nPeek\nLeave" << endl;
		cin >> att;
		if (att[0] == 'P' || att[0] == 'p')
			attic(1);
		if (att[0] == 'L' || att[0] == 'l')
			cycle4(1);
	}
}
//цикл фторого этажа
void cycle4(int cyc4) {
	char flr2[25];
	cout << "___________________________________________\nYou are standing next to the stairs\nCabinet\nBedroom\nRestroom\nAttic" << endl;
	if (isHasFirecracker)
		cout << endl << "You have: Firecracker..." << endl;
	if (isHasKey3)
		cout << endl << "You have: Key..." << endl;
	if (isHasBooks)
		cout << endl << "You have: Books..." << endl;
	if(bedroomOpen)
		cout<<endl<<"Somewhere a door is open..."<<endl;
	cin >> flr2;
	floor2(flr2);
}
//кабинет
void cabinet(int cab) {
	char cont[15], dead = 'DEAD';
	if (isHasFirecracker) {
		cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		cycle4(1);
	}
	if (isHasBooks) {
		cout << "___________________________________________\nYou entered the office... there are still a couple of books missing from the shelves... but now you have them\nHow to put them?\nBlue - right; Red - left\nBlue - left; Red - right\nOption:\nFirst\nSecond" << endl;
		cin >> cont;
		if (cont[0] == 'F' || cont[0] == 'f') {
			cout << "___________________________________________\nThe books moved into place... when suddenly a small box crawled out of the wall... there was a firecracker and a lighter in it" << endl;
			isHasBooks = false;
			isHasFirecracker = true;
			cycle4(1);
		}
		if (cont[0] == 'S' || cont[0] == 's') {
			cout << "___________________________________________\nThe books moved...but immediately flew out and fell to the floor...the door to the study slammed shut...\nApparently you should have watched the Matrix more carefully\nYOU DIE" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			dead = 's';
			if (dead != 'DEAD')
				main(0);
		}
	}
	if (bedroomOpen) {
		cout << "___________________________________________\nThere is nothing you can do here..." << endl;
		cycle4(1);
	}
	if (isHasKey3) {
			cout << "___________________________________________\nYou opened the door and entered a spacious room...it was a dark gothic office with a bunch of bookshelves\nIt seems that one of the shelves is missing a couple of books...\nWhen leaving, you pressed some kind of lever on the wall...it seems that somewhere- then the door opened...\nLeave" << endl;
			cin >> cont;
			if (cont[0] == 'L' || cont[0] == 'l') {
				isHasKey3 = false;
				bedroomOpen = true;
				cycle4(1);
			}
	}
	if (!isHasKey3) {
		cout << "___________________________________________\nYou can't...\n-So, teller, wait. What can't you see? Yes, on the other side of the monitor is mentally retarded!\nGod...how stupid do you have to be to open the door without a key to it...I don't want to play like that...I don't want to!..\nYOU DIE" << endl;
		cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
		system("pause");
		dead = 's';
		if (dead != 'DEAD')
			main(0);
	}
}
//спальня
void bedroom(int bed) {
	char sel[15], dead = 'DEAD';
	if (isHasFirecracker || isHasBooks) {
		cout << "___________________________________________\nThere is nothing interesting..." << endl;
		cycle4(1);
	}
	if (bedroomOpen) {
		cout << "___________________________________________\nYou entered a spacious bedroom... after examining the bedroom, you found:\nBooks\nCloset\nLeave" << endl;
		cin >> sel;
		if (sel[0] == 'B' || sel[0] == 'b') {
			cout << "___________________________________________\nYou took the books and hurried out of the bedroom" << endl;
			isHasBooks = true;
			bedroomOpen = false;
			cycle4(1);
		}
		if (sel[0] == 'C' || sel[0] == 'c') {
			cout << "___________________________________________\nYou were looking at an old wardrobe...when you suddenly heard someone's footsteps in the corridor...\nYou opened it and climbed into the wardrobe...as soon as you entered, the doors closed...you tried to open them, but failed\nIn some then a long wide spike began to drive out from below...\nYOU DIE" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			dead = 's';
			if (dead != 'DEAD')
				main(0);
		}
		if (sel[0] == 'L' || sel[0] == 'l')
			cycle4(1);
	}
	if (!bedroomOpen) {
		cout << "___________________________________________\nThe door is closed..." << endl;
		cycle4(1);
	}
}
//комната отдыха
void restroom(int res) {
	char back[15];
	if (isHasFirecracker) {
		cout << "___________________________________________\nAMOGUS?!?!\nExplore" << endl;
		cin >> back;
		if (back[0] == 'E' || back[0] == 'e') {
			isHasAmongus = true;
			system("explorer https://youtu.be/T59N3DPrvac");
			cycle4(1);
		}
	}
	if (isHasKey3 || bedroomOpen || isHasBooks) {
		cout << "___________________________________________\nThere is nothing more interesting here..." << endl;
		cycle4(1);
	}
	if (!isHasKey3) {
		cout << "___________________________________________\nYou entered the rest room...it was a spacious room with several sofas and some sports equipment\nAmidst all this rubbish, you noticed a key lying on the sofa\nTake:\nKey\nLeave" << endl;
		cin >> back;
		if (back[0] == 'K' || back[0] == 'k') {
			cout << "___________________________________________\nYou have taken the key..." << endl;
			isHasKey3 = true;
			cycle4(1);
		}
		if (back[0] == 'L' || back[0] == 'l')
			cycle4(1);
	}
}
//чердак
void attic(int att) {
	char sel[15], dead = 'DEAD', y = '0';
	if (isHasFirecracker) {
		cout << "___________________________________________\nYou carefully opened the hatch...\nThrow firecracker?" << endl;
		cin >> sel;
		if (sel[0] == 'Y' || sel[0] == 'y') {
			cout << "___________________________________________\nYou set it on fire and threw a firecracker into the attic, closed the hatch...\nThere was an explosion, and then the infernal spawn burst out screaming...when everything was quiet, you climbed into the attic\nIn the center of the attic lay a large box...it contained some explosives" << endl;
			system("pause");
			cout << endl << endl;
			y = '1';
			if (y != '0') {
				isHasFirecracker = false;
				isHasExplosives = true;
				cout << "___________________________________________\nYou hurried down to the first floor and out into the street..." << endl;
				cycle2(1);
			}
		}
		if (2)
			cycle4(1);
	}
	if (!isHasFirecracker) {
		cout << "___________________________________________\nYou carefully peeked into the attic...it's full of bats...\nClimb\nLeave" << endl;
		cin >> sel;
		if (sel[0] == 'C' || sel[0] == 'c') {
			cout << "___________________________________________\nYou climbed into the attic and closed the hatch behind you...bats immediately attacked you...\nThey inflicted heavy injuries on you with each attack...\nYOU DIE" << endl;
			cout << endl << endl << endl << " GGGG    AAAA   MM   MM  EEEEE    OOOO   VV  VV  EEEEE  RRRRR\nGG      AA  AA  MMM MMM  EE      OO  OO  VV  VV  EE     RR  RR\nGG GGG  AAAAAA  MM M MM  EEEE    OO  OO  VV  VV  EEEE   RRRRR\nGG  GG  AA  AA  MM   MM  EE      OO  OO   VVVV   EE     RR  RR\n GGGG   AA  AA  MM   MM  EEEEE    OOOO     VV    EEEEE  RR  RR" << endl << endl << endl;
			system("pause");
			dead = 's';
			if (dead != 'DEAD')
				main(0);
		}
		if (sel[0] == 'L' || sel[0] == 'l')
			cycle4(1);
	}
}

//конец игры
void endgame(int end) {
	char files[5], devel[5];
	if (isHasAmongus)
		cout << endl << endl << "You found AMOGUS! good ending" << endl << endl;
	cout << "___________________________________________\nYou approached the gate and tied explosives to the lock, set fire to the fuse and fled to the shelter...\nAfter 10 seconds, an explosion sounded\n___________________________________________\nYou crawled out of your hiding place and saw the pieces of the once great gate lying on the ground\nApparently your terrible adventure is over ...\nYou quietly and peacefully went into the sunset (but now it's dawn...)\nP.s.\nYou didn't find AMONGUS((( bad ending..." << endl;
	cout << endl << endl << endl << "Do you want to delete save files?" << endl;
	cin >> files;
	if (files[0] == 'Y' || files[0] == 'y') {
		if (remove("save.txt") != 0)
			cout << endl << endl << endl << "ERROR DELETE SAVE FILE" << endl << endl << endl << endl;
		else
			cout << endl << endl << endl << "SAVE FILES SUCCESSFULLY DELETED" << endl << endl << endl << endl;
	}
	if (files[0] == 'N' || files[0] == 'n') {
		cout << endl << endl << endl << "SELECT SAVE MODE UNLOCKED" << endl << endl << endl << endl;
		ofstream file("save.txt");
		if (file.is_open()) {
			file << "ecQmXo|*2}}UD}iRFEE1O85ZQDEh9j";
			file.close();
		}
	}
	cout << endl << endl << endl << "Hello! Did you finish my test game? Congratulations!\nThanks for giving her time. I just thought it would be worth mentioning yourself in the game somehow...\nwell, you want to know who wrote this? ";
	cin >> devel;
	if (devel[0] == 'Y' || devel[0] == 'y') {
		cout << endl << "My Discord: Bubba#4211\nMy VK: @1blitz01\nMy Telegram: @an1onimes" << endl << endl;
		system("pause");
	}
	else {
		cout << endl << endl << "	 OOOO	KK  KK\n	OO  OO  KK KK \n	OO  OO  KKKK  \n	OO  OO  KK KK \n	 OOOO   KK  KK" << endl << endl;
		system("pause");
	}
	cout << endl << endl << "TTTTTT  HH  HH   AAAA   NN  NN  KK  KK   SSSS  \n  TT    HH  HH  AA  AA  NNN NN  KK KK   SS     \n  TT    HHHHHH  AAAAAA  NN NNN  KKKK     SSSS  \n  TT    HH  HH  AA  AA  NN  NN  KK KK       SS \n  TT    HH  HH  AA  AA  NN  NN  KK  KK   SSSS  " << endl << endl;
	cout << "FFFFFF   OOOO   RRRRR     PPPPP   LL       AAAA   YY  YY  IIIIII  NN  NN   GGGG   !!!\nFF      OO  OO  RR  RR    PP  PP  LL      AA  AA   YYYY     II    NNN NN  GG      !!!\nFFFF    OO  OO  RRRRR     PPPPP   LL      AAAAAA    YY      II    NN NNN  GG GGG  !!!\nFF      OO  OO  RR  RR    PP      LL      AA  AA    YY      II    NN  NN  GG  GG\nFF       OOOO   RR  RR    PP      LLLLLL  AA  AA    YY    IIIIII  NN  NN   GGGG   !!!" << endl;
	system("pause");
	isHasKnife = false;
	isHasKey1 = false;
	isHasCrowbar = false;
	isHasMaul = false;
	isHasExplosives = false;
	isHasKey2 = false;
	isHasPlanks = false;
	isHasKey3 = false;
	bedroomOpen = false;
	isHasBooks = false;
	isHasFirecracker = false;
	isHasAmongus = false;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	main(1);
}
void levels(int lev) {
	char select[15];
	cout << endl << endl << endl << endl << "What location do you want to go to?\nBasement\nYard\nMansion floors:\nFirst\nSecond" << endl;
	cin >> select;
	if (select[0] == 'B' || select[0] == 'b') {
		cycle1(1);
	}
	if (select[1] == 'L' || select[1] == 'l') {
		cycle2(1);
	}
	if (select[0] == 'F' || select[0] == 'f') {
		cycle3(1);
	}
	if (select[0] == 'S' || select[0] == 's') {
		cycle4(1);
	}
}