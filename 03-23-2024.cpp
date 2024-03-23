// Fibonacci series up to Nth term
// https://www.geeksforgeeks.org/problems/fibonacci-series-up-to-nth-term/1

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
  int mod = 1000000007;
    vector<int> Series(int n) {
        vector<int> res;
        res.push_back(0);
        res.push_back(1);
        
        for(int i=2;i<=n;i++){
            long long x = res[i-1]+res[i-2];
            res.push_back((x)%(mod));
        }
        return res;
    }
};

int main () {
    
     return 0;
}