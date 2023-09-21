//https://www.codingninjas.com/studio/problems/reverse-of-a-number_624652?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int revNum = 0;
    while(n>0){
        int id = n % 10;
        revNum = (revNum * 10) + id;
        n = n / 10;
    }
    cout<<revNum;
}
