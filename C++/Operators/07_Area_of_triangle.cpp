#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double base, height, area;
    cout << "Enter base:";
    cin >> base;

    cout << "Enter Height:";
    cin >> height;
    area = 0.5 / 2 * base * height;

    cout << "Area of triangle = " << area;

    getch();
}