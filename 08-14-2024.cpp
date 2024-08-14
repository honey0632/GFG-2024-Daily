// Longest Common Substring
// https://www.geeksforgeeks.org/problems/longest-common-substring1452/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2)
    {   
         int n = s1.length(), m = s2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int res=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] =dp[i-1][j-1] +1;
                    res = max(res,dp[i][j]);
                }
            }
        }
        return res;
    }
};

int main () {
    
     return 0;
}