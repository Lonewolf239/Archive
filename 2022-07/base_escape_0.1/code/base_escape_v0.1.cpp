#include "start.h"
#include "Locations.h"
#include "window.h"
#include "cycle.h"
#include "close.h"
#include "door.h"
#include "escape.h"
#include "carpter.h"
using namespace  std;
void start(int start);
int main() {
	int st = 0;
	cout << "Welcome in my first test game\nBase_escape_1.0\nEnter number (1) to start:" << endl;
	cin >> st;
	if (st == 1)
		start(1);
	return 0;
}