#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubbleSort(vector<int>& nums) {
    int n=nums.size();
    int temp=0;
    bool isSwap;
    for ( int i = 0; i <n-1; i++)
    {
        isSwap=false;
        for (int j = 0; j < n-i-1; j++)
        {
           if(nums[j]<nums[j+1]){
            temp=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
            isSwap=true;
            
           }
        }

        if(!isSwap) break ;
        
    }
    
    
    
}
 int hIndex(vector<int>&nums){

    sort(nums.begin(),nums.end(),greater<int>());
   // bubbleSort(nums);
    for(int i=0; i<nums.size();i++){
        if(nums[i]<i+1) return i ;        

    }
    return nums.size();
 }
 
int main(){
    vector<int> nums={3,0,6,1,5};
    int citation=hIndex(nums);
    cout<<citation;
    

    return 0;
}