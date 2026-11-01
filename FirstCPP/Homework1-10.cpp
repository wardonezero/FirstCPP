#include <iostream>
#include <cmath>

using namespace std;

void homework1_10() {
	// Begin1°. Given the side of a square a. Find its perimeter P = 4 * a.
	{
		double a;
		cout << "Enter side a: ";
		cin >> a;
		double P = 4 * a;
		cout << "P = " << P << "\n\n";
	}

	// Begin2°. Given the side of a square a. Find its area S = a^2.
	{
		double a;
		cout << "Enter side a: ";
		cin >> a;
		double S = a * a;
		cout << "S = " << S << "\n\n";
	}

	// Begin3°. Given the sides of a rectangle a and b. Find its area S = a * b and perimeter P = 2 * (a + b).
	{
		double a, b;
		cout << "Enter side a: ";
		cin >> a;
		cout << "Enter side b: ";
		cin >> b;
		double S = a * b;
		double P = 2 * (a + b);
		cout << "S = " << S << ", P = " << P << "\n\n";
	}

	// Begin4°. Given the diameter of a circle d. Find its circumference L = pi * d. Use 3.14 for pi.
	{
		double d;
		cout << "Enter diameter d: ";
		cin >> d;
		const double PI = 3.14;
		double L = PI * d;
		cout << "L = " << L << "\n\n";
	}

	// Begin5°. Given the edge length of a cube a. Find the volume V = a^3 and surface area S = 6 * a^2.
	{
		double a;
		cout << "Enter edge a: ";
		cin >> a;
		double V = a * a * a;
		double S = 6 * a * a;
		cout << "V = " << V << ", S = " << S << "\n\n";
	}

	// Begin6°. Given the edge lengths a, b, c of a rectangular parallelepiped. Find volume V = a*b*c and surface area S = 2*(a*b + b*c + a*c).
	{
		double a, b, c;
		cout << "Enter edge a: ";
		cin >> a;
		cout << "Enter edge b: ";
		cin >> b;
		cout << "Enter edge c: ";
		cin >> c;
		double V = a * b * c;
		double S = 2 * (a * b + b * c + a * c);
		cout << "V = " << V << ", S = " << S << "\n\n";
	}

	// Begin7°. Find the circumference L and area S of a circle of radius R (L = 2*pi*R, S = pi*R^2). Use 3.14 for pi.
	{
		double R;
		cout << "Enter radius R: ";
		cin >> R;
		const double PI = 3.14;
		double L = 2 * PI * R;
		double S = PI * R * R;
		cout << "L = " << L << ", S = " << S << "\n\n";
	}

	// Begin8°. Given two numbers a and b. Find their arithmetic mean: (a + b) / 2.
	{
		double a, b;
		cout << "Enter number a: ";
		cin >> a;
		cout << "Enter number b: ";
		cin >> b;
		double mean = (a + b) / 2.0;
		cout << "Mean = " << mean << "\n\n";
	}

	// Begin9°. Given two non-negative numbers a and b. Find their geometric mean: sqrt(a * b).
	{
		double a, b;
		cout << "Enter non-negative a: ";
		cin >> a;
		cout << "Enter non-negative b: ";
		cin >> b;

		double product = a * b;
		double geo_mean = sqrt(a * b);

		cout << "Geometric Mean = " << geo_mean << "\n\n";
	}

	// Begin10°. Given two non-zero numbers. Find the sum, difference, product, and quotient of their squares.
	{
		double a, b;
		cout << "Enter non-zero a: ";
		cin >> a;
		cout << "Enter non-zero b: ";
		cin >> b;
		double a2 = a * a;
		double b2 = b * b;

		cout << "Sum: " << (a2 + b2) << "\n";
		cout << "Difference: " << (a2 - b2) << "\n";
		cout << "Product: " << (a2 * b2) << "\n";
		cout << "Quotient: " << (a2 / b2) << "\n\n";
	}
}