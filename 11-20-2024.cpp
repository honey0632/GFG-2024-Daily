// 
// Majority Element II
// https://www.geeksforgeeks.org/problems/majority-vote/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int func(int ind, int buy, vector<int> &prices, vector<vector<int>>&dp){
      if(ind ==prices.size()) return 0;
      if(dp[ind][buy]!=-1) return dp[ind][buy];
      int pick = 0,notpick=0;
      
       notpick = func(ind+1,0,prices,dp);

      // if `buy` is `0` it means we don't hold a stock 

      if(buy==0) pick =  -prices[ind] + func(ind+1,1,prices,dp);
      else if(buy ==1) pick += prices[ind]+func(ind,0,prices,dp); // value of `ind` is not increased since, the stock can be bought as well
      
      
      return dp[ind][buy] = max(pick,notpick);
  }
  
    int maximumProfit( vector<int> &prices) {
        // code here
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        return func(0,0,prices,dp);
        
    }
};

int main() {
    
     return 0;
}