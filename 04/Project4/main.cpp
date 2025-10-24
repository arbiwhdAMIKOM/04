#include <iostream>
#include <cmath>
#include <ctime>
#include <Windows.h>
using namespace std;

int main()
{
	cout << "=======================================" << endl;
	cout << "=======================================" << endl;
	cout << "Tarbiyah Wahidiyah 25.11.6568" << endl;
	cout << "=======================================" << endl;
	cout << "=======================================\n" << endl;

	srand(time(NULL));

	while (true)
	{
		int diceRoll = rand() % 10 + 1;
		int guess;
		cout << "Guess a number between 1 and 10: ";
		cin >> guess;
		if (guess == diceRoll)
		{
			cout << "Coorrect!" << endl;
			Beep(700, 400); Beep(1000, 500);
		}
		else
		{
			cout << "Sorry, the correct number was " << diceRoll << "." << endl;
			Beep(1000, 1000);
		}


		system("pause");
	}

	return 0;
}