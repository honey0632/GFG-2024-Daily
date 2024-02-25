// Reach a given score
// https://www.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    // Complete this function
    long long int count(long long int n)
    {
    	vector<long long int> dp(n+1,0);
    	dp[0]=1;
        for(int i=3;i<=n;i++)
        dp[i]+=dp[i-3];   
        for(int i=5;i<=n;i++)
        dp[i]+=dp[i-5];   
        for(int i=10;i<=n;i++)
        dp[i]+=dp[i-10];
    	
    	return dp[n];
    }
};

int main () {
    
     return 0;
}