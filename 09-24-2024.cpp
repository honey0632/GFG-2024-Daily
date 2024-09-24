// Smallest window in a string containing all the characters of another string
// https://www.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string smallestWindow (string s, string p)
    {

        vector<int>cur(26,0);
        for(int i=0;i<p.size();i++)
        {
            cur[p[i]-'a']++;
        }

        int i=0,j=0,counter=p.size(),minstart=0,minlen=INT_MAX;
        int n=s.size();
        
        while(j<n)
        {
            if(cur[s[j]-'a']>0)
            {
                counter--;
            }
            
            cur[s[j]-'a']--;
            
            while(counter==0) //means we got a substring consisiting of our string p
            {
                if(j-i+1<minlen)
                {
                    minstart=i;
                    minlen=j-i+1;
                }
                
                cur[s[i]-'a']++;  
                if(cur[s[i]-'a']>0)
                {
                    counter++;
                }
                i++;
            }
            
            j++;
        }
        
        return (minlen!=INT_MAX?s.substr(minstart,minlen):"-1");
        
    }
};


int main () {
    
     return 0;
}