// Number of occurrence
// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countFreq(vector<int>& arr, int t) {
        return  upper_bound(arr.begin(),arr.end(),t) - lower_bound(arr.begin(),arr.end(),t);
    }
};

int main() {
    
     return 0;
}