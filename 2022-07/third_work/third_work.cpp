#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char name[90];
	float x, y, res, tes, es, s;
	printf("Hello friend, what's your name?\n");
	scanf("%s", &name);
	printf("Hello %s, let's start?\n",name);
	printf("Enter a number for x:");
	scanf("%f", &x);
	printf("Enter a number for y:");
	scanf("%f", &y);
	res = x + y;
	tes = x - y;
	es = x * y;
	s = x / y;
	printf("%.0f + %.0f = %.0f\n", x, y, res);
	printf("%.0f - %.0f = %.0f\n", x, y, tes);
	printf("%.0f * %.0f = %.0f\n", x, y, es);
	printf("%.0f / %.0f = %.2f\n", x, y, s);
	printf("Good Job!\n");
	if (res >= 500 && tes <= 5 && es >= 500 && s <= 2)
		printf("YOU FOUND THE EASTER EGG!");
	return 0;
}