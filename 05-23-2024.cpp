// K-Palindrome
// https://www.geeksforgeeks.org/problems/find-if-string-is-k-palindrome-or-not1923/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int LCS(string &str,string &S,int i,int j,vector<vector<int>>&dp){
        
        if(i>=str.length() || j>=S.length())
        return 0;
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        int ans=0;
        
        if(str[i]==S[j])
        ans=max(ans,1+LCS(str,S,i+1,j+1,dp));
        else{
            ans=max(ans,LCS(str,S,i+1,j,dp));
            ans=max(ans,LCS(str,S,i,j+1,dp));
        }
        return dp[i][j]=ans;
    }
    int kPalindrome(string str, int n, int k)
    {
        string S=str;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        reverse(S.begin(),S.end());
        int res=LCS(str,S,0,0,dp);
        return n-res<=k;
    }
};

int main () {
    
     return 0;
}