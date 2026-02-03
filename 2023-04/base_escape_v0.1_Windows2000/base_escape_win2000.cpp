#include "stdafx.h"
#include "conio.h"
#include <cstdlib>

void start();
void location(int loc);
void cycle();
void window();
void closet(int cl);
void door();
void carpet();

bool isHasKnife = false, isHasKey = false;


//программа стартует здесь
int main() {
	system("cls");
	int x = 1;
	printf("Welcome to Base_Escape_1999E\nStart 1\nExit 2\n");
	scanf("%d",&x);
	if (x == 1)
		start();
	else
		exit(0);
	return 0;
}

//старт игры
void start() {
	system("cls");
	int loc;
	printf("---------------------------------\nTo control, use numbers 1-4\nPress any key to continue...\n");
	getch();
	system("cls");
	printf("---------------------------------\nYou woke up in an unknown place. It look like a basement...\nPress any key to continue...\n");
	getch();
	system("cls");
	printf("---------------------------------\nLoocking around, you realized that you did not see anything :(\nPress any key to continue...\n");
	getch();
	system("cls");
	printf("---------------------------------\nLoocking around AT FEEL, you realized that this is a small room...\nYou found:\nWindow 1\nCloset 2\nDoor 3\nCarpet 4\n");
	scanf("%d",&loc);
	location(loc);
}

//выбор пути
void location(int loc) {
	system("cls");
	int choice_window, choice_closet, choice_door, choice_carpet;
	switch(loc) {
	case 1:	
		printf("---------------------------------\nYou went to the window and tried to open it...it's closed\nLook out window 1\nLeave 2\n");
		scanf("%d", &choice_window);
		if(choice_window == 1)
			window();
		else
			cycle();
		break;
	case 2:
		printf("---------------------------------\nYou went to the closet..it's divided into two compartments, lover and upper\nOpen top 1\nOpen bottom 2\nLeave 3\n");
		scanf("%d", &choice_closet);
		if(choice_closet == 1)
			closet(1);
		else if (choice_closet == 2)
			closet(2);
		else
			cycle();
		break;
	case 3:
		printf("---------------------------------\nYou went to thr door...it's closed\nOpen the lock 1\nLeave 2\n");
		scanf("%d", &choice_door);
		if(choice_door == 1)
			door();
		else
			cycle();
		break;
	case 4:
		if(isHasKey) {
			printf("---------------------------------\nYou looked at the cut carpet...nothing intresting...\nPress any key to continue...\n");
			getch();
			cycle();
		}
		else {
			printf("---------------------------------\nYou looked at the carpet under ypur feet...\nIt seems that there is something under it...\nBut it's edges are hammered into the walls...\nInspect 1\nLeave 2\n");
			scanf("%d", &choice_carpet);
			if(choice_carpet == 1)
				carpet();
			else
				cycle();
		}
		break;
	default:
		cycle();
	}
}


//цикл
void cycle() {
	system("cls");
	int cycle_choice;
	if(isHasKnife)
		printf("You have Knife...\n");
	if(isHasKey)
		printf("You have Key...\n");
	printf("---------------------------------\nYou're standing in the middle of the basement...\nWindow 1\nCloset 2\nDoor 3\nCarpet 4\n");
	scanf("%d", &cycle_choice);
	location(cycle_choice);
}


//окно
void window() {
	system("cls");
	printf("---------------------------------\nYou looked out the window...there is night\nYou turned around and walked to the center of the room...\nPress any key to continue...\n");
	getch();
	cycle();
}


//шкаф
void closet(int cl) {
	system("cls");
	int closet_choice1, closet_choice2;
	switch(cl) {
	case 1:
		printf("---------------------------------\nYou opened the top drawer...it's empty.\nOpen bottom drawer 1\nLeave 2\n");
		scanf("%d", &closet_choice1);
		if(closet_choice1==1)
			closet(2);
		else
			cycle();
		break;
	case 2:
		if(isHasKnife || isHasKey){
			printf("---------------------------------\nYou opened the bottom drawer...it's empty.\nPress any key to continue...\n");
			getch();
			cycle();
		}
		if(!isHasKnife) {
					printf("---------------------------------\nYou opened the bottom drawer...there is a knife\nTake knife 1\nLeave 2\n");
					scanf("%d", &closet_choice2);
					if(closet_choice2==1){
						printf("---------------------------------\nYou take Knife\nPress any key to continue...\n");
						isHasKnife = true;
						getch();
					}
						cycle();
		}
		break;
	}
}


//дверь
void door() {
	int x;
	system("cls");
	if(isHasKey) {
		printf("---------------------------------\nYou put the key in the lock and turned...\nThe lock opened and whit a clag of metal, fell to the floor...");
		getch();
		system("cls");
		printf("---------------------------------\nThank for playing!\nI hope you enjoyed my first attemp at making games.\nRetry 1\nExit 2\n");
		scanf("%d", &x);
		if(x == 1) {
			isHasKey = false, isHasKnife = false;
			main();
		}
		else {
			system("cls");
			printf("---------------------------------\nBye friend <3\n");
			getch();
			exit(0);
		}
	}
	else {
		printf("---------------------------------\nI can't open this door...\nPress any key to continue...\n");
		getch();
		cycle();
	}
}


//кофёр
void carpet() {
	int carpet_choice;
	system("cls");
	printf("---------------------------------\nYou sat down on the carpet and felt some object in the center...\nCut the carpet 1\nLeave 2\n");
	scanf("%d", &carpet_choice);
	if(isHasKnife) {
		if(carpet_choice == 1) {
			printf("---------------------------------\nYou cut the carpet...there was a recess under it...\nYou take the key...\nPress any key to continue...\n");
			isHasKey = true, isHasKnife = false;
			getch();
		}
		cycle();
	}
	else {
		printf("---------------------------------\nYou can't do it\nPress any key to continue...\n");
		getch();
		cycle();
	}
}