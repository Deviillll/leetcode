#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;         // pointer for nums1's valid elements
    int j = n - 1;         // pointer for nums2
    int k = m + n - 1;     // pointer for final position in nums1

    // Step 1: Compare from the back and fill nums1
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // Step 2: If nums2 has leftover elements
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

// Test code
int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    // Output the result
    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
