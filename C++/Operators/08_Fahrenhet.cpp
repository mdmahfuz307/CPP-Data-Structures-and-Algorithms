#include <iostream>
using namespace std;
int main()
{
    double farn, cels;

    cout << "Enter celsius :";
    cin >> cels;
    farn = 1.8 * cels + 32;
    cout << "fahrenhet = " << farn;
    return 0;
}