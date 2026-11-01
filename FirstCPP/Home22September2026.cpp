#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// Exercise 1: Positive, Negative, or Zero
	{
		int num;
		cout << "[Ex 1] Enter an integer: ";
		cin >> num;

		if (num > 0)
			cout << "The number is positive." << endl;
		else if (num < 0)
			cout << "The number is negative." << endl;
		else
			cout << "The number is zero." << endl;
	}

	// Exercise 2: Even or Odd
	{
		int num;
		cout << "[Ex 2] Enter an integer: ";
		cin >> num;

		if (num % 2 == 0)
			cout << "The number is even." << endl;

		else
			cout << "The number is odd." << endl;
	}

	// Exercise 3: Larger of Two Numbers
	{
		int a, b;
		cout << "[Ex 3] Enter two integers: ";
		cin >> a >> b;

		if (a > b)
			cout << "The larger number is: " << a << endl;
		else if (b > a)
			cout << "The larger number is: " << b << endl;
		else
			cout << "Both numbers are equal." << endl;
	}

	// Exercise 4: Grade Calculator
	{
		int score;
		cout << "[Ex 4] Enter student score (0-100): ";
		cin >> score;

		if (score < 0 || score > 100)
			cout << "Invalid score! Must be between 0 and 100." << endl;
		else if (score >= 90)
			cout << "Grade: A" << endl;
		else if (score >= 80)
			cout << "Grade: B" << endl;
		else if (score >= 70)
			cout << "Grade: C" << endl;
		else if (score >= 60)
			cout << "Grade: D" << endl;
		else
			cout << "Grade: F" << endl;
	}

	// Exercise 5: Age Group Categorization
	{
		int age;
		cout << "[Ex 5] Enter age: ";
		cin >> age;

		if (age < 0)
			cout << "Invalid age!" << endl;
		else if (age <= 12)
			cout << "Category: Child" << endl;
		else if (age <= 17)
			cout << "Category: Teenager" << endl;
		else if (age <= 59)
			cout << "Category: Adult" << endl;
		else
			cout << "Category: Senior" << endl;
	}

	// Exercise 6: Largest of Three Numbers
	{
		int a, b, c;
		cout << "[Ex 6] Enter three integers: ";
		cin >> a >> b >> c;

		if (a >= b && a >= c)
			cout << "The largest number is: " << a << endl;
		else if (b >= a && b >= c)
			cout << "The largest number is: " << b << endl;
		else
			cout << "The largest number is: " << c << endl;
	}

	// Exercise 7: Divisibility Check
	{
		int num;
		cout << "[Ex 7] Enter an integer: ";
		cin >> num;

		if (num % 3 == 0 && num % 5 == 0)
			cout << "Yes (Divisible by both 3 and 5)" << endl;
		else
			cout << "No (Not divisible by both 3 and 5)" << endl;
	}

	// Exercise 8: Temperature Description
	{
		double temp;
		cout << "[Ex 8] Enter temperature in Celsius: ";
		cin >> temp;

		if (temp < 0)
			cout << "Cold" << endl;
		else if (temp <= 20)
			cout << "Cool" << endl;
		else if (temp <= 30)
			cout << "Warm" << endl;
		else
			cout << "Very Hot" << endl;
	}

	// Exercise 9: Discount Calculation
	{
		double price;
		cout << "[Ex 9] Enter original price: ";
		cin >> price;
		double finalPrice;

		if (price >= 100000) {
			finalPrice = price * 0.80;
			cout << "Applied 20% discount." << endl;
		}
		else if (price >= 50000) {
			finalPrice = price * 0.90;
			cout << "Applied 10% discount." << endl;
		}
		else {
			finalPrice = price;
			cout << "No discount applied." << endl;
		}
		cout << "Final price: " << finalPrice << endl;
	}

	// Exercise 10: Sort Two Numbers
	{
		int a, b;
		cout << "[Ex 10] Enter two integers: ";
		cin >> a >> b;

		if (a <= b)
			cout << "Ascending order: " << a << " " << b << endl;
		else
			cout << "Ascending order: " << b << " " << a << endl;
	}

	// Exercise 11: Leap Year Check
	{
		int year;
		cout << "[Ex 11] Enter a year: ";
		cin >> year;

		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			cout << year << " is a leap year." << endl;
		else
			cout << year << " is not a leap year." << endl;
	}

	// Exercise 12: Triangle Validity Check
	{
		double a, b, c;
		cout << "[Ex 12] Enter three side lengths: ";
		cin >> a >> b >> c;

		if (a + b > c && a + c > b && b + c > a)
			cout << "A triangle can be formed." << endl;
		else
			cout << "A triangle CANNOT be formed." << endl;
	}

	// Exercise 13: Type of Triangle
	{
		double a, b, c;
		cout << "[Ex 13] Enter three side lengths: ";
		cin >> a >> b >> c;

		if (a + b > c && a + c > b && b + c > a)
			if (a == b && b == c)
				cout << "Equilateral triangle." << endl;
			else if (a == b and b == c and a == c)
				cout << "Isosceles triangle." << endl;
			else
				cout << "Scalene triangle." << endl;
		else
			cout << "Invalid sides for a triangle!" << endl;
	}

	// Exercise 14: Coordinate Quadrant
	{
		double x, y;
		cout << "[Ex 14] Enter x and y coordinates: ";
		cin >> x >> y;

		if (x == 0 || y == 0)
			cout << "The point lies on an axis." << endl;
		else if (x > 0 && y > 0)
			cout << "Quadrant I" << endl;
		else if (x < 0 && y > 0)
			cout << "Quadrant II" << endl;
		else if (x < 0 && y < 0)
			cout << "Quadrant III" << endl;
		else
			cout << "Quadrant IV" << endl;
	}

	// Exercise 15: Simple Calculator
	{
		double num1, num2;
		char op;
		cout << "[Ex 15] Enter expression (e.g. 10 + 5): ";
		cin >> num1 >> op >> num2;

		if (op == '+')
			cout << "Result: " << num1 + num2 << endl;
		else if (op == '-')
			cout << "Result: " << num1 - num2 << endl;
		else if (op == '*')
			cout << "Result: " << num1 * num2 << endl;
		else if (op == '/')
			if (num2 != 0)
				cout << "Result: " << num1 / num2 << endl;
			else
				cout << "Error: Division by zero!" << endl;
		else
			cout << "Invalid operator!" << endl;
	}
}