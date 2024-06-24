// Summed Matrix
// https://www.geeksforgeeks.org/problems/summed-matrix5834/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        if(q==1 || q>2*n) return 0;
        return n-abs(n-q+1);
    }
};


int main () {
    
     return 0;
}