// Two Sum - Pair with Given Sum
// https://www.geeksforgeeks.org/problems/key-pair5616/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int x) {
        int n=arr.size();
        unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        if(mp.count(x-arr[i])>0) return true;
	        mp[arr[i]]++;
	    }
	    return false;
    }
};

int main() {
    
     return 0;
}