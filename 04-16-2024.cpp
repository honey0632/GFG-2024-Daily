// Minimize the Difference
// https://www.geeksforgeeks.org/problems/minimize-the-difference/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
         int maxSuffix[n + 1];
    int minSuffix[n + 1];
    
    // Set the last elements of the suffix arrays to initial values
    maxSuffix[n] = -1e9;
    minSuffix[n] = 1e9;
    
    // Calculate suffix maximums and minimums
    maxSuffix[n - 1] = arr[n - 1];
    minSuffix[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        maxSuffix[i] = max(maxSuffix[i + 1], arr[i]);
        minSuffix[i] = min(minSuffix[i + 1], arr[i]);
    }
    
    // Initialize prefix maximum and minimum values
    int maxPrefix = arr[0];
    int minPrefix = arr[0];
    
    // Initialize the minimum difference with the maximum and minimum values of the first k elements
    int minDiff = maxSuffix[k] - minSuffix[k];
    
    // Iterate through the array to find the minimum difference
    for(int i = 1; i < n; i++){
        // Check if the window size doesn't exceed the array size
        if(i + k <= n){
            // Update maximum and minimum values considering the current prefix and the next k elements
            int maxi = max(maxSuffix[i + k], maxPrefix);
            int mini = min(minSuffix[i + k], minPrefix);
            // Update the minimum difference if a smaller difference is found
            minDiff = min(minDiff, maxi - mini);
        }
        // Update prefix maximum and minimum values
        maxPrefix = max(maxPrefix, arr[i]);
        minPrefix = min(minPrefix, arr[i]);
    }
    // Return the minimum difference
    return minDiff;
    }
};

int main () {
    
     return 0;
}
