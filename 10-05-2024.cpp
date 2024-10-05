// Not a subset sum
// https://www.geeksforgeeks.org/problems/smallest-number-subset1220/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        long long ans = 1;
        for(int x : arr) {
            if(ans < x)
                return ans;
            ans += x;
        }
        return ans;
    }
};

int main () {
    
     return 0;
}