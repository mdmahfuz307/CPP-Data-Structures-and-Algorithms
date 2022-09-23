#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a = 32;
    int b = 12;
    int c;

    c = a & b;
    cout << c << endl;

    c = a | b;
    cout << c << endl;

    c = a ^ b;
    cout << c << endl;

    getch();
}