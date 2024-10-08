// Minimum number of deletions and insertions
// https://www.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
		

	public:
	int lcs(int n, int m, string s1, string s2)
    {
        // vector<vector<int>> dp(n,vector<int>(m,0));
        vector<int> prev(m,0), cur(m,0);
        for(int i=0;i<m;i++){
            if(i>0 &&prev[i-1]==1) prev[i]=1;
            else if(s1[0] == s2[i]) prev[i]=1;
            else prev[i]=0;
            
        }
        
        for(int i = 1;i<n;i++){
            for(int j=0;j<m;j++){
                int take=0;
                int n1 = prev[j];
                int n2 = cur[j-1];
                
                // cout<<n2<<endl;
                if(s1[i]==s2[j]) take = 1 + prev[j-1];
                
                cur[j] = max(take, max(n1,n2));
            }
            prev = cur;
        }
        return prev[m-1];
    } 
	int minOperations(string s1, string s2) 
	{ 
	    int n = s1.length();
	    int m = s2.length();
	    int x = lcs(n,m,s1,s2);
	    
	    return n+m-2*x;
	    
	} 
};

int main () {
    
     return 0;
}