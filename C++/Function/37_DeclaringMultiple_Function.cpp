#include<iostream>
#include <conio.h>
using namespace std;

void addition(int, int);
void subtraction(int, int);
void division(int, int);

int main(){
    addition(50, 50);
    subtraction(50, 80);
    division(40, 60);

    cout << "All Function Have Called" << endl;
    getch();
}

void addition(int a,int b){
    int sum = a + b;
    cout << "Sum = " << sum << endl;
}

void subtraction(int a, int b){
    int result = a - b;
    cout << "Subreation = " << result<< endl;
}

void division(int a, int b){
    int result = a / b;
    cout << "division = " << result << endl;
}
