// K closest elements
// https://www.geeksforgeeks.org/problems/k-closest-elements3619/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        int ind=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        vector<int>ans;
        int i=0;
        if(arr[ind-1]==x) i=ind-2;

        else i=ind-1;

        int j=ind;
        int count=0;
        while(k>0){   
            if(i<0){
                ans.push_back(arr[j]);
                ++j;
                k--; 
            }
            else if(j>=n){  
                ans.push_back(arr[i]);
                --i;
                k--;
            }
            else if(abs(x-arr[j])<=abs(x-arr[i])){
                ans.push_back(arr[j]);
                k--;
                ++j;
            }
            else{
                ans.push_back(arr[i]);
                k--;
                --i;
            }
        }
        return ans;
    }
};

int main () {
    
     return 0;
}