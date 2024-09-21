#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {5,12,62,1,-15,-24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i =0;i<size;i++)
    {
        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);

        // if(nums[i] <smallest)
        // {
        //     smallest = nums[i];
        // }
    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;

    return 0;
}
