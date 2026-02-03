#include <iostream>
using namespace std;
void yard1(int yrd1, int yr1);
void escape(int esc) {
	int part2;
	if (esc == 1) {
		cout << "When you opened the door, a stream of fresh night wind immediately flew into your face, and the dim night light filled the room.\nConvinced that everything was safe, you went outside.\nIt was a wonderful cloudless night, which made the whole courtyard perfectly visible.\nYour attention was immediately attracted a large mansion in the center of the courtyard.\nLooking closer, you find:" << endl;
		cout << "Mansion 1\nGate 2\nTreehouse 3\nSmall Shed 4" << endl;
		cin >> part2;
		yard1(0,part2);
	}
}