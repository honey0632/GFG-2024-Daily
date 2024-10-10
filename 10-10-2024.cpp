// Max distance between same elements
// https://www.geeksforgeeks.org/problems/max-distance-between-same-elements/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        int n = arr.size();
        map<int,int > mp;
        int ans= 0;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=i;
            }
            else{
                int x = mp[arr[i]];
            
                ans = max(ans,i-x);
            }
        }
        
        return ans;
    }
};

int main () {
    
     return 0;
}