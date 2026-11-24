#include <iostream>
#include <vector>

using namespace std;

int main() {
	srand(time(0));
	int n = 25;
	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		a[i] = rand() % 100;
	}

	int n_max = a[0];
	int i_max = 0;

	int n_min = a[0];
	int i_min = 0;

	for (int i = 0; i < n; ++i)
	{
		if (n_max < a[i]) {
			n_max = a[i];
			i_max = i;
		}

		if (n_min > a[i]) {
			n_min = a[i];
			i_min = i;
		}
	}

	cout << "max index: " << i_max << " max n: " << a[i_max] << "\n";
	cout << "min index: " << i_min << " min n: " << a[i_min] << "\n";

	int t = a[i_max];
	a[i_max] = a[i_min];
	a[i_min] = t;

	cout << "\n";
	cout << "max index: " << i_max << " max n: " << a[i_max] << "\n";
	cout << "min index: " << i_min << " min n: " << a[i_min] << "\n";

}