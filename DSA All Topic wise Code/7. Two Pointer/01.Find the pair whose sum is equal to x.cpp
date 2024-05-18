//https://youtu.be/mTjd2RtOOYA?si=9aidzKyHCusLkRm3
#include <bits/stdc++.h>
using namespace std;

bool solve(int ar[],int x,int n)
{
    int i =0;
    int j = n-1;
    while(i<=j)
    {
        int sum = ar[i]+ar[j];
        if(sum==x)return true;
        if(sum>x)j--;
        else i++;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    int ar[n+3];
    for(int i =0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);

    int x;
    cin>>x;

    bool ans = solve(ar,x,n);
    if(ans==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
