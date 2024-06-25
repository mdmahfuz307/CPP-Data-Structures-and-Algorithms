//// https://youtu.be/1qrlDngStmU?si=9PL1XfS6td4O4oJU
#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    vector<int>v{2,3,4,2,3,5,6,7,8};
    cout<<*min_element(v.begin(),v.end())<<endl;
    cout<<*max_element(v.begin(),v.end())<<endl;
    */
    vector<int>v = {2,34,23,432,32,52,1,34};
    vector<int>::iterator it = max_element(v.begin(),v.end()); //min_element(v.begin(),v.end());
    cout<<*it<<endl;

    return 0;
}
