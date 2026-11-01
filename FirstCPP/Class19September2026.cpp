#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
	double pi = 3.14, e = 2.72;

	int x = 2.0;
	cout << "Enter X: ";
	cin >> x;

	//1
	if (x > 0)
		cout << x + 1;
	else
		cout << x;

	if (x % 2 == 0)
		cout << "even " << x * 10;
	else
		cout << "odd" << x / 10 << endl;

	//2
	if (x > 0)
		++x;
	else if (x < 0)
		x /= 2;
	else
		x = 10;

	cout << x << endl;

	//3
	double y = 0.0;

	if (x > 1)
		y = 6 * exp(8 + x);
	else
		y = x + 4;

	cout << y << endl;
}