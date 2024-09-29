// Total count
// https://www.geeksforgeeks.org/problems/total-count2415/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int ans =0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            ans+= ceil(arr[i]*1.0/k);
        }
        return ans;
    }
};

int main () {
    
     return 0;
}