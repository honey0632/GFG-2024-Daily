// Kth Smallest
// https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};

int main () {
    
     return 0;
}