// Subarray range with given sum
// https://www.geeksforgeeks.org/problems/subarray-range-with-given-sum0128/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        int ans=0;
        int curr=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            curr+=arr[i];
            //current sum is equal to the target
            if(curr==tar) ans++;

            if(mp.find(curr-tar)!=mp.end()) ans +=mp[curr-tar];
            mp[curr]++;
        }

        //finally returning the ans
        return ans;
    }  //simple 
};

int main () {
    
     return 0;
}