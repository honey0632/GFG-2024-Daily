// Find the closest number
// https://www.geeksforgeeks.org/problems/find-the-closest-number5513/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        auto it = lower_bound(arr, arr+n, k)-arr;
        if (it == n) return arr[n-1];
        else if (it==0) return arr[0];
        else {
            if (abs(arr[it-1] - k) < abs(arr[it] - k)) return arr[it-1];
            return arr[it];
        }
    } 
};

int main () {
    
     return 0;
}