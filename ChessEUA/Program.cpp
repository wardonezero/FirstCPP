#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x1, y1, x2, y2;
	cout << "enter: x1, y1, x2, y2" << endl;
	cin >> x1 >> y1 >> x2 >> y2;

	string can = "can", cannot = "cannot";


	//knight
	if (abs(x2 - x1) == 1 and abs(y2 - y1) == 2 or
		abs(x2 - x1) == 2 and abs(y2 - y1) == 1) {
		cout << can;
	}
	else {
		cout << cannot;
	}

	//bishop
	if (abs(x2 - x1) == abs(y2 - y1)) {
		cout << can;
	}
	else {
		cout << cannot;
	}
}