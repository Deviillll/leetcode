#include<iostream>
#include<vector>
using namespace std;


// buy stock at low price
int BuyStock(vector<int>&nums){
    int lowPrice=nums[0];
    int bestPrice=0;
    int profit=0;
    for(int num:nums){
        
        if(num<lowPrice){
          lowPrice=num;
        }
         profit=num-lowPrice;
        if(profit>bestPrice){
            bestPrice=profit;
        }



    }


    return bestPrice;

}


int main(){
    vector<int> nums = {7,6,4,3,1};
    int bestPrice=BuyStock(nums);
    cout<<bestPrice;




    return 0;
}