//https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
#include <bits/stdc++.h>
using namespace std;

typedef double dl;
typedef long long ll;
typedef vector<int> v;
typedef vector<ll> vll;
typedef map<int, int> mp;
typedef pair<int, int> ii;
typedef unsigned long long ull;

#define fi first
#define endl "\n"
#define se second
#define pb push_back
#define MOD 1000000007
#define maximum INT_MAX
#define sqr(a) ((a) * (a))
#define all(n) (n).begin(), (n).end()
#define rall(a) (a).rbegin(), (a).rend()
#define mas(n) for (int i = 0; i < n; i++)
#define nir(arr) {for (auto & x: arr) cin >>x;}
#define PI 3.1415926535897932384626433832795028841971

#define max3(a, b, c) max(c, max(a, b))
#define min3(a, b, c) min(c, min(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))

const ll mx = 1e5 + 123;
ll ar[mx];

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++)        //InPut :- 1 3 4 5 6
    {
        cin>>arr[i];
    }

    int sum = 0;
    for(int i = 0;i<n-1;i++)
    {
        sum += arr[i];
    }
    int ans = n*(n+1)/2;
    
    cout<<ans - sum;            // OutPut :- 2

    return 0;
}
