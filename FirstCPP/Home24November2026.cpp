#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int X[100] = {
	412, -89, 734, 15, -621, 908, 3, -445, 276, 819,
	-134, 562, 67, -912, 381, -24, 745, -509, 192, 638,
	-773, 88, 451, -318, 964, -62, 527, -840, 143, 691,
	-205, 804, -57, 339, -985, 218, 614, -372, 790, -116,
	483, -654, 29, 872, -408, 595, -173, 711, -886, 356,
	-94, 649, -523, 168, 921, -289, 437, -741, 102, 578,
	-350, 835, -148, 264, -697, 491, -41, 768, -562, 129,
	890, -231, 394, -812, 54, 673, -469, 247, -934, 619,
	-182, 725, -306, 468, -610, 857, -75, 312, -538, 184,
	946, -258, 405, -784, 71, 513, -395, 662, -120, 823
	};

	int nx = size(X);

	int Y[100] = {
	412, -89, 734, 15, -621, 908, 3, -445, 276, 819,
	-134, 562, 67, -912, 381, -24, 745, -509, 192, 638,
	-773, 88, 451, -318, 964, -62, 527, -840, 143, 691,
	-205, 804, -57, 339, -985, 218, 614, -372, 790, -116,
	483, -654, 29, 872, -408, 595, -173, 711, -886, 356,
	-94, 649, -523, 168, 921, -289, 437, -741, 102, 578,
	-350, 835, -148, 264, -697, 491, -41, 768, -562, 129,
	890, -231, 394, -812, 54, 673, -469, 247, -934, 619,
	-182, 725, -306, 468, -610, 857, -75, 312, -538, 184,
	946, -258, 405, -784, 71, 513, -395, 662, -120, 823
	};

	int ny = size(Y);

	long double S = 0; //Sum
	long double P = 1; //Product
	long double C = 0; //Count

	int n_min = X[0];
	int n_max = X[0];
	int i_min = X[0];
	int i_max = X[0];


	//256
	cout << "---- 256 ----" << endl;

	for (int i = 0; i < nx; ++i)
	{
		if (X[i] < n_min) {
			n_min = X[i];
			i_min = i;
		}

		if (X[i] > n_max) {
			n_max = X[i];
			i_max = i;
		}
	}

	cout << "min(N[i]) + i: " << n_min << "\n";

	//257
	cout << "---- 256 ----" << endl;

	cout << "first max value: " << n_max << " at index: " << i_max << "\n";

	//259
	cout << "---- 259 ----" << endl;

	cout << "first min value: " << n_min << " at index: " << i_min << "\n";

	//258
	cout << "---- 258 ----" << endl;

	for (int i = 0; i < nx; ++i)
	{
		if (X[i] <= n_min) {
			n_min = X[i];
			i_min = i;
		}

		if (X[i] >= n_max) {
			n_max = X[i];
			i_max = i;
		}
	}

	cout << "last max value: " << n_max << "at index: " << i_max << "\n";

	//260
	cout << "---- 260 ----" << endl;

	cout << "last min value: " << n_min << " at index: " << i_min << "\n";

	//261
	cout << "---- 261 ----" << endl;

	long avgX = 0;
	long avgY = 0;

	for (int i = 0; i < ny; ++i)
	{
		avgX += X[i];
		avgY += Y[i];
	}

	cout << "X/nx * Y/ny: " << (avgX / nx) * (avgY / ny) << "\n";

	//262
	cout << "---- 262 ----" << endl;

	for (int i = 0; i < ny; ++i)
	{
		S += X[i] * X[i] + Y[i] * Y[i];
	}

	cout << "(X^2 + Y^2)/ nx + ny: " << S / nx + ny << "\n";

	//263
	cout << "---- 263 ----" << endl;

	for (int i = 0; i < ny; ++i)
	{
		if (X[i] > 0)
			++C;
		if (Y[i] > 0)
			++C;
	}

	cout << "Count of Positive values: " << C << "\n";

	//264
	cout << "---- 264 ----" << endl;

	C = 0;

	for (int i = 0; i < ny; ++i)
	{
		if (X[i] < 0)
			++C;
		if (Y[i] < 0)
			++C;
	}

	cout << "Count of Negative values: " << C << "\n";

	//265
	cout << "---- 265 ----" << endl;

	S = 0;
	P = 1;

	for (int i = 0; i < ny; ++i)
	{
		S += X[i];
		P *= Y[i];
	}

	cout << "Sum(X) - P(Y): " << S - P << "\n";

	//266
	cout << "---- 266 ----" << endl;

	S = 0;
	P = 0;

	for (int i = 0; i < ny; ++i)
	{
		if (X[i] % 2 != 0)
			S += X[i];

		if (Y[i] % 2 == 0)
			P += Y[i];
	}

	cout << "Sum(X) - Sum(Y): " << S - P << "\n";
}