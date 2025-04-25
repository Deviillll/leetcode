#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int> &nums)
{

    int n = nums.size();
    int maxReach = 0;
    int jumpCount = 0;
    int currentIndex = 0;
    
    for(int i=0; i<n-1; i++){

        maxReach=max(maxReach,i+nums[i]);

        if(i==currentIndex){
            currentIndex=maxReach;
            jumpCount++;
        }
    }
    return jumpCount;

    
}

int main()
{
    vector<int> nums = {12,34,1};

    int jumpCount = jump(nums);
    cout << jumpCount;

    return 0;
}