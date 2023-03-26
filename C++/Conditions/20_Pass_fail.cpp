#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int mark;
    
    cout << "Enter your marks :";
    cin >> mark;
    
    if (mark>=33){
        cout << "Pass";
    }
    else{
        cout << "Fail";
    }
    getchar();
}