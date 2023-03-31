#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    array<int, 5> a = {1, 2, 3, 4, 5};
    // "reverse(a, b)" function reverses a container from iterator a to iterator b-1
    reverse(a.begin(), a.end());                  // a = {5, 4, 3, 2, 1}
    reverse(a.begin(), a.begin() + 3);            // a = {3, 4, 5, 2, 1}
    sort(a.begin(), a.end());                     // a = {1, 2, 3, 4, 5}
    cout << count(a.begin(), a.end(), 1) << "\n"; // 1
    
    return 0;
}