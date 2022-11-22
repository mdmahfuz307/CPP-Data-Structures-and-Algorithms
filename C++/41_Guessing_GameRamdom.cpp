#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    while(1)
    {
        int guessNumber, randomNumber;
        cout << "Enter your guess Between Number 1 to 5 : ";
        cin >> guessNumber;

        randomNumber = 1 + rand() % 5;

        if (guessNumber == randomNumber)
        {
            cout << "You Have Won" << endl
                 << endl;
        }

        else
        {
            cout << "You Have Lost.Try again" << endl;
            cout << "Random Number Was :" << randomNumber << endl
                 << endl;
        }
    }
    getch();
}