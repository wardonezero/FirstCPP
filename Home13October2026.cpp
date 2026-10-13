#include <iostream>

using namespace std;

int main() {
	//case 3 
	int k = 0;
	cout << "enter number of month 1-12: ";
	
	cin >> k;
	string season;

	switch (k)
	{
	case 1:
	case 2:
	case 12:
		season = "Winter";
		break;
	case 3:
	case 4:
	case 5:
		season = "Spring";
		break;
	case 6:
	case 7:
	case 8:
		season = "Summer";
		break;
	case 9:
	case 10:
	case 11:
		season = "Automn";
		break;
	default:
		season = "Incorrect input";
		break;
	}
	cout << season << endl;

	//case 4
	int month;
	cout << "enter number of month 1-12: " << endl;
	cin >> month;

	switch (k)
	{
	case 2://February
		cout << 28 << endl;
		break;
	case 1: // January 
	case 3: // March
	case 5: // May
	case 7: // July
	case 8: // August
	case 10:// October
	case 12:// Dectember
		cout << 31 << endl;
		break;
	case 4: // April
	case 6: // June 
	case 9: // September
	case 11:// November
		cout << 30 << endl;
	default:
		cout << "Incorrect input" << endl;
		break;
	}

	//case 6
	int result;
	int segment;
	cout << "enter length of segment : ";
	cin >> segment;

	switch (k)
	{
	case 1://decimeter
		result = segment / 10;
		break;
	case 2://kilometer 1km = 1000m 1m = 0.001km
		result = segment * 1000;
		break;
	case 3://meter
		result = segment;
		break;
	case 4://milimeter 1m = 1000mm
		result = segment / 1000;
		break;
	case 5://centimeter 1m = 100cm
		result = segment / 100;
		break;
	default:
		result = 0;
		cout << "Incorrect input" << endl;
		break;
	}
	cout << "result = " << result << endl;

	//case 7
	int mass;
	cout << "enter mass: ";
	cin >> mass;

	switch (k)
	{
	case 1://kilogram 
		result = mass;
		break;
	case 2://milligram
		result = mass / 1000000;
		break;
	case 3://gram
		result = mass / 1000;
		break;
	case 4://ton
		result = mass * 1000;
		break;
	case 5://center
		result = mass * 100;
		break;
	default:
		result = 0;
		cout << "Incorrect input" << endl;
		break;
	}
	cout << "result = " << result << endl;
}