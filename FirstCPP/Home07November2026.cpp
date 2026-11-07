#include <iostream>
#include <cmath>

using namespace std;

void main() {
	//86
	cout << "---- 86 ----" << endl;

	for (int i = -5; i <= 8; i += 2) {
		if (i > 2) {
			cout << pow(3, i + 4) << endl;
		}
		else {
			cout << 8 << endl;
		}
	}

	//87
	cout << "---- 87 ----" << endl;

	for (double i = 10; i <= 23; i += 3.2) {
		if (i > 7) {
			cout << exp(sin(i)) << endl;
		}
		else {
			cout << 0 << endl;
		}
	}

	//88
	cout << "---- 88 ----" << endl;

	for (int i = -3; i <= 3; i += 0.8) {
		if (i > 1) {
			cout << 6 * exp(8 + i) << endl;
		}
		else {
			cout << i + 4 << endl;
		}
	}

	//89
	cout << "---- 89 ----" << endl;

	for (int i = -5; i <= 9; i += 1.5) {
		if (i > 3) {
			cout << log(i) / log(4) << endl;
		}
		else {
			cout << -9 << endl;
		}
	}

	//90
	cout << "---- 90 ----" << endl;

	for (int i = -30; i <= 30; i += 3.5) {
		if (i > 5) {
			cout << sin(i) << endl;
		}
		else {
			cout << cos(i) << endl;
		}
	}

	//93
	int n = 2;
	double P = 1, x = 0.5;

	for (int i = 0; i < n; i++) {
		P *= x * x + x;
		x = tan(x + 2);
	}

	cout << "Product = " << P << endl;

	//94
	cout << "---- 94 ----" << endl;
	double S = 0;
	x = -4.2;

	for (int i = 0; i < n; i++) {
		S += x * x - x;
		x = sin(x) * sin(x);
	}

	cout << "Sum = " << S << endl;

	//95
	cout << "---- 95 ----" << endl;
	S = 0;
	x = 1;

	for (int i = 0; i < n; i++) {
		S += x * x - 2 * x;
		x = atan(x);
	}

	cout << "Sum = " << S << endl;

	//96
	cout << "---- 96 ----" << endl;
	S = 0;
	x = 22;

	for (int i = 0; i < n; i++) {
		S += x * x;
		x -= 3.4;
	}

	cout << "Sum = " << S << endl;

	//97
	cout << "---- 97 ----" << endl;
	P = 1;
	x = 1;

	for (int i = 0; i < 3 * n; i++) {
		P *= x;
		x = 0.5 * x + 7;
	}

	cout << "Product = " << P << endl;

	//98
	cout << "---- 98 ----" << endl;
	S = 0;
	x = 1;

	for (int i = n; i < 2 * n; i++) {
		S += x;
		x = 3.4 * abs(x - 7);
	}

	cout << "Sum = " << S << endl;

	//99
	cout << "---- 99 ----" << endl;
	S = 0;
	x = 5;

	for (int i = n; i < n; i++) {
		S += x * x;
		x = x * x + 7;
	}

	cout << "Sum = " << S << endl;

	//100
	cout << "---- 100 ----" << endl;
	P = 1;
	x = 1;

	for (int i = 0; i < n; i++) {
		P *= x;
		x = atan(x+1);
	}

	cout << "Product = " << P << endl;
}