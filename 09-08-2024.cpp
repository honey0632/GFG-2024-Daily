// Minimum Jumps
// https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        int curr = 0 , maxi = 0 ,count = 0, n= arr.size();
        if(n==1) return 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi,i+arr[i]);
            if(maxi>=n-1) return count+1;
            if(maxi==i) return -1;
            else if(i==curr){
                curr=maxi;
                count++;
            }
        }
    }
};

int main () {
    
     return 0;
}