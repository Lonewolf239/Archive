#include <iostream>
using namespace std;
int main() {
	float x, y;
	char chc;
	cout << "Hello! Welcome to my mini calculator. Enter the number: ";
	cin >> x;
	cout << "Okay, now enter the second number: ";
	cin >> y;
	cout << "So, what kind of mathematical calculus do you want to do with them?" << endl;
	cin >> chc;
	if (chc == '*')
		cout << x << chc << y << " = " << x * y << endl;
	if (chc == '+')
		cout << x << chc << y << " = " << x + y << endl;
	if (chc == '-')
		cout << x << chc << y << " = " << x - y << endl;
	if (chc == '/')
		cout << x << chc << y << " = " << x / y << endl;
	cout << "Have a nice day<3" << endl;
	return 0;
}