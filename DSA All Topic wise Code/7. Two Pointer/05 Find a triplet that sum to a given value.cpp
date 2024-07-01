//05 Find a triplet that sum to a given value
#include <bits/stdc++.h>
using namespace std;

void solve(int ar[],int n,int x)
{
    for(int i = 0;i<n;i++)
    {
        int l = i+1;
        int r = n-1;
        while(l<r)
        {
            int sum = ar[i]+ar[l]+ar[r];
            if(sum==x)
            {
                cout<<"("<<ar[i]<<","<<ar[l]<<","<<ar[r]<<")"<<endl;
            }
            if(sum>x) r--;
            else l++;
        }   
    }
}

int main()
{
    int n;
    cin>>n;
    int ar[n+3];

    for(int i = 0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);

    int x;
    cin>>x;
    solve(ar,n,x);

    return 0;
}

