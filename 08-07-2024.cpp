// K-th element of two Arrays
// https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        for(int i=0;i<arr2.size();i++){
            arr1.push_back(arr2[i]);
        }
        sort(arr1.begin(),arr1.end());
        return arr1[k-1];
    }
};

int main () {
    
     return 0;
}