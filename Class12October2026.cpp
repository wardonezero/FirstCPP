#include <iostream>
#include <cmath>

using namespace  std;

int main() {
	//case 1
	int day = 31;
	cout << "enter weekday 1 - 7" << endl;
	cin >> day;
	int theday = day - 1;
	switch (theday)
	{
	case  0:
		cout << "Sunday" << endl;
		break;
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case  6:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "Something went wrong" << endl;
		break;
	}

	//case 2
	int k = 2;
	switch (k)
	{
	case 1:
		cout << "poor" << endl;
		break;
	case 2:
		cout << "unsatisfactory" << endl;
		break;
	case 3:
		cout << "satisfactory" << endl;
		break;
	case 4:
		cout << "good" << endl;
		break;
	case 5:
		cout << "excellent" << endl;
		break;
	default:
		break;
	}

	//case 5
	int a, b, result;
	cout << "domain: b > 0";
	cout << "enter a, b: ";
	cin >> a >> b;
	cout << "enter operation 1+, 2-, 3*, 4/:" << endl;
	cin >> k;
	if (b == 0) {
		cout << "b cannot be 0" << endl;
	}
	else {
		switch (k)
		{
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 3:
			result = a * b;
			break;
		case 4:
			result = a / b;
			break;
		default:
			cout << "Something went wrong" << endl;
			result = 0;
			break;
		}
		cout << "Result = " << result << endl;
	}

	//automn
	char automn;
	cout << "Enter Automn month first letter: " << endl;
	cin >> automn;
	switch (automn) {
	case 's':
	case 'S':
		cout << "September" << endl;
		break;
	case 'o':
	case 'O':
		cout << "October" << endl;
		break;
	case 'n':
	case 'N':
		cout << "November" << endl;
		break;
	default:
		cout << "incorrect input" << endl;
		break;
	}

	//simple calculator with char 
	cout << "Enter a, b: ";
	cin >> a >> b;
	char op = ' ';
	cout << "Enter operation +, -, *, /: " << endl;
	cin >> op;
	if (b == 0) {
		cout << "b cannot be 0" << endl;
	}
	else {
		switch (op)
		{
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		default:
			cout << "Incorrect operation" << endl;
			result = 0;
			break;
		}
		cout << "Result = " << result << endl;
	}
}