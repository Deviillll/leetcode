#include <iostream>
using namespace std;
#include <vector>

vector<int> twoSum(vector<int> &nums, int target)
{

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main()
{

    vector<int> nums = {2, 5, 5, 11};
    int target = 10;
    vector<int> answer = twoSum(nums, target);

    for (int num : answer)
    {
        cout << num;
    }

    return 0;
}