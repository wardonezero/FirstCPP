#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int ns[100] = {
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

	int n = size(ns);

	long double S = 0; //Sum
	long double P = 1; //Product
	long double C = 0; //Count


	//231 232 233
	cout << "---- 231 232 233 ----" << endl;

	for (int i = 0; i < n; ++i)
	{
		if (ns[i] % 2 == 0) {
			S += ns[i] * ns[i];
			++C;
			P *= ns[i];
		}
	}

	cout << "Sum of squares: " << S << "\n";
	cout << "Count of evens: " << C << "\n";
	cout << "Product of evens: " << P << "\n";

	//234 235 236
	cout << "---- 234 235 236 ----" << endl;

	S = 0;
	P = 1;
	C = 0;

	long double avgodd = 0;

	for (int i = 0; i < n; ++i)
	{
		if (ns[i] % 2 != 0) {
			avgodd += ns[i];
			S += ns[i] * ns[i];
			++C;
			P *= ns[i];
		}
	}

	cout << "Average of odd numbers: " << avgodd / C << "\n";
	cout << "Average of odd squares: " << S / C << "\n";
	cout << "Count of odds: " << C << "\n";
	cout << "Product of odds: " << P << "\n";

	//237
	cout << "---- 237 ----" << endl;

	C = 0;
	for (int i = 0; i < n; ++i)
	{
		if (ns[i] == 0)
			++C;
	}

	cout << "Number of Os: " << C << "\n";

	//238
	cout << "---- 238 ----" << endl;

	S = 0;
	C = 0;

	for (int i = 0; i < n; i++)
	{
		if (ns[i] % 3 == 0) {
			S += ns[i];
			++C;
		}
	}

	cout << "Average multiples of 3: " << S / C << "\n";

	//239
	cout << "---- 239 ----" << endl;

	S = 0;
	C = 0;

	for (int i = 0; i < n; i++)
	{
		if (ns[i] % 5 == 0) {
			S += ns[i] * ns[i];
			++C;
		}
	}

	cout << "Average square multiples of 5: " << S / C << "\n";

	//240
	cout << "---- 240 ----" << endl;

	C = 0;

	for (int i = 0; i < n; i++)
	{
		if (ns[i] % 7 == 0)
			++C;
	}

	cout << "Count multiples of 7: " << C << "\n";

	//241
	cout << "---- 241 ----" << endl;

	int k = 4;

	S = 0;

	for (int i = 0; i < n; i++)
	{
		if (ns[i] % k == 0)
			S += ns[i];
	}

	cout << "Sum multiples of " << k << ": " << S << "\n";

	//242
	cout << "---- 242 ----" << endl;

	int m = 6;

	P = 1;

	for (int i = 0; i < n; ++i)
	{
		if (ns[i] % m == 0)
			P *= ns[i];
	}

	cout << "Product multiples of " << m << ": " << P << "\n";

	//243
	cout << "---- 243 ----" << endl;

	int t = 7;

	C = 0;

	for (int i = 0; i < n; ++i)
	{
		if (ns[i] % t == 0)
			++C;
	}

	cout << "Count multiples of " << t << ": " << P << "\n";

	//244
	cout << "---- 244 ----" << endl;

	P = 1;

	for (int i = 0; i < n; ++i)
	{
		if (ns[i] % 5 == 2)
			P *= ns[i];
	}

	cout << "Product of n/5 remainder is 2: " << P << "\n";


	//245
	cout << "---- 245 ----" << endl;

	S = 0;

	for (int i = 0; i < n; ++i)
	{
		if ((ns[i] + i) % 3 == 0)
			S += ns[i] * ns[i];
	}

	cout << "Sum of (n + index) / 3: " << S << "\n";

	//246
	cout << "---- 246 ----" << endl;

	S = 0;
	C = 0;

	long long tp = 0;

	for (int i = 0; i < n; ++i)
	{
		tp = sqrt(i);
		if (tp * tp == i) {
			S += ns[i];
			++C;
		}
	}

	cout << "Average of elements where index is perfext square: " << S / C << "\n";
	
	//247
	cout << "---- 247 ----" << endl;

	S = 0;
	C = 0;

	for (int i = 0; i < n; ++i)
	{
		if (ns[i] > i) {
			S += ns[i] * ns[i];
			++C;
		}
	}

	cout << "Average : " << S / C << "\n";

	//248
	cout << "---- 248 ----" << endl;

	S = 0;
	
	for (int i = 0; i < n; ++i)
	{
		tp = ns[i] + i;

		if ((tp * tp) % k == 0) {
			S += ns[i];
		}
	}

	cout << "Sum : " << S << "\n";
}