//insert
#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   vector<int>v;

   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   v.push_back(6);
   v.push_back(7);
   v.push_back(8);
   v.push_back(9);

   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] <<" ";
   }
   cout << endl;

   //Target Value Delete
   v.erase(v.begin() + 0);
   for (int i = 0; i < v.size();i++)
   {
      cout<< v[i] <<" ";
   }
   cout << endl;

   //6-9 value are delete
   v.erase(v.begin() + 4,v.end());
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
   }
   cout << endl;



   //insert value
   v.insert(v.begin(),1);
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
   }
   cout << endl;


   // insert terget index and value
   v.insert(v.begin() + 3, 1);
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
   }
   cout << endl;


   // insert terget index and add same value many time
   v.insert(v.begin() + 3,5,1);
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
   }

   return 0;
}