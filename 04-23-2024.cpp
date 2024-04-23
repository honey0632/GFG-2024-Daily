// Rohan's Love for Matrix
// https://www.geeksforgeeks.org/problems/rohans-love-for-matrix4723/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstElement(int n) {
        int a=0,b=1,t=1,mod=1000000007;
        for (int i=2;i<=n;i++){
            t=(a+b)%mod;
            a=b;
            b=t;
        }
        return t;
    }
};

int main () {
    
     return 0;
}