#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// 151
	cout << "---- 151 ----" << endl;

	int o = 24;
	long sum = 0;

	for (int i = 1; i+i <= o; ++i) {
		if (o % i == 0) {
			sum += i;
		}
	}

	cout << "Sum of divisors of " << o << " = " << sum << endl;

	// 152
	cout << "---- 152 ----" << endl;

	o = 12;
	long prod_div = 1;

	for (int i = 1; i * i <= o; ++i) {
		if (o % i == 0) {
			prod_div *= i;
			if (i * i != o) prod_div *= (o / i);
		}
	}

	cout << "Product of divisors of " << o << " = " << prod_div << endl;

	// 153
	cout << "---- 153 ----" << endl;

	o = 26;
	long sum_rem2 = 0;
	int target_153 = o - 2;

	if (target_153 > 0) {
		for (int i = 1; i * i <= target_153; ++i) {
			if (target_153 % i == 0) {
				if (i > 2) sum_rem2 += i;
				int comp = target_153 / i;
				if (comp != i && comp > 2) sum_rem2 += comp;
			}
		}
	}

	cout << "Sum of numbers leaving remainder 2 for " << o << " = " << sum_rem2 << endl;

	// 154
	cout << "---- 154 ----" << endl;

	o = 38;
	long prod_rem3 = 1;
	bool found_154 = false;
	int target_154 = o - 3;

	if (target_154 > 0) {
		for (int i = 1; i * i <= target_154; ++i) {
			if (target_154 % i == 0) {
				if (i > 3) { prod_rem3 *= i; found_154 = true; }
				int comp = target_154 / i;
				if (comp != i && comp > 3) { prod_rem3 *= comp; found_154 = true; }
			}
		}
	}

	cout << "Product of numbers leaving remainder 3 for " << o << " = " << (found_154 ? prod_rem3 : 0) << endl;

	// 155
	cout << "---- 155 ----" << endl;

	long sum_mult3 = 30 * (12 + 99) / 2;

	cout << "Sum of two-digit numbers multiples of 3 = " << sum_mult3 << endl;

	// 156
	cout << "---- 156 ----" << endl;

	long long prod_mult15 = 15LL * 30 * 45 * 60 * 75 * 90;

	cout << "Product of two-digit numbers multiples of 3 and 5 = " << prod_mult15 << endl;

	// 157
	cout << "---- 157 ----" << endl;

	long long sum_not5 = (450LL * 1099) - (90LL * 1095);

	cout << "Sum of three-digit numbers not multiples of 5 = " << sum_not5 << endl;

	// 158
	cout << "---- 158 ----" << endl;

	double not23 = 1.0;

	for (int i = 101; i <= 999; i += 2) {
		if (i % 3 != 0) {
			not23 *= i;
		}
	}

	cout << "Product of three-digit numbers not multiples of 2 and 3 = " << not23 << endl;

	// 159
	cout << "---- 159 ----" << endl;
	double prod = 1.0;

	for (int i = 118; i <= 999; i += 12) {
		prod *= i;
	}

	cout << "Product of three-digit numbers with rem 1 by 3 and rem 2 by 4 = " << prod << endl;

	// 160
	cout << "---- 160 ----" << endl;

	int a = 100;

	cout << "Smallest three-digit number multiplied by 16 giving a square = " << a << endl;

	// 161
	cout << "---- 161 ----" << endl;

	int ans_161 = 26 * 7 * 7;

	cout << "Smallest four-digit number multiplied by 26 giving a square = " << ans_161 << endl;

	// 162
	cout << "---- 162 ----" << endl;

	a = 14 * 26 * 26;

	cout << "Largest four-digit number multiplied by 14 giving a square = " << a << endl;

	// 163
	cout << "---- 163 ----" << endl;

	a = 2 * 70 * 70;

	cout << "Largest four-digit number multiplied by 18 giving a square = " << a << endl;

	// 164
	cout << "---- 164 ----" << endl;

	o = 15;
	a = max(100, (o * o) + 1);

	cout << "Smallest three-digit number whose square root is greater than " << o << " = " << a << endl;

	// 165
	cout << "---- 165 ----" << endl;

	int t = 81;
	int temp_t = t;

	while (temp_t > 1 && temp_t % 3 == 0) {
		temp_t /= 3;
	}

	bool ist = (t > 0 && temp_t == 1);
	cout << "Is " << t << " a power of 3? (t) = " << boolalpha << ist << endl;

	// 166
	cout << "---- 166 ----" << endl;

	int n = 64;
	int temp_n = n;

	while (temp_n > 1 && temp_n % 4 == 0) {
		temp_n /= 4;
	}

	int y = (n > 0 && temp_n == 1) ? 1 : 0;
	cout << "Value of y for " << n << " (power of 4 check) = " << y << endl;
}