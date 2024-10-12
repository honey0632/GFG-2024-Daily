// Two Smallests in Every Subarray
// https://www.geeksforgeeks.org/problems/maximum-sum-of-smallest-and-second-smallest-in-an-array/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int pairWithMaxSum(vector<int>& arr) {
        int n =arr.size() , ans =-1;
        for(int i=1;i<n;i++){
            ans = max(ans,arr[i]+arr[i-1]);
        }
        return ans;
    }
};

int main () {
    
     return 0;
}