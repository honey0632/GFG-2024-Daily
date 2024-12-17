// Aggressive Cows
// https://www.geeksforgeeks.org/problems/aggressive-cows/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool is(vector<int> &arr,int k,int mid){
        int st = arr[0]; 
        int cnt = 1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-st>=mid){ 
                cnt++;
                st = arr[i]; 
                if(cnt==k) return true; 
            }
        }
        return false; 
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        
        int n = stalls.size(),st = 0,end = stalls.back()-stalls[0];
        int ans = 0;
        while(st<=end){
            int mid = (end-st)/2 +st;
            
            if(is(stalls,k,mid)){ 
                ans = mid; 
                st = mid+1; 
            }
            else end = mid-1; 
        }
        return ans;
        
    }
};

int main() {
    
     return 0;
}