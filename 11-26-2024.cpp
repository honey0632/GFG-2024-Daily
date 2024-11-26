// Max Circular Subarray Sum
// https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int kadanes(vector<int> &a,int n){
        int ans=a[0], sum=a[0];
        for(int i=1;i<n;i++){
            if(sum<0)sum=a[i];
            else sum+=a[i];
            ans=max(ans, sum);
        }
        return ans;
    }
    
    int circularSubarraySum(vector<int> &a) {
        int n =a.size();
        int non_cir=kadanes(a,n);
        int total_sum=0;
        for(int i=0;i<n;i++){
            total_sum+=a[i];
            a[i]=-a[i];
        }
        int cir=kadanes(a,n);
        cir=total_sum+cir;
        if(cir==0)return non_cir;//if all elements are <0
        return max(cir, non_cir);
        // your code here
    }
};

int main() {
    
     return 0;
}