#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout << "Enter 2 numbers :";
    cin >> num1 >> num2;

    int sum = num1 + num2;
    cout << "sum is :" << sum;

    int sub = num1 - num2;
    cout << "Subtraction is :" << sub;
    cout << endl;

    int mul = num1 * num2;
    cout << "Multiplication is :" << mul;
    cout << endl;

    int div = (float)num1 / num2; // Type castine
    cout << "Division is :" << div;
    cout << endl;

    int rem = num1 % num2;
    cout << "Multiplication is :" << rem;
    cout << endl;

    return 0;
}