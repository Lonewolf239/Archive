#include <stdio.h>
int main() {
	printf("Hello, Friend<3\n");
	short x = 25, y = 5, res;
	x *= 26;
	y -= 3;
	y *= 50;
	res = x + (2 * y);
	{if (x < 150) 
		printf("x<150\n");
	else if (x < 250)
		printf("x<250\n");
	else
		printf("x>250\n");}
	{if (y < 100)
		printf("y<100\n");
	else if (y < 200)
		printf("y<200\n");
	else
		printf("y>200\n");}
	{if (res < 200)
		printf("Result<200\n");
	else if(res<400)
		printf("Result<400\n");
	else
		printf("Result>400\n");}
	switch (y) {
	case 20:
		printf("y=20");
		break;
	case 40:
		printf("y=40");
		break;
	case 60:
		printf("y=60");
		break;
	case 80:
		printf("y=80");
		break;
	case 100:
		printf("y=100");
		break;
	default:
		printf("Can't find y");
		break;}
}