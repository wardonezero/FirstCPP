#include <iostream>
#include <cmath>

using namespace std;

void main() {
	//87
	cout << "---- 87 ----" << endl;

	for (double i = 10; i <= 23; i += 3.2) {
		if (i > 7) {
			cout << exp(sin(i)) << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}

	//85
	cout << "---- 85 ----" << endl;

	for (double i = -3.3; i <= 2.7; i += 0.3) {
		cout << abs(2 * i + pow(i, 3)) << endl;
	}

	//91
	cout << "---- 91 ----" << endl;

	int n = 3;
	double x = 1, S = 0;

	for (int i = 0; i < n; i++) {
		S += x * x;
		x = 0.5 * abs(x - 4);
		//cout << "x = " << x << ",	S = " << S << endl;
	}

	cout << "Sum =" << S << endl;

	//92
	cout << "---- 92 ----" << endl;

	double  P = 1;
	x = 0.5;

	for (int i = 0; i < n; i++) {
		P *= x;
		x = tan(x + 2);
	}

	cout << "P = " << P << endl;

	//98
	cout << "---- 98 ----" << endl;

	S = 0;
	x = 1;

	for (int i = n; i < 2 * n; i++) {
		S += x;
		x = 3.4 * abs(x - 7);
	}

	cout << "Sum =" << S << endl;
}