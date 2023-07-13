#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the number of rows"<<endl;
    cin>>rows;
    int i=1;
    while(i<=rows){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}