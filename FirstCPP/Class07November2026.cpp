#include <iostream>
#include <cmath>

using namespace std;

void main() {
	//101
	cout << "---- 101 ----" << endl;

	int n = 2;
	double S = 0, x = 1, y = 2;
	for (int i = 0; i < n; i++) {
		S += pow(x + y, 2);
		x = 2 * abs(x + 3);
		y = y * y - 4;
	}

	cout << "Sum = " << S << endl;

	//107
	cout << "---- 101 ----" << endl;

	int n = 2;
	double P = 1, x = 1, y = 1;
	for (int i = 0; i < n; i++) {
		P *= cos(x + y);
		x = x / 2;
		y = y / 3;
	}

	cout << "Product = " << P << endl;

	//121
	cout << "---- 121 ----" << endl;

	S = 0;

	for (int i = 0; i < 16; i++) {
		if (i % 2 == 0) {
			x = i;
		}
		else {
			x = pow(x, 3);
		}
		if ((i * i) % 2 == 0) {
			y = i * i;
		}
		else {
			y = i;
		}
		S += pow(x - y, 2);
	}

	cout << "Sum = " << S << endl;

	//141
	cout << "---- 141 ----" << endl;

	double a = 2, w = 1, s = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			s += pow(a, i + j);
		}
		w *= s;
	}

	cout << "Product of Sum: " << w << endl;

}