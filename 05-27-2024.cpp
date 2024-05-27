// Longest subsequence-1
// https://www.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int solve(int i,int prev,vector<int>&a,int n,vector<vector<int>> &dp){
        if(i>=n){
            return  0;
        }
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int not_take=solve(i+1,prev,a,n,dp);
        int take=0;
        if(prev==-1 || abs(a[i]-a[prev])==1){
            take=1+solve(i+1,i,a,n,dp);
        }
        return dp[i][prev+1] = max(take,not_take);
        
    }
    int longestSubseq(int n, vector<int> &a) {
        // code here
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return solve(0,-1,a,n,dp);
    }
};

int main () {
    
     return 0;
}