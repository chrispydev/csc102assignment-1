#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    /*int guessNumber =69;
   int Userinput;*/

    int iSecret, iGuess;

    /* initialize random seed: */
    srand(time(0));

    /* generate secret number between 1 and 99: */
    iSecret = rand() % 99 + 1;

    cout << "I am thinking of a number between 1 and 99" << endl;

    do
    {

        cout << "Enter a guess number: ";
        cin >> iGuess;

        if (iGuess < iSecret)
        {
            cout << "Your Guess number is TOO LOW" << endl;
        }
        else if (iGuess > iSecret)
        {
            cout << "Your Guess number is TOO HIGH" << endl;
        }
        else if (iGuess == iSecret)
        {
            cout << "Congrat! The number was: " << iSecret << endl;
        }
    } while (iGuess != iSecret);

    return 0;
}