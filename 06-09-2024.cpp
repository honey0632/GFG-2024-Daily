// Convert array into Zig-Zag fashion
// https://www.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void zigZag(int n, vector<int> &a) {
        for(int i = 0;i<n-1;i++){
           if(i%2 == 0){
               if(a[i] > a[i+1]){
                   swap(a[i],a[i+1]);
               }
           }
           else{
               if(a[i]<a[i+1]){
                   swap(a[i],a[i+1]);
               }
           }
  	    }
    }
};

int main () {
    
     return 0;
}