// Print N-bit binary numbers having more 1s than 0s
// https://www.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1

#include<bits/stdc++.h>
using namespace std;


class Solution{
public:	
	void solve(int one ,int zero , vector<string>&ans,string op , int n){
        if(zero+one>=n){
            ans.push_back(op);
            return;
        }
        solve(one+1,zero,ans,op+'1',n);
        if(one>zero){
            solve(one,zero+1,ans,op+'0',n);
        }
    }
    
	vector<string> NBitBinary(int n)
	{
	    vector<string>ans;
	    solve(0,0,ans,"",n);
	    return ans;
	}
};

int main() {
    
     return 0;
}