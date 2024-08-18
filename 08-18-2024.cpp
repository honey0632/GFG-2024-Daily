// Split an array into two equal Sum subarrays
// https://www.geeksforgeeks.org/problems/split-an-array-into-two-equal-sum-subarrays/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
         int sum =0;
        int total =0;
        for(int i=0;i<arr.size();i++)
        {
            sum += arr[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            total += arr[i];
             sum -= arr[i];
            if(sum == total)
            {
                return true;
            }
         }
        return false;
    }
};

int main () {
    
     return 0;
}