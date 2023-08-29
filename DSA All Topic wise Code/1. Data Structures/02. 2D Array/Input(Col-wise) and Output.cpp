#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> v;
typedef long long ll;
typedef vector<ll> vll;
typedef double dl;

const ll mx = 1e5 + 123;
int ar[mx];

#define sqr(a) ((a) * (a))
#define pb push_back
#define endl "\n"

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
char a[mx];
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
 
    // Create 2d Array
    int ar[3][4];

    //Taking input -> Col wise input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ar[j][i];
        }
    }


    //Print 
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 4; j++)
        {
            cout<< ar[i][j]<<" ";
        }
        cout << endl;
    }


    return 0;
}
