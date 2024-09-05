// Missing in Array
// https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& a) {
        int ans = n;
        for(int i=0; i<n-1;i++){
            ans = ans^(i+1)^a[i];
        }
        return ans;
    }
};

int main () {
    
     return 0;
}

