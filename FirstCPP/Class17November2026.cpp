#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int array1[10] = { -1,16, 25, -36, -49, 64,69,700 };
	int arraySize = size(array1);

	int count = 0;
	int sum1 = 0;
	int product1 = 1;


	for (int i = 0; i < size(array1); i++) {
		if (array1[i] % 7 == 0)
			count++;
	}

	cout << "count: " << count << endl;

	int k = 5;

	for (int i = 0; i < arraySize; i++)
	{
		if (i % k == 0)
			sum1 += array1[i];
	}

	cout << "sum: " << sum1 << endl;

	int max1 = array1[0];
	int min1 = array1[0];

	for (int i = 1; i < arraySize; i++) {
		if (array1[i] > max1)
			max1 = array1[i];

		if (array1[i] < min1)
			min1 = array1[i];
	}

	sum1 = 0;
	sum1 = min1 + max1;

	cout << "max: " << max1 << " min: " << min1 << "max + min = " << sum1 << endl;
}