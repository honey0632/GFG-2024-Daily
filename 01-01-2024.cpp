// Array Pair Sum Divisibility Problem
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        if(n%2) return 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]%k]++;
        }
        for(int i=1;i<=k/2;i++){
            if(mp[i]!=mp[k-i]) return 0;
        }
        return 1;
    }
};
