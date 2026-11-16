#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int arr[6] = { };

	int n = size(arr);
	//int n = sizeof(arr) / sizeof(arr[0]);

	/*int arr2[5] = {};

	for (int i = 0; i < size(arr2); i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < size(arr2); i++) {
		cout << arr[i];
		if (i == size(arr2)) {
			cout << ".";
		}
		else
		{
			cout << "; ";
		}
	}*/

	// avarage
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	cout << "Avarage: " << sum / n << endl;

	for (int i = 0; i < n; i++) {
		arr[i] = i * 2;
		cout << i << " : " << arr[i] << endl;
	}

	// 215
	cout << "---- 215 ----" << endl;
	sum = 0;

	for (int i = 2; i < n and i % 2 == 0; i++) {
		sum += arr[i];
	}

	cout << "Sum: " << sum << endl;

	//219
	cout << "---- 219 ----" << endl;

	int k = 90;
	int count = 0;

	for (int i = 1; i <= n && k % i == 0; i++) {
		++count;
	}

	cout << "Count: " << count << endl;
}