#include <iostream>
using namespace std;
int main(){

    int num1 = 10;
    int num2 =30;

    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    int sum = *p1 + *p2;

    cout << sum;

    return 0;
}