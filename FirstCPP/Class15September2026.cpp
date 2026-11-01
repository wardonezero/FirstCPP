#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y;
	string enterXY = "Enter x and y: ";

	//1
	cout << enterXY;
	cin >> x >> y;

	//(x^2 + y^2)^5 + 4
	double inner = pow(pow(x, 2) + pow(y, 2), 5) + 4;

	double result = pow(inner, 7) + sin(cos(x + y));

	cout << "Result: " << result << endl;

	//2
	cout << enterXY;
	cin >> x >> y;

	double z_inner = (x + 4) / pow(pow(y, 2) + 4, 3);
	double z = pow(z_inner, 1.0 / 5.0);

	double sin_term = pow(sin(x + z), 2);
	double result = sin_term + 3 * z + (y / pow(x, 2));

	cout << "Result: " << result << endl;

	//3
	cout << "Enter x: ";
	cin >> x;

	const double PI = 3.14;

	//4th root of e^(x^2)
	double term1 = pow(exp(pow(x, 2)), 1.0 / 4.0);

	//sin((pi * x) / 2)
	double term2 = sin((PI * x) / 2.0);

	double Z = term1 - term2;

	cout << "Z = " << Z << endl;

	//4
	int L;
	cout << "Enter distance in cm: ";
	cin >> L;

	int meters = L / 100;

	cout << "Meters: " << meters << endl;

	//5
	int bytes;
	cout << "Enter file size in bytes: ";
	cin >> bytes;

	int kilobytes = bytes / 1024;

	cout << "Kilobytes: " << kilobytes << endl;

	//6
	int n;
	cout << "Enter a three-digit integer: ";
	cin >> n;
	n = abs(n);

	int hundreds = n / 100;
	int tens = (n / 10) % 10;
	int units = n % 10;

	int sum = hundreds + tens + units;
	int product = hundreds * tens * units;

	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;

	//intiger 4
	int A, B;
	cout << "Enter positive integers A and B (A > B): ";
	cin >> A >> B;

	int count = A / B;

	cout << "Number of segments B placed on segment A: " << count << endl;

	//7
	cout << "Enter a three-digit integer: ";
	cin >> n;

	n = abs(n);

	int hundreds = n / 100;
	int last_two = n % 100;

	int result = last_two * 10 + hundreds; // (e.g., 23 * 10 + 1 = 231)

	cout << "Resulting number: " << result << endl;
}