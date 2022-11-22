#include <iostream>
#include <conio.h>
using namespace std;

void display(int *num)
{
    *num = 20;
}

int main()
{
    int x = 10;
    cout << "Befor calling the function x = " << x << endl;
    display(&x);
    cout << "After calling the function x = "<<x<<endl;

    getch();
}