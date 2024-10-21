// Split the Array
// https://www.geeksforgeeks.org/problems/split-the-array0238/1

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // Complete the function
        int x = 0;
        for(int i : arr)
            x ^= i;
        if(x != 0)
            return 0;
        
        long long a = pow(2, arr.size()-1) - 1;
        long long mod = pow(10, 9)+7;
        
        return a%mod;
    }
};

int main() {
    
     return 0;
}