// Sorted and Rotated Minimum
// https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n=arr.size();
        int low=0, high=n-1;
        int ans=arr[low];
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]<ans) ans = arr[mid];
            if(arr[mid]>=arr[low]){
                ans = min(ans,arr[low]);
                low=mid+1;
            }
            else{
                ans=min(ans,arr[mid]);
                high=mid-1;
            }
            
        }
        return ans;
    }
};

int main() {
    
     return 0;
}