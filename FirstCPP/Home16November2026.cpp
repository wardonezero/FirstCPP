#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// 151
	cout << "---- 151 ----" << endl;

	int o = 24;
	long long sum = 0;

	for (int i = 1; i <= o / 2; ++i) {
		if (o % i == 0) {
			sum += i;
		}
	}

	cout << "Sum of divisors of " << o << " = " << sum << endl;

	// 152
	cout << "---- 152 ----" << endl;

	o = 12;
	long long product = 1;

	for (int i = 1; i <= o / 2; ++i) {
		if (o % i == 0) {
			product *= i;
		}
	}

	cout << "Product of divisors of " << o << " = " << product << endl;

	// 153
	cout << "---- 153 ----" << endl;

	o = 26;
	sum = 0;

	for (int i = 1; i <= o / 2; ++i) {
		if (o % i == 2) {
			sum += i;
		}
	}

	cout << "Sum of numbers leaving remainder 2 for " << o << " = " << sum << endl;

	// 154
	cout << "---- 154 ----" << endl;

	o = 38;
	product = 1;

	for (int i = 1; i < o / 2; ++i)
	{
		if (o % i == 3) {
			product *= i;
		}
	}

	cout << "Product of numbers leaving remainder 3 for " << o << " = " << product << endl;

	// 155
	cout << "---- 155 ----" << endl;

	sum = 0;

	for (int i = 12; i < 100; ++i) {
		if (i % 3 == 0) {
			sum += i;
		}
	}

	cout << "Sum of two-digit numbers multiples of 3 = " << product << endl;

	// 156
	cout << "---- 156 ----" << endl;

	product = 1;

	for (int i = 12; i < 100; ++i) {
		if (i % 3 == 0) {
			product *= i;
		}
	}

	cout << "Product of two-digit numbers multiples of 3 and 5 = " << product << endl;

	// 157
	cout << "---- 157 ----" << endl;

	sum = 0;

	for (int i = 100; i < 1000; ++i) {
		if (i % 5 > 0) {
			sum += i;
		}
	}

	cout << "Sum of three-digit numbers not multiples of 5 = " << sum << endl;

	// 158
	cout << "---- 158 ----" << endl;

	product = 1;

	for (int i = 100; i < 1000; ++i) {
		if (i % 3 > 0 && i % 2 > 0) {
			product *= i;
		}
	}

	cout << "Product of three-digit numbers not multiples of 2 and 3 = " << product << endl;

	// 159
	cout << "---- 159 ----" << endl;
	product = 1;

	for (int i = 100; i <= 1000; i++) {
		if (i % 3 == 1 && i % 4 == 2) {
			product *= i;
		}
	}

	cout << "Product of three-digit numbers with rem 1 by 3 and rem 2 by 4 = " << product << endl;

	// 160
	cout << "---- 160 ----" << endl;


	for (long i = 100; i < 1000; ++i) {
		long root = sqrt(i * 16);
		if (i * 16 == root * root) {
			cout << "Smallest three-digit number multiplied by 16 giving a square = " << i << endl;
			break;
		}
	}

	// 161
	cout << "---- 161 ----" << endl;

	for (long i = 1000; i < 10000; ++i) {
		long root = sqrt(i * 26);
		if (i * 26 == root * root) {
			cout << "Smallest four-digit number multiplied by 26 giving a square = " << i << endl;
			break;
		}
	}


	// 162
	cout << "---- 162 ----" << endl;

	for (long i = 9999; i > 999; --i) {
		long root = sqrt(i * 14);
		if (i * 14 == root * root) {
			cout << "Largest four-digit number multiplied by 14 giving a square = " << i << endl;
			break;
		}
	}


	// 163
	cout << "---- 163 ----" << endl;

	for (long i = 9999; i > 999; --i) {
		long root = sqrt(i * 18);
		if (i * 18 == root * root) {
			cout << "Largest four-digit number multiplied by 18 giving a square = " << i << endl;
			break;
		}
	}


	// 164
	cout << "---- 164 ----" << endl;

	o = 15;

	for (long i = 100; i < 1000; ++i) {
		if (sqrt(i) > o) {
			cout << "Smallest three-digit number whose square root is greater than " << o << " = " << i << endl;
			break;
		}
	}


	// 165
	cout << "---- 165 ----" << endl;

	bool t = false;
	o = 27;
	cout << o << "is power of 3: ";

	while (o % 3 == 0) {
		o /= 3;
	}

	t = o == 1;
	cout << boolalpha << t << endl;

	// 166
	cout << "---- 166 ----" << endl;

	o = 1600;

	while (o > 1 && o % 4 == 0) {
		o /= 4;
	}

	int y = (o == 1) ? 1 : 0;
	cout << y << endl;
}