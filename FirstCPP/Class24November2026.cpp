#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int x[] = { -5,12,7,25,-3,0,45 };
	vector<int> y;

	//281
	cout << "---- 281 ----" << endl;

	for (int i : x)
	{
		if (i > 0) {
			y.push_back(i);
			cout << i << " ";
		}
	}

	//285
	cout << "---- 285 ----" << endl;

	y.clear();

	int p = 6;

	for (int i : x)
		if (i % p == 0)
			y.push_back(i);

	for (int i : y)
		cout << i << '\n';

	//271
	cout << "---- 271 ----" << endl;

	char c[] = { 'a','a','!','@','2','g','j','i','l', };
	int k = 0;
	for (char i : c) {
		if (i == 'a')
			++k;
	}

	cout << "Count of 'a': " << k << '\n';

	//275
	cout << "---- 275 ----" << endl;

	k = 0;

	for (char i : c) {
		if (i < 'k')
			++k;
	}

	cout << "Count of values less then 'k': " << k << '\n';

	//276
	cout << "---- 276 ----" << endl;

	bool t = false;

	for (char i : c)
		if (i == 'r') {
			t = true;
			break;
		}

	cout << "Is there any 'r':" << boolalpha << t << '\n';

	//311
	cout << "---- 311 ----" << endl;

	int z[] = { 1,2,3,4,5,6,7,8,9,25 };
	vector<int> g;
	int z_max = z[0];

	for (int i : z)
		if (i > z_max)
			z_max = i;

	for (int i : z)
		if (i > 0)
			g.push_back(i + z_max);

	for (int i : g)
		cout << i << '\n';


}