// Sum of all substrings of a number
// https://www.geeksforgeeks.org/problems/sum-of-all-substrings-of-a-number-1587115621/1

#include<bits/stdc++.h>
using namespace std;

int main () {
    class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
         int n= s.size();
        int mod= 1000000007;
        
        vector<long long> ans(n,0);
        
        for(int i=0;i<n;i++){
            
            long long num= ((i+1)*(s[i]-'0')) %mod;
            ans[i]=num;
        }
        
        
        long long res=0;
        long long temp=0;
        for(int i=0;i<n;i++){
            temp= (temp*10+ ans[i])%mod;
            res=(res+temp)%mod;
        }
        
    
        return res;
    }

};

     return 0;
}