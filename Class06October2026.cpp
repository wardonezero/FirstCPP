#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a = 512, b = 256;

	//if 9
	if (a > b) {
		int t = b;
		b = a;
		a = t;
	}

	cout << "a = " << a << ", b = " << b << endl;

	//if 10
	if (a != b) {
		b += a;
		a = b;
	}
	else {
		a = 0;
		b = 0;
	}

	cout << "a = " << a << ", b = " << b << endl;

	//if 11
	if (a != b) {
		if (a > b) {
			b = a;
		}
		else
		{
			a = b;
		}
	}
	else {
		a = b = 0;
	}

	cout << "a = " << a << ", b = " << b << endl;

	//if 13
	int c = 1024;
	if (a < b and a > c || a > b and a < c) {
		cout << a;
	}
	else if (c < a and c > b || c > a and c < b) {
		cout << c << endl;
	}
	else {
		cout << b << endl;
	}

	//integer 24
	int day = 31;
	cin >> day;
	int theday = (day - 1) % 7;

	if (theday == 0) {
		cout << "Sunday" << endl;
	}
	else if (theday == 1) {
		cout << "Monday" << endl;
	}
	else if (theday == 2) {
		cout << "Tuesday" << endl;
	}
	else if (theday == 3) {
		cout << "Wednesday" << endl;
	}
	else if (theday == 4) {
		cout << "Thursday" << endl;
	}
	else if (theday == 5) {
		cout << "Friday" << endl;
	}
	else if (theday == 6) {
		cout << "Saturday" << endl;
	}
	else {
		cout << "Something went wrong" << endl;
	}
}