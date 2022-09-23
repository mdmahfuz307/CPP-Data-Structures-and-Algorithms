#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num1,num2;
    
    cout << "Enter 2 integer :";
    cin >> num1>>num2;
    
    if (num1>num2){ //small number num1<num2
        cout << "Large number : "<<num1;
    }
    else{
        cout << "Large Number : "<<num2;
    }
    getchar();
}