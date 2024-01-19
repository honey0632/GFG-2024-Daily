// Top k numbers in a stream
// https://www.geeksforgeeks.org/problems/top-k-numbers3425/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        // code here
         map<int,int>mp;
        vector<vector<int>>res;
        set<pair<int,int>>st;
        for(int i=0;i<N;i++)
        {
            int f=++mp[arr[i]];
            int k=0;
           vector<int>ans;
            if(st.find({-f+1,arr[i]})!=st.end())
            {
                st.erase({-f+1,arr[i]});
            }
            st.insert({-f,arr[i]});
            
            for(auto it:st)
            {
                int x=it.second;
                ans.push_back(x);
                k++;
                if(k==K)
                 break;
            }
            res.push_back(ans);
            
        }
        return res;
    
    }
};

int main () {
  
   return 0;
}