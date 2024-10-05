// Kadanes Algorithm
// https://leetcode.com/problems/maximum-subarray/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[7] = {5,4,-1,7,8};

    int maxSum = INT_MIN,currSum = 0;
    
    for(int val : arr){
        currSum += val;
        maxSum = max(currSum,maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Max SubArray Sum = "<<maxSum<<endl;
    return 0;
}
