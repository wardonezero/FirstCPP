#include <iostream>
#include <cmath>

using namespace std;

int main() {

	//160
	cout << "---- 160 ----" << endl;

	int k = 0;

	for (int i = 100; i <= 999; i++) {
		k = sqrt(i * 16);
		if (i * 16 == k * k) {
			cout << i << endl;
			break;
		}
	}

	int n = 100;
	k = 0;

	while (n <= 999) {
		k = sqrt(n * 16);

		if (n * 16 == k * k) {
			cout << n << endl;
			break;
		}

		n++;
	}

	//165
	cout << "---- 165 ----" << endl;

	bool t = false;
	cout << "n: ";
	cin >> n;
	n = abs(n);

	while (n % 3 == 0) {
		n /= 3;
	}

	t = n == 1;

	cout << "is power of 3: " << boolalpha << t << endl;

	//Guess the number 
	cout << "Guess the number" << endl;

	srand(time(0));
	n = rand() % 101;

	int guess = 0;
	cout << "guess the number [0; 100]: ";
	cin >> guess;

	while (n != guess) {
		if (guess > n)
			cout << "number is greater" << endl;
		else 
			cout << "number is smaller" << endl;

		cout << "guess agin: ";
		cin >> guess;
		cout << endl;
	}

	cout << "you win!" << endl;