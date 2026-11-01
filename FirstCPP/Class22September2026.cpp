#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a = 2, b = 6, c = -1;

	//1
	if (a == 1 || b == 1 || c == 1)
		cout << boolalpha << true;
	else
		cout << boolalpha << false << endl;

	//2
	if (a == 2 && b == 2 && c != 2 or
		a == 2 && b != 2 && c == 2 or
		a != 2 && b == 2 && c == 2)
		cout << boolalpha << true;
	else
		cout << boolalpha << false << endl;

	//3
	int x = 0, y = 0;

	if (a > 0)
		x++;
	else if (a < 0)
		y++;

	if (b > 0)
		x++;
	else if (a < 0)
		y++;

	if (c > 0)
		x++;
	else if (c < 0)
		y++;

	cout << "positives: " << x << " negatives: " << y << endl;
}