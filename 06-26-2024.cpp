// Coverage of all Zeros in a Binary Matrix
// https://www.geeksforgeeks.org/problems/coverage-of-all-zeros-in-a-binary-matrix4024/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findCoverage(vector<vector<int>>& arr) {
        int n=arr[0].size() , m = arr.size();
        int ans=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                if(arr[i][j]==0){
                    if((i-1)>=0 && arr[i-1][j]==1)ans++;
                    if((i+1)<m  && arr[i+1][j]==1)ans++;
                    if((j-1)>=0 && arr[i][j-1]==1)ans++;
                    if((j+1)<n  && arr[i][j+1]==1)ans++;
                    
                } 
                // cout<<i<<" "<<j<<" --- "<<ans<<endl;
                
            }
        }
        return ans;
    }
};

int main () {
    
     return 0;
}