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
#define nir(arr)            \
    {                       \
        for (auto &x : arr) \
            cin >> x;       \
    }
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

    int first =0,second=1,count=0,fibo,n;
    cin>>n;

    while(count<n){
        if(count<=1)
        {
            fibo=count;
        }
        else{
            fibo = first+second;
            first = second;
            second=fibo;
        }
        cout<<fibo<<endl;
        count++;
    }

    return 0;
}