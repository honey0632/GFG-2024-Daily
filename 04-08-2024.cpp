// Optimal Strategy For A Game
// https://www.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1

#include<bits/stdc++.h>
using namespace std;

#define ll long long
//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    int dp[1001][1001];
    long long solve(int n,int arr[],int i,int j){
        // base case
        if(i>j){
            return 0;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        ll take=arr[i]+min(solve(n,arr,i+2,j),solve(n,arr,i+1,j-1));
        ll notTake=arr[j]+min(solve(n,arr,i+1,j-1),solve(n,arr,i,j-2));
        
        ll ans=max(take,notTake);
        return dp[i][j]=ans;
        
    }
    
    long long maximumAmount(int n, int arr[]){
        // Your code here
        memset(dp,-1,sizeof(dp));
        return solve(n,arr,0,n-1);
    }
};

int main () {
    
     return 0;
}