#include <iostream>
#include <cmath>

using namespace std;

void main() {
	// 11
	int a = 2,
		b = 6,
		x = 6;

	double y = -3;

	int asbs = a * a + b * b;

	if (asbs > 5) {
		y = 3 * exp(a - x) + log(asbs + 5) / log(3.0);
	}
	else if (asbs < 1) {
		y = pow(tan(a + b), 4);
	}

	cout << "Y = " << y << endl;

	// 12
	if (-5 <= x and x >= 5) {
		y = pow((1 + a * a), 6);
	}
	else if (x > 5) {
		y = cos(pow(log(abs(x)), 2)) + pow(x, 8);
	}
	else {
		y = a;
	}

	cout << "Y = " << y << endl;

	// 17
	int z = 11;
	if (abs(a) > 3) {
		y = pow(log2(4 + a * a), 5) + tan(z + a);
	}
	else
	{
		y = pow(pow(z, 4) + 4 * a, 5);
	}

	cout << "Y = " << y << endl;

	// 18
	if (1 <= x and x >= 7) {
		y = pow(abs(x) + 2 * abs(z), 1.0 / 4.0) + exp(abs(x + 1));
	}
	else {
		y = pow(tan(pow(x + z, 7)), 2);
	}

	cout << "Y = " << y << endl;

	// 23
	int c = 1;
	if (a == 1 or b == 1 or c == 1) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	//24
	int exactlyTwoTows = (a == 2) + (b == 2) + (c == 2);
	if (exactlyTwoTows == 2) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	//26
	if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
		cout << 1 << endl;
	}
	else {
		cout << 2 << endl;
	}

	//52
	int threedigit = 202;

	int hundreds = threedigit / 100;
	int tens = threedigit / 10 % 10;
	int units = threedigit % 10;

	cout << "three-digit: " << threedigit << "\nhundreds: " << hundreds << " tens: " << tens << " units: " << units << endl;

	bool t = hundreds == tens || hundreds == units || tens == units;
	cout << "t: " << boolalpha << t << endl;

	//54
	int maxValue = max(a, b, c);
	cout << "Max Value: " << maxValue << endl;

	//55
	int minValue = min(a, b, c);
	cout << "min Value: " << minValue << endl;

	//56
	if (units > tens) {
		cout << (hundreds + tens + units) / threedigit << endl;
	}
	else
	{
		cout << threedigit << endl;
	}

	//77
	for (int i = -8; i <= 8; i += 3) {
		if (i > 3) {
			cout << i * i + 4 * pow(i, 8) << endl;
		}
		else {
			cout << i << endl;
		}
	}

	//78
	for (int i = 10; i <= 20; i += 2) {
		if (i > 12) {
			cout << 3 * log(i) / log(3) << endl;
		}
		else {
			cout << i * i * i << endl;
		}
	}

	//79
	for (int i = -4; i <= 5; i++) {
		if (i > 1) {
			cout << log(i) / log(4) << endl;
		}
		else {
			cout << -9 << endl;
		}
	}

	//83
	for (double i = -4.8; i <= 5.2; i += 0.2) {
		cout << atan(i + 1) * atan(i + 1) << endl;
	}

	//84
	for (double i = -6.4; i <= 2.4; i += 0.2) {
		cout << exp(1 / tan(i)) << endl;
	}

	//85
	for (double i = -3.3; i <= 2.7; i += 0.3) {
		cout << abs(2 * i + pow(i, 3)) << endl;
	}

	//89
	for (double i = -5; i <= 9; i += 1.5) {
		if (i > 3) {
			cout << log(i) / log(4) << endl;

		}
		else {
			cout << -9 << endl;
		}
	}

	//90
	for (double i = -30; i <= 30; i += 3.5) {
		if (i > 5) {
			cout << sin(i) << endl;
		}
		else {
			cout << cos(i) << endl;
		}
	}
}