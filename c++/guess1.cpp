#include <iostream>
using namespace std;

int main()
{
	int guess;
	int answer;

	srand(time(NULL));
	answer = rand() % 99 + 1;
	cout << answer << endl;
	do
	{
		cout << "I am thinking of a number between 1 and 99, Guess me" << endl;
		cin >> guess;
		if (guess < answer)
		{
			cout << "your guess is TOO LOW" << endl;
		}
		else
		{
			cout << "try again" << endl;
		}

		if (guess > answer)
		{
			cout << "your guess is TOO HIGH" << endl;
		}
		else
		{
			cout << "try again" << endl;
		}
		if (guess == answer)
		{
			cout << "congrats! the number is " << answer << endl;
		}
	} while (guess != answer);

	return 0;
}