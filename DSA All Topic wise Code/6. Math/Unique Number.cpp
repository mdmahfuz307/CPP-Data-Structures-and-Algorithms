// https://youtu.be/1qrlDngStmU?si=9PL1XfS6td4O4oJU
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v{2,3,4,2,3,5,6,7,8};
    sort(v.begin(),v.end());

    int un = unique(v.begin(),v.end()) - v.begin();
    cout<<un<<endl;

    for(int i=0;i<un;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
