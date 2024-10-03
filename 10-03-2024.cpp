// Majority Vote
// https://www.geeksforgeeks.org/problems/majority-vote/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto &it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>(nums.size()/3)) ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0) return {-1};
        return ans;
    }
};

int main () {
    
     return 0;
}