#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
	cout << "=======================================" << endl;
	cout << "=======================================" << endl;
	cout << "Tarbiyah Wahidiyah 25.11.6568" << endl;
	cout << "=======================================" << endl;
	cout << "=======================================\n" << endl;

	cout << "Shape Area Calculator" << endl;
	cout << "1. Triangle" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Circle" << endl;
	cout << "Choose a shape (1-3): ";

	int menuChoice;
	cin >> menuChoice;

	double area = 0;

	system("cls");
	switch (menuChoice)
	{
	case 1:
	{
		double base, height;
		cout << "Base: ";
		cin >> base;
		cout << "Height: ";
		cin >> height;
		area = 0.5 * base * height;
		cout << "Area : " << area << endl;
		break;
	}
	case 2:
	{
		double length, width;
		cout << "Length: ";
		cin >> length;
		cout << "Width : ";
		cin >> width;
		area = length * width;
		cout << "Area : " << area << endl;
		break;
	}
	case 3:
	{
		const double PI = 3.14159;
		double radius;
		cout << "Radius: ";
		cin >> radius;
		area = PI * radius * radius;
		cout << "Area : " << area << endl;
		break;
	}
	default:
		cout << "Invalid choice." << endl;
		break;
	}

	system("pause");
	return 0;
}