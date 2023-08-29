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
    int size = 3;
    int a[size][size];
    int row, col, sum;
    cout << "Please Enter elements in array of size " << size << "x" << size << endl
         << endl;

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            cin >> a[row][col];
        }
    }

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    for (row = 0; row < size; row++)
    {
        sum = 0;
        for (col = 0; col < size; col++)
        {
            sum = sum + a[row][col];
        }
        cout << "Sum of elements of Row: " << row + 1 << " is " << sum << endl;
    }

    for (col = 0; col < size; col++)
    {
        sum = 0;
        for (row = 0; row < size; row++)
        {
            sum += a[row][col];
        }
        cout << "Sum of elements of Column: " << row + 1 << " is " << sum << endl;

        return 0;
    }
}
