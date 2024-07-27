// Form a palindrome
// https://www.geeksforgeeks.org/problems/form-a-palindrome1455/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countMin(string s){
    //complete the function here
        int n=s.length();
        
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==s[n-j]){
                    dp[i][j] =dp[i-1][j-1] +1;
                }
                else dp[i][j] =max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
        return n-dp[n][n];
    }
};

int main () {
    
     return 0;
}