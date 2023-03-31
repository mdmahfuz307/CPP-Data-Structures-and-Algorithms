//push_back,size,front,back,clear,empty,pop_back,erase
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;

    cout << "capacity -> " << v.capacity() << endl;
    
    //push_back() useing value push
    v.push_back(1);
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(4);
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(5);
    cout << "capacity -> " << v.capacity() << endl;
    cout << "size -> " << v.size() << endl;  //Vector size


    //Vector Print
    cout << "Element at 2nd Index -> " << v.at(2) << endl;  //Element print
    // cout<<v[0]<<"";     Element print 

    cout << "First Element-> " << v.front() << endl;  //Vector 1st value print
    cout << "Last Element-> " << v.back() << endl;    //Vector Last value print


    //Eraser using vector any value deleted
    v.erase(v.begin() + 4);

    //Print all Vector Elements
    cout << "before pop" << endl;
    for(int i:v){
        cout << i << "";
    }
    cout << endl;


    //pop_back useing the Last value delete 
    v.pop_back();
    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << "";
    }
    cout << endl;

    cout << "Before clear size-> " << v.size() << endl;


    v.clear();  //All value clear
    cout << "After clear size -> " << v.size() << endl;


    //vector all value Empty or not
    if(v.empty())
        cout << "Empty" << endl;
        else
        cout << "Not Empty" << endl;
        
    return 0;
}