#include <iostream>
#include <cmath>

using namespace std;

void main() {
	int threedigit = 202;
	int hundreds = threedigit / 100;
	int tens = threedigit / 10 % 10;
	int units = threedigit % 10;
	cout << "three-digit: " << threedigit << "\nhundreds: " << hundreds << " tens: " << tens << " units: " << units << endl;
	bool t = hundreds == tens || hundreds == units || tens == units;
	cout << "t: " << boolalpha << t << endl;
}