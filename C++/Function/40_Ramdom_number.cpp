#include<iostream>
#include <cstdlib>
#include<conio.h>
using namespace std;



int main()
{
    for (int i = 1; i <= 5;i++){
    int randomNumer = rand()%5 + 1;
    cout << "Random Number =" << randomNumer << endl;
    }
    getch();
}