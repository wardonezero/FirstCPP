#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
	double pi = 3.14, e = 2.72;

	double a = 2.0, b = 3.0, x = 4.0, y = 1.0, s = 2.0;

	// Problem 1: Y = | (a + x^3) / ln|x + a| | + 7 * sqrt(a + x)
	double y1 = abs((a + pow(x, 3)) / log(abs(x + a))) + 7.0 * sqrt(a + x);
	cout << "1. Y = " << y1 << "\n";

	// Problem 2: Y = (a + b) / (x^5 + x^3) - sqrt(a + x) / (2 * a)
	double y2 = (a + b) / (pow(x, 5) + pow(x, 3)) - sqrt(a + x) / (2.0 * a);
	cout << "2. Y = " << y2 << "\n";

	// Problem 3: Q = (b * x^2 - s) / (e^(s * x) - 1) + e^(sqrt(|x|))
	double q3 = (b * pow(x, 2) - s) / (exp(s * x) - 1.0) + exp(sqrt(abs(x)));
	cout << "3. Q = " << q3 << "\n";

	// Problem 4: Y = e^(e^0.2) + cbrt(|b - x|)
	double y4 = exp(exp(0.2)) + cbrt(abs(b - x));
	cout << "4. Y = " << y4 << "\n";

	// Problem 5: Z = root4(| e^x - sin((pi * x) / 2) |)
	double z5 = pow(abs(exp(x) - sin((pi * x) / 2.0)), 0.25);
	cout << "5. Z = " << z5 << "\n";

	// Problem 6: F = ln(a + x^5) + sin^2(a / x)
	double f6 = log(a + pow(x, 5)) + pow(sin(a / x), 2);
	cout << "6. F = " << f6 << "\n";

	// Problem 7: X = 1 / (b * x) + (a / b^2) * ln|x / (a * x + b)|
	double x7 = 1.0 / (b * x) + (a / pow(b, 2)) * log(abs(x / (a * x + b)));
	cout << "7. X = " << x7 << "\n";

	// Problem 8: X = (y + b)^3 + sqrt(y + b) / (y * pi) + e^y
	double x8 = pow(y + b, 3) + sqrt(y + b) / (y * pi) + exp(y);
	cout << "8. X = " << x8 << "\n";

	// Problem 9: Z = 3^(-x) * sqrt(x + root4(|x|))
	double z9 = pow(3.0, -x) * sqrt(x + pow(abs(x), 0.25));
	cout << "9. Z = " << z9 << "\n";

	// Problem 10: Z = (4.187 + pi^2 + sin((x * pi) / 7)) / (e^7 * ((3 * pi) / 4 + x * pi))
	double z10 = (4.187 + pow(pi, 2) + sin((x * pi) / 7.0)) / (pow(e, 7) * ((3.0 * pi) / 4.0 + x * pi));
	cout << "10. Z = " << z10 << "\n";
}