#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    array<int, 5> a = {1, 10, 5, 3, 2};
    array<int, 5>::iterator it = a.begin();
    // note array<int, 5>::iterator is too long
    // we usually use auto here
    cout << *it << "\n";                 // 1
    cout << *(it + 3) << "\n";           // 3
    cout << *a.end() << "\n";            // something random
    cout << *(a.end() - 1) << "\n";      // 2
    cout << a.end() - a.begin() << "\n"; // 5

    return 0;
}