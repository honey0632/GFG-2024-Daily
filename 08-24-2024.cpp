// 0 - 1 Knapsack Problem
// https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int fun(int i ,int W,vector<int> wt, vector<int> val, int n ,vector<vector<int>> &dp){
        if(i==0||W==0) {
            if(wt[0]<=W) return  val[0];
            return 0;
        }
        
        if(dp[i][W]!=-1) return dp[i][W];
        
        int take =0;
        
        int nottake = 0+ fun(i-1,W,wt,val,n,dp);
        if(W>=wt[i]) take = val[i] + fun(i-1,W-wt[i],wt,val,n,dp);
        
       return dp[i][W] = max(take,nottake);
      
    }
    
    int knapSack(int W, vector<int> wt, vector<int> val) 
    { 
    vector<int> pre(W+1);
    // vector<int> cur(W+1); 
    // vector<vector<int>> dp(n,vector<int>(W+1,0)); 
    int n = val.size();
    for(int i = wt[0]; i<=W;i++) pre[i] = val[0];
    
    for(int i=1 ;i<n;i++){
        for(int w = W;w>=0;w--){
            int take =0;
            
            int nottake = 0+ pre[w];
            if(w>=wt[i]) take = val[i] + pre[w-wt[i]];
            
            pre[w] = max(take,nottake);
        }
        // pre = cur;
    }
       return pre[W];
    }
};


int main () {
    
     return 0;
}