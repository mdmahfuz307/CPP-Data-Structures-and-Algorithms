// Swap,sort,reverse,Iteration
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v1;
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(10);
    v1.push_back(40);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(1);
    v2.push_back(3);

    cout << "Before swaping" << endl;
    for (int i = 0; i < v1.size();i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;


    //Swap
    swap(v1, v2);

    cout << "After Swaping" << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;




    cout << "Before Sorting" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;


    //Sorting
    sort(v1.begin(), v1.end());

    cout << "After Sorting" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;




    cout << "Before Reverse" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Reverse
    reverse(v1.begin(), v1.end());

    cout << "After Reverse" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;



    //Iteration
    vector<int>::iterator it;
    for (it = v2.begin(); it != v2.end(); it++)
    {
        cout <<"Iterations are -> "<< *it << endl;
    }
    
    return 0;
}