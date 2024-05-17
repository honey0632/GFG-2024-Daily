// Find Pair Given Difference
// https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < n; ++i) {
            
            int find = arr[i] - x;
            
            if (binary_search(arr.begin(), arr.end(), find)) { 
                if (find == arr[i] && x == 0) {
                    int lb = lower_bound(arr.begin(), arr.end(), find) - arr.begin();
                    if (lb != i) return 1;
                } 
                else return 1;
            }
        }
        
        return -1;
    }
};

int main () {
    
     return 0;
}