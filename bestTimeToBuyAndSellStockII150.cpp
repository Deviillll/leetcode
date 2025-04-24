#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &nums)
{
    int totalPrice=0;
    for(int i=1; i<nums.size();i++){
        if(nums[i]>nums[i-1]){
            totalPrice+=nums[i]-nums[i-1];
        }
    }
    return totalPrice;
}


int main()
{
    vector<int> nums = {7,1,5,3,6,4};
    int profit = maxProfit(nums);
    cout << profit;

    return 0;
}