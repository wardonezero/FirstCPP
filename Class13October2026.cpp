#include <iostream>
#include <cmath>

using namespace std;

int main() {
	for (int i = 1; i <= 5; i++) {
		cout << i << endl;
	}

	int a = 5, b = 10;

	for (int i = b - 1; i >= a; i--) {
		cout << i << endl;
	}

	for (int i = b - 1; i > a; i--) {
		cout << i << endl;
	}

	//for 4 
	int price = 4;
	for (int i = 0; i < 10; i++) {
		cout << "$" << i * price << endl;
	}

	//for 5
	for (double i = 0.1; i <= 1; i += 0.1) {
		cout << i << endl;
	}

	//for 7 
	int s = 0;
	for (int i = a; i <= b; i++) {
		s += i;
	}
	cout << "S = " << s << endl;

	//71
	for (double i = 2.4; i <= 7.6; i += 0.2) {
		cout << "y = " << tan(2 * i + i * i) << endl;
	}

	//56
	int x = 256;
	double	x1 = x / 100,
		x2 = x % 100 / 10,
		x3 = x % 10;

	if (x3 > x2) {
		cout << (x1 + x2 + x3) / x << endl;
	}
	else
	{
		cout << x << endl;
	}
}