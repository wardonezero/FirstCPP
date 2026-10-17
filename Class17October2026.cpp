#include <iostream>

using namespace std;

int main() {
	// 76
	int y;

	for (int x = -5; x <= 5; x += 2) {
		if (x > 0) {
			y = x * x + 4 * (pow(x, 8));
		}
		else {
			y = 0;
		}
		cout << "Y = " << y << endl;
	}

	//91
	double x = 1, sum = 0;
	int n = 7;
	/*cout << "Enter n: ";
	cin >> n;*/

	for (int i = 1; i <= n; i++) {
		sum += x;
		x = 0.5 * abs(x - 4);
	}

	cout << sum << endl;

	//93
	double product = 1;
	x = 0.5;
	for (int i = 5; i <= n; i++) {
		product *= x * x + x;
		x = tan(x + 2);
	}

	cout << product << endl;
}