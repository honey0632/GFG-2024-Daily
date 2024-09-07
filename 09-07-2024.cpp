// Nth Natural Number
// https://www.geeksforgeeks.org/problems/nth-natural-number/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long findNth(long long n) {
        // code here.
        long long res = 0;
        int i = 0;
        while(n)
        {
            res += (n % 9) * (pow(10, i++));
            n/=9;
        }
        return res;
    }
};

int main () {
    
     return 0;
}