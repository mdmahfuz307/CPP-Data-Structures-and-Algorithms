#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num;
    cout << "Enter any integer :";

    cin >> num;

    if(num>0){
        cout << "Positive";
    }
    
    else if (num<0){
        cout << "Negative";
    }
    
    else
    {
        cout << "Zero";
    }
    getchar();
}