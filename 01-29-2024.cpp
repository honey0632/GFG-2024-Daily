// Count digit groupings of a number
// https://www.geeksforgeeks.org/problems/count-digit-groupings-of-a-number1520/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
    int dp[101][1001];
    int solve(string &str,int sum,int index){
        if(index>=str.size()) return 1;
        if(dp[index][sum]!=-1) return dp[index][sum];
        int sum1=0,ans=0;
        for(int j=index;j<str.size();j++){
            sum1+=(str[j]-'0');
            if(sum1>=sum){
                ans+=solve(str,sum1,j+1);
            }
        }
        return dp[index][sum]=ans;
    }
    int TotalCount(string str){
        int sum=0,i=0;
        memset(dp,-1,sizeof(dp));
        return solve(str,sum,i);
    }

};


int main () {
  
   return 0;
}