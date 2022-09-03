#include <iostream>
using namespace std;
int main()
{
    double farn, cels;
   
    cout << "Enter Fahreheit :";
    cin >> farn;
    cels = (farn - 3) / 1.8;
    cout << "Celsius = " << cels;
    return 0;
}