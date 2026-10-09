#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	srand(time(0));

	a = rand() % 101;
	b = 5 + rand() % 96;
	c = -100 + rand() % 201;

	cout << (a + b + c) / 3;
}