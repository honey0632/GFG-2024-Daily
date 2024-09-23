// Missing And Repeating
// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr) {
         int xr = 0;
         
         int n = arr.size();
         
         for(int i=0;i<n;i++){
             xr = xr^(i+1);
             xr = xr^arr[i];
         }
         
         int bitno = 0;
         
         
         int x= xr & ~(xr-1);
         int zero =0;
         int one =0;
         
         for(int i=0;i<n;i++){
             
             if(arr[i]&x) one = one ^arr[i];
             else zero = zero^arr[i];
             if((i+1)&x) one = one ^(i+1);
             else zero = zero^(i+1);
         }
         for(int i=0;i<n;i++){
             if(arr[i]==zero) return {zero, one};
             if(arr[i]==one) return {one,zero };
         }
         
    }
};


int main () {
    
     return 0;
}