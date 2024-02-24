// Maximum Sum Problem
// https://www.geeksforgeeks.org/problems/maximum-sum-problem2211/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int maxSum(int n) {
        if (n <= 1) {
            return n;
        }

        int a = maxSum(n / 2);
        int b = maxSum(n / 3);
        int c = maxSum(n / 4);

        return max(n, a + b + c);
    }
};

int main () {
    
     return 0;
}
