// Minimize the Heights I
// https://www.geeksforgeeks.org/problems/minimize-the-heights-i/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans = arr[n-1]-arr[0];
        
        for(int i=0 ; i<n-1 ; i++){
            int mini = min(arr[0]+k , arr[i+1]-k);
            int maxi = max(arr[n-1]-k , arr[i]+k);

            ans = min(ans , maxi - mini);
            
        }
        return ans;
    }
};

int main() {
    
     return 0;
}