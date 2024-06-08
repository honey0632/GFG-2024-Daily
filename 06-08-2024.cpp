// Index of an Extra Element
// https://www.geeksforgeeks.org/problems/index-of-an-extra-element/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        
        int low = 0;
        int high = n;  

        while (low < high) {
            int mid = (low + high) / 2;

            if (arr1[mid] == arr2[mid]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    
    }
};

int main () {
    
     return 0;
}