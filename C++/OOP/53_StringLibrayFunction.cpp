#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
    char name1[11] = "Mahfuz";
    char name2[10];
    
    int len = strlen(name1); 
    cout << "Lenth of string = " << len <<endl;

    strcpy(name2, name1);
    cout << "name2 =" << name2;

    getch();
} 