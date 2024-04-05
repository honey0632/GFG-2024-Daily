// Strictly Increasing Array
// https://www.geeksforgeeks.org/problems/convert-to-strictly-increasing-array3351/1

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:

    int min_operations(vector<int>& nums){
        vector<int>dp(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>=(nums[j]+(i-j))){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        int mx=1;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,dp[i]);
        }
        
        return nums.size()-mx;
    }
};

int main () {
    
     return 0;
}