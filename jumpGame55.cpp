#include<iostream>
#include<vector>
using namespace std;

bool jump(vector<int>&nums){
    int maxReach =0;
    for ( int i = 0;  i <nums.size() ; i++)
    {
        if(i>maxReach )return false;
        maxReach =max(maxReach,i+nums[i]);
    }
    return true;
    
}



int main(){

    vector<int> nums = {0,1};
   bool canJump=jump(nums);
   cout<<canJump;
  

  
    
    

    return 0;
}