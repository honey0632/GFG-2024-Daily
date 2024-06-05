// Swapping pairs make sum equal
// https://www.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal4142/1

#include<bits/stdc++.h>
using namespace std;

class Solution {

  public:
     int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+m);
        
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
          sum1+=a[i];  
        }
        
        for(int i=0;i<m;i++){
          sum2+=b[i];  
        }
        
        if(abs(sum1-sum2)%2!=0){
            return -1;
        }
        
       int i=0,j=0;
       
      while(i<n&&j<m){
          if(sum1+b[j]-a[i]==sum2+a[i]-b[j]){
              return 1;
          }
          else if(sum1+b[j]-a[i]<sum2+a[i]-b[j]){
             
              j++;
          }
          else{
              i++;
          }
      }
      return -1;
   
    }
};

int main () {
    
     return 0;
}