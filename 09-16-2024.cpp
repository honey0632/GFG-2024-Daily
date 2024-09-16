// Longest valid Parentheses
// https://www.geeksforgeeks.org/problems/longest-valid-parentheses5657/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLength(string& str) {
        
        int n=str.length(),maxi=0,cnt=0;
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(')
                s.push(i);
            else
            {
                if(!s.empty())
                {
                    str[s.top()]='1';  // convert sting 
                    str[i]='1';
                    s.pop();
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1') cnt++;
            else    cnt=0;
            maxi=max(maxi,cnt); 
           // check for maximum substring
        }
        return maxi;
    }
};

int main () {
    
     return 0;
}