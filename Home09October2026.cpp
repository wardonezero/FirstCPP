#include <iostream>
#include <cmath>

using namespace  std;

int main() {
	//Abrahamyan

	int a = 1024, b = 256, c = 512;

	//if 14
	int min, max;

	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}

	if (c < min) {
		min = c;
	}
	else if (c > max) {
		max = c;
	}

	cout << "min = " << min << ", max = " << max << endl;

	//if 15 
	int max2;
	if (a < b and a < c) {
		max = b;
		max2 = c;
	}
	else if (b < a and b < c)
	{
		max = a;
		max2 = c;
	}
	else {
		max = a;
		max2 = b;
	}

	cout << "max + max2 = " << max + max2 << endl;

	// if 16
	if (a < b and b < c) {
		a *= 2;
		b *= 2;
		c *= 2;
	}
	else {
		a *= -1;
		b *= -1;
		c *= -1;
	}

	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

	// if 17
	if (a < b and b < c || a > b and b > c) {
		a *= 2;
		b *= 2;
		c *= 2;
	}
	else {
		a *= -1;
		b *= -1;
		c *= -1;
	}

	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

	//Problems 11-20 do any 3

	//11
	int x;
	cout << "Enter x: ";
	cin >> x;

	int aspbs = pow(a, 2) + pow(b, 2);
	int result;

	if (aspbs > 5) {
		result = (3 * exp(a - x)) + (log(aspbs + 5) / log(3));
	}
	else if (aspbs < 1)
	{
		result = pow(tan(a + b), 3);
	}
	else {
		result = -3;
	}

	cout << "result: " << result << endl;

	//12
	int absb = abs(b);
	if (x >= -5 and x <= 5) {
		result = pow(1 + a * a, 6);
	}
	else if (x > 5) {
		result = cos(pow(log(abs(x)), 2)) + pow(x, 8);
	}
	else {
		result = a;
	}

	cout << "result: " << result << endl;

	//13
	if (a + absb < -5) {
		result = exp(abs(a + x)) * pow(cos(a + x + b), 2);
	}
	else if (a + absb > 2) {
		result = cbrt(atan(a + x));
	}
	else {
		result = a + absb;
	}

	cout << "result: " << result << endl;
}