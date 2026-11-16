#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int  arr[] = { 1,2,3,4,5,6,7,8,9 ,10 };

	int n = size(arr);
	double sum = 0;
	double product = 1;

	// 215
	cout << "215 Sum of elements with even indices" << endl;

	sum = 0;

	for (int i = 0; i < n; i += 2) {
		sum += arr[i];
	}

	cout << "Sum: " << sum << endl;

	// 216
	cout << "216 Product of elements with even indices" << endl;

	product = 1;

	for (int i = 0; i < n; i += 2) {
		product *= arr[i];
	}

	cout << "Product: " << product << endl;

	// 217
	cout << "217 Product of squares of elements with odd indices" << endl;

	product = 1;

	for (int i = 1; i < n; i += 2) {
		product *= arr[i] * arr[i];
	}

	cout << "Product: " << product << endl;

	// 218
	cout << "218 Sum of the absolute values of elements with odd indices" << endl;

	sum = 0;

	for (int i = 1; i < n; i += 2) {
		sum += abs(arr[i]);
	}

	cout << "Sum: " << sum << endl;

	// 220
	cout << "220 Number of positive and negative elements" << endl;

	int pos = 0, neg = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) pos++;
		else if (arr[i] < 0) neg++;
	}

	cout << "Positive: " << pos << ", Negative: " << neg << endl;

	// 221
	cout << "221 Sum of elements belonging to the interval [a, b]" << endl;

	sum = 0;
	int a = 3, b = 7;

	for (int i = 0; i < n; i++) {
		if (arr[i] >= a && arr[i] <= b) {
			sum += arr[i];
		}
	}

	cout << "Sum: " << sum << endl;

	// 222
	cout << "222 Product of elements belonging to the interval [c, d)" << endl;

	product = 1;
	int c = 3, d = 8;

	for (int i = 0; i < n; i++) {
		if (arr[i] >= c && arr[i] < d) {
			product *= arr[i];
		}
	}

	cout << "Product: " << product << endl;

	// 223
	cout << "223 Number of elements belonging to the interval (a, b)" << endl;

	int count1 = 0;
	int ia = 2, ib = 8;

	for (int i = 0; i < n; i++) {
		if (arr[i] > ia && arr[i] < ib) {
			count1++;
		}
	}

	cout << "Count: " << count1 << endl;

	// 224
	cout << "224 Sum of the cubes of elements less than k in absolute value" << endl;

	sum = 0;
	int k1 = 5;

	for (int i = 0; i < n; i++) {
		if (abs(arr[i]) < k1) {
			sum += arr[i] * arr[i] * arr[i];
		}
	}

	cout << "Sum: " << sum << endl;

	// 225
	cout << "225 Product of elements less than k in absolute value" << endl;

	product = 1;
	int k2 = 5;

	for (int i = 0; i < n; i++) {
		if (abs(arr[i]) < k2) {
			product *= arr[i];
		}
	}

	cout << "Product: " << product << endl;

	// 226
	cout << "226 Number of elements less than k in absolute value" << endl;

	int count2 = 0;
	int k3 = 5;

	for (int i = 0; i < n; i++) {
		if (abs(arr[i]) < k3) {
			count2++;
		}
	}

	cout << "Count: " << count2 << endl;

	// 227
	cout << "227 Arithmetic mean of elements whose index is a multiple of m" << endl;

	sum = 0;
	int count3 = 0;
	int m1 = 3;

	for (int i = 0; i < n; i += m1) {
		sum += arr[i];
		count3++;
	}

	double mean = (count3 > 0) ? (sum / count3) : 0;
	cout << "Mean: " << mean << endl;

	// 228
	cout << "228 Sum of elements whose index is divided without remainder by m" << endl;

	sum = 0;
	int m2 = 3;

	for (int i = 0; i < n; i++) {
		if (i % m2 == 0) {
			sum += arr[i];
		}
	}

	cout << "Sum: " << sum << endl;

	// 229
	cout << "229 Product of elements whose difference between value and index is positive" << endl;

	product = 1;

	for (int i = 0; i < n; i++) {
		if (arr[i] - i > 0) {
			product *= arr[i];
		}
	}

	cout << "Product: " << product << endl;

	// 230
	cout << "230 Root mean square of elements whose whole number part is a multiple of m" << endl;

	double sum_sq = 0;
	int count4 = 0;
	int m3 = 2;

	for (int i = 0; i < n; i++) {
		if (arr[i] % m3 == 0) {
			sum_sq += arr[i] * arr[i];
			count4++;
		}
	}

	double rms = (count4 > 0) ? sqrt(sum_sq / count4) : 0;
	cout << "RMS: " << rms << endl;

}