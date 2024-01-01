// Largest Sum Subarray of Size at least K
//  https://www.geeksforgeeks.org/problems/largest-sum-subarray-of-size-at-least-k3121

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        
           long long int  add = 0, sum1 = 0, sub = 0, sum2 = 0;
        long long int  i = 0;

        while (i < k)
            sum1 += a[i++];

        add = sum1;

        while (i < n) {
            sum1 += a[i];
            sum2 += a[(i - k)];
            sub = min(sub, sum2);
            add = max(add, sum1 - sub);
            ++i;
        }

        return add;
        
        
    }
};

int main () {
  
   return 0;
}
