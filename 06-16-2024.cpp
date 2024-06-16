// Prime Pair with Target Sum
// https://www.geeksforgeeks.org/problems/sum-of-prime4751/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isPrime(int n){
        if (n == 2 || n == 3) return 1;
        if (n <= 1 || n % 2 == 0 || n % 3 == 0) return 0;
        
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return 0;
        }
        return 1;
    }
    vector<int> getPrimes(int n) {
        
        if(isPrime(2)&isPrime(n-2)) return {2,n-2};
        if(isPrime(3)&isPrime(n-3)) return {3,n-3};
        
        for(int i=5;i<=n/2;i+=6){
            if(isPrime(i)&isPrime(n-i)) return {i,n-i};
            if(isPrime(i+2)&isPrime(n-i-2)) return {i+2,n-i-2};
        }
        return {-1,-1};
    }
};

int main () {
    
     return 0;
}