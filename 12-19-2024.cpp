// Kth Missing Positive Number in a Sorted Array
// https://www.geeksforgeeks.org/problems/kth-missing-positive-number-in-a-sorted-array/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        vector<int>v;
        int i=1;
        int j=0;
        
        while(v.size()<=k){
            if (j < arr.size() && i == arr[j]) {
            i++; 
            j++; 
        } else {
            v.push_back(i);
            i++; 
        }
        
        }
        return v[k-1];
    }
};

int main()
{

    return 0;
}