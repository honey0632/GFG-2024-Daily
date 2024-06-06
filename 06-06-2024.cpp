// Max sum in the configuration
// https://www.geeksforgeeks.org/problems/max-sum-in-the-configuration/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
        long long sum = 0, product_sum = 0, ans = 0, N = n;
        for(int i = 0; i<n; i++){
            sum += a[i];
            product_sum += i*(long long)a[i];
        }
        ans = product_sum;
        for(int i = 1; i<n; i++){
            product_sum = (product_sum - sum) + a[(i + n - 1)%n]*(N);
            ans = max(ans, product_sum);
        }
        return ans;
    }
};

int main () {
    
     return 0;
}