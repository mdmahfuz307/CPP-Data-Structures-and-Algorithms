#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num;
    cout << "Enter any integer :";
    cin >> num;

    if (num%2==0){
        cout << "Even";
    }
    else{
    cout << "Odd";
    }

    getchar();
}