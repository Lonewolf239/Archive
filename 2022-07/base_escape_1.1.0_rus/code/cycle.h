#include <iostream>
using namespace std;
void location1(int loc, int c1);
void location2(int isHasKnife, int c2);
void location3(int isHasKey, int c2);
void cycle1 (int cycle1) {
	if (cycle1 == 1)
		location1(1,0);
}
void cycle2(int cycle2) {
	if (cycle2 == 1)
		location2(1, 0);
}
void cycle3(int cycle3) {
	if (cycle3 == 1)
		location3(1, 0);
}