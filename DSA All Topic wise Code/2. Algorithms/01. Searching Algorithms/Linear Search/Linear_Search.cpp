#include <iostream>

int main() {
    int arr[] = {2, 5, 7, 10, 15, 20};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bool found = false;
    int index = -1;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            found = true;
            index = i;
            break;
        }
    }
    
    if (found) {
        std::cout << "Element found at index " << index << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    
    return 0;
}
