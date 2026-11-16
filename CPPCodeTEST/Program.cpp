#include <iostream>
#include <cmath>

using namespace std;

void main() {
	bool t = false;
	int o = 243;
	cout << o << " is power of 3: ";

	while (o % 3 == 0) {
		o /= 3;
	}

	t = o == 1;
	cout << boolalpha << t << endl;
}