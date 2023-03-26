#include <iostream>
#include <conio.h>
using namespace std;

int addition(int, int);

int main()
{
    int result = addition(50, 90);
    cout << result ;

    getchar();
}
int addition(int a,int b)
{
    int sum = a + b;
    return sum;
}

