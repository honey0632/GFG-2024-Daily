// Word Break
// https://www.geeksforgeeks.org/problems/word-break1352/1

#include<bits/stdc++.h>
using namespace std;

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    bool solve(int i, string &A, set<string> &s, vector<int> &dp){
        int n = A.length();
        if(i == n) return true;
        if(dp[i] != -1) return dp[i];
        
        bool result = false;
        string str = "";
        for(int j=i; j<n; j++){
            str+= A[j];
            if(s.find(str) != s.end()) result = result | solve(j+1, A, s, dp);
        }
        
        return dp[i] = result;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        set<string> s(B.begin(), B.end());
        int n = A.length();
        
        vector<int> dp(n, -1);
        return solve(0, A, s, dp);
    }
};

int main () {
    
     return 0;
}