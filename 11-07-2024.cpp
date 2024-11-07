// Split array in three equal sum subarrays
// https://www.geeksforgeeks.org/problems/split-array-in-three-equal-sum-subarrays/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=arr[i];
            mp[sum]=i;
        }
        sum=0;
        int r,s;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()){
                //cout<<sum<<" ";
                int msum=0;
                r=i+1;
                s=mp[sum]-1;
                for(int k=r;k<=s;k++){
                    msum+=arr[k];
                }
                if(msum==sum){
                   // cout<<i<<" "<<s;
                    return {i,s};
                }
            }
        }
        return {-1,-1};
    }
};

int main() {
    
     return 0;
}