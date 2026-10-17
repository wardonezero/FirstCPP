#include <iostream>

using namespace std;

int main() {
	//for 6 
	double price;
	cout << "Enter price: ";
	cin >> price;

	double weight;
	for (int i = 6; i <= 10; i++) {
		weight = i * 0.2;
		cout << weight * price << endl;
	}

	//for 8
	int a, b;
	cout << "Enter A, B: ";
	cin >> a >> b;
	
	int product = 1;

	for (int i = a; i <= b; i++) {
		product *= i;
	}

	cout << product << endl;

	int sum = 0;
	
	for (int i = a; i <= b; i++) {
		sum =sum + i*i;
	}
	
	cout << sum << endl;
}
