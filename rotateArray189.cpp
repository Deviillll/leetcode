#include<iostream>
#include<vector>
using namespace std;

void reversing(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
// rotate the array to the right by k steps
void rotateRight(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k is greater than n
    reversing(nums, 0, n - 1); // Reverse the entire array
    reversing(nums, 0, k - 1); // Reverse the first k elements
    reversing(nums, k, n - 1); // Reverse the remaining elements
}


int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; // Example input array
    int k = 3; // Number of steps to rotate
    rotateRight(nums, k); // Rotate the array to the right by k steps

    // Output the result
    cout << "Array after rotating to the right by " << k << " steps: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

   
    return 0;
}