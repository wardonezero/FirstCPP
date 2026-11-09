#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//while 
	int number = -1;
	cout << "enter 0" << endl;
	while (number != 0) {
		cin >> number;
	}

	cout << "enter 0" << endl;
	//do while 
	do {
		cin >> number;
	} while (number != 0);

	int S = 0;
	cout << "enter 3" << endl;
	while (number != 3) {
		S += number;
		cin >> number;
	}

	cout << "Sum: " << S << endl;

	//while 1
	cout << "---- While 1 ---" << endl;

	int a = 22, b = 7;

	while (a > b) {
		a -= b;
	}

	cout << "Reminder: " << a << endl;

	//while 2
	int count = 0;

	while (a > b) {
		count++;
		a -= b;
	}

	cout << "Count: " << count << endl;

	//while 4
	cout << "---- While 4 ---" << endl;

	bool temp = false;
	cout << "enter number: ";
	cin >> number;

	while (number >= 3 and number % 3 == 0) {
		number /= 3;
	}
	if (number == 1)
		temp = !temp;

	cout << "Is power of 3: " << boolalpha << temp << endl;

	//
	count = 0;
	int n = 0;
	while (count < 5) {
		if (n < 0) {
			cout << "Enter a positive number." << endl;
		}
		else {
			count++;
		}
	}
}