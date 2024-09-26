#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans;
    int n = nums.size();

    // Iterate through the array to find the pair
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);  // Push the index i
                ans.push_back(j);  // Push the index j
                break;             // Exit loop once pair is found
            }
        }
        if (!ans.empty()) break;  // Stop the outer loop if a pair is found
    }

    // Check if a pair was found and print the indices
    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
