// Swap the array elements
// https://www.geeksforgeeks.org/problems/need-some-change/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    void swapElements(int a[], int n){
        
        for(int i=0;i<n-2;i++){
            int temp = a[i];
            a[i] = a[i+2];
            a[i+2] = temp;
        }
        
    }
};

int main () {
    
     return 0;
}