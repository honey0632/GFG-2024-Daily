// Rotate Array
// https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d%=n;
        int temp[d];
         for(int i=0;i<d;i++) temp[i]=arr[i];
         for(int i=d;i<n;i++) arr[i-d]=arr[i];
         for(int i=0;i<d;i++) arr[n-d+i]=temp[i];
    }
};


int main() {
    
     return 0;
}