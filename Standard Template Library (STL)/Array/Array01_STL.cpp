#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    array<int, 10> a={1,2,3,4,5,6,7,8,9,10}; // array of integers of size 10
    // note values are not initialsized and can be random like arrays in C
    
    //Size
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd Index -> " << a.at(2) << endl;
    cout << "Element or not-> " << a.empty() << endl;

    cout << "First Element-> " << a.front() << endl;
    cout << "Last Element-> " << a.back() << endl;


    array<string, 10> b;                    // array of strings
    array<array<int, 10>, 10> c;            // 2D array
    array<array<array<int, 10>, 10>, 10> d; // 3D array
    // their can be more dimensions :)

    return 0;
}