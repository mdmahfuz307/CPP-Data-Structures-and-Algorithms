
//https://codeforces.com/contest/44/problem/A


#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef double dl;

const ll mx = 1e5 + 123;
int ar[mx];

#define pb push_back
#define endl "\n"

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<pair<string,string>>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int Sz = unique(v.begin(),v.end()) -v.begin();
    cout<<Sz<<endl;


   return 0;
}
