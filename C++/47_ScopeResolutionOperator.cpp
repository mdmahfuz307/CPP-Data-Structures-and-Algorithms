#include<iostream>
#include<conio.h>
using namespace std;

int x = 20; //global

int main()
{
    int x = 10;  //local
    cout << :: x << endl;
    getch();
}