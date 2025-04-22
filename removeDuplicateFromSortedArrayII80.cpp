#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0; // If the array is empty, return 0
    
    int k = 2; // Start at 1 because the first element is always unique
    for (int i = 2; i < nums.size(); i++) {
        if (nums[i] != nums[k - 2]) {  // If the current number is not the same as the previous
            nums[k] = nums[i];  // Move it to the next unique position
            k++;  // Increment the position for the next unique element
        }
    }
    return k;  // Return the number of unique elements
}

int main() {
    vector<int> nums = {1, 1,1, 2,3,3,3,5}; // Example input array
    int k = removeDuplicates(nums);
    
    // Output the result
    cout << "Number of unique elements: " << k << endl;
    cout << "Unique elements in the array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
