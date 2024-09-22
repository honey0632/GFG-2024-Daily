// Longest Prefix Suffix
// https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lps(string s) {
	    vector<int>lps(s.size(), 0);
        int prefix=0, suffix=1;
        
        while(suffix<s.size())
        {
            if(s[prefix]==s[suffix])
            {
                lps[suffix] = prefix+1;
                prefix++;
                suffix++;
            }
            
            else
            {
                if(prefix==0)
                {
                    lps[suffix] = 0;
                    suffix++;
                }
                else
                {
                    prefix = lps[prefix-1];
                }
            }
        }
        
        return lps[s.size()-1];
	}
};

int main () {
    
     return 0;
}