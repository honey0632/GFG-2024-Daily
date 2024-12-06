// Find H-Index
// https://www.geeksforgeeks.org/problems/find-h-index--165609/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find hIndex
    int n;
    
    bool check(vector<int>&arr, int t){
        int cnt=0;
        for(int i=0; i<n; i++){
            if(arr[i]>=t) cnt++;
        }
        if(cnt>=t) return 1;
        else return 0;
    }
    
    int hIndex(vector<int>& citations) {
        // code here
        int maxi=-1e9, mini=1e9;
        n=citations.size();
        
        for(int i=0; i<n; i++){
            maxi=max(maxi, citations[i]);
            mini=min(mini, citations[i]);
        }
        
        int lo=min(0, mini), hi=max(maxi, n);
        int ans=0;
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(citations, mid)){
                ans=mid;
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        return ans;
    }
};

int main() {
    
     return 0;
}