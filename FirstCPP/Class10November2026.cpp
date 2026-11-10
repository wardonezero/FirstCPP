#include <iostream>
#include <cmath>

using namespace std;

int main() {
	bool k = true;

	while (k) {
		cout << "enter 0 to end 1 to continue: ";
		cin >> k;
		if (k) {
			continue;
		}
	}
}