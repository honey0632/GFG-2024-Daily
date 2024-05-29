// Geek and its Game of Coins
// https://www.geeksforgeeks.org/problems/geek-and-its-game-of-coins4043/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findWinner(int n, int x, int y) {
        vector<int> dp(n+1,0);
        dp[1]=1;
        for(int i=2;i<n+1;i++){
            if(dp[i-1]==0)dp[i]=1;
            else if(i-x>=0 && dp[i-x]==0)dp[i]=1;
            else if(i-y>=0 && dp[i-y]==0)dp[i]=1;
            else dp[i]=0;
        }
        return dp[n];
    }
};

int main () {
    
     return 0;
}

