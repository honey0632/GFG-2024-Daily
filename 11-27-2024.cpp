// Smallest Positive Missing Number
// https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        if(n == 1 && arr[0] == 0) return 1;
        
        for(int i=0;i<n;i++){
            if(arr[i]<1 || arr[i]>n) arr[i] = n+1;
        }
        for(int i=0;i<n;i++){
            int a = abs(arr[i]);
            if(arr[i]!=0){
                arr[a-1] = -1*abs(arr[a-1]);
            }
        }
        
        for(int i=0;i<n;i++) if(arr[i]>0) return i+1;
        
        return n+1;
    }
};

int main() {
    
     return 0;
}