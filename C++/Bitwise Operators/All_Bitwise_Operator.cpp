#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int mx = 1e5 + 123;

typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef double dl;

#define pb push_back
#define endl "\n"
#define ar array
int ar[mx];
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 4;
    int b = 6;

    cout << "a&b" << (a & b) << endl; //And
    cout << "a|b" << (a | b) << endl; //Or
    cout << "~b" << ~a << endl;       //Not
    cout << "a^b" << (a ^ b) << endl; //XOR

    return 0;
}
