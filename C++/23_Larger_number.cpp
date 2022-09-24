#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1,num2,num3;

    cout << "Enter 3 numbers : ";
    cin >> num1>>num2>>num3;

    if(num1>num2 && num1>num3){
        cout <<"Large Number : "<< num1;
    }

    else if(num2 > num1 && num2 > num3)
    {
        cout << "Large Number : " << num2;
    }
    else{
        cout << "Large Number : " << num3;
    }

    getch();
}