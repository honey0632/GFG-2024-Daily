// Roof Top
// https://www.geeksforgeeks.org/problems/roof-top-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
         int ans=INT_MIN;int count=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                count++;
                 ans=max(ans,count);
            }
            if(arr[i]>=arr[i+1]){
                count=0;
            }
        }
        
        return ans;
    }
};

int main () {
    
     return 0;
}