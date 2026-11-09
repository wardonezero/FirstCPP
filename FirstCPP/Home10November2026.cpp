#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//1
	cout << "1. Output numbers from 1 to 10" << endl;

	int i = 1;

	while (i <= 10) {
		cout << i << " ";
		i++;
	}

	cout << endl;

	//2
	cout << "2. Sum of numbers from 1 to n" << endl;

	int n;
	cout << "Enter n: ";
	cin >> n;
	int sum = 0;
	i = 1;

	while (i <= n) {
		sum += i;
		i++;
	}

	cout << "Sum = " << sum << endl;

	//3
	cout << "3. Number of digits" << endl;

	int num;
	cout << "Enter a positive integer: ";
	cin >> num;
	int count = 0;

	while (num > 0) {
		count++;
		num /= 10;
	}

	cout << "Count = " << count << endl;

	//4
	cout << "4. Sum of digits" << endl;

	cout << "Enter a positive integer: ";
	cin >> num;

	sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}

	cout << "Sum = " << sum << endl;

	//5
	cout << "5. Reverse number" << endl;

	cout << "Enter a positive integer: ";
	cin >> num;

	int reverse = 0;
	while (num > 0) {
		reverse = reverse * 10 + (num % 10);
		num /= 10;
	}

	cout << "Reverse = " << reverse << endl;

	//6
	cout << "6. Check prime number" << endl;

	cout << "Enter a natural number n: ";
	cin >> n;

	if (n <= 1) {
		cout << "Not prime" << endl;
	}
	else {
		int i = 2;
		bool isPrime = true;

		while (i * i <= n && isPrime) {
			if (n % i == 0) {
				isPrime = false;
			}
			i++;
		}

		if (isPrime) {
			cout << "Prime" << endl;
		}
		else {
			cout << "Not prime" << endl;
		}
	}
}