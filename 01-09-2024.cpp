// https://www.geeksforgeeks.org/problems/search-pattern0205/1
// Search Pattern (KMP-Algorithm)



#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int> ans;
            for(int i=0; i<=txt.length()-pat.length(); i++)
            {
                if(txt[i]==pat[0])
                {
                    if(txt.substr(i,pat.length())==pat)
                    ans.push_back(i+1);
                }
                
              
            }
            if(ans.size()==0)
            return {-1};
            return ans;
        }
     
};

int main () {
  
   return 0;
}