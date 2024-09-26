#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans;
    int n = nums.size();

    int i = 0,j = n - 1;

    while(i<j){
        int pairSUm = nums[i] + nums[j];
        if(pairSUm > target){
            j--;
        } else if(pairSUm < target){
            i++;
        } else{
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        if (!ans.empty()) break;
    }

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
