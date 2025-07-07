// 2. Number Guessing Game
// o Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.
#include <iostream>
using namespace std;

int main()
{
    int randomNumber = (rand() % 100) + 1;
    int guess, attempts = 0;

    while (guess != randomNumber)
    {
        cout << "Enter number btween 1 to 100: ";
        cin >> guess;

        if (guess > 100 || guess <= 0)
        {
            cout << "Invalid number" << endl;
        }

        else if (guess > randomNumber)
        {
            cout << "Too heigh" << endl;
            attempts++;
        }
        else if (guess < randomNumber)
        {
            cout << "Too low" << endl;
            attempts++;
        }
        else
        {
            cout << "\nCogratulation. You got the number" << endl;
        }
    }
    cout << "Your attempt is: " << attempts << endl;
}