// Maximum product subset of an array
// https://www.geeksforgeeks.org/problems/maximum-product-subset-of-an-array/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        int n = arr.size();
        long long int mod = 1e9+7;
        long long int neg_ans = 0, pos_ans = 0, mini = INT_MIN, cnt=0;
        if(n==1)return arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                if(pos_ans==0) pos_ans=1;
                pos_ans = ((pos_ans)%mod * arr[i])%mod;
            }
            else if(arr[i]<0){
                if(neg_ans==0) neg_ans=1;
                cnt++;
                neg_ans = ((neg_ans)%mod * arr[i])%mod;
                mini = max((long long int)arr[i],mini);
            }
        }
        
        if(neg_ans<0 ){
            if(cnt>1) neg_ans = neg_ans/mini;
            else neg_ans = 0;
        }
        long long int ans = 1;
        if(neg_ans>0 && pos_ans>0) return (neg_ans* pos_ans)%mod;
        else if(neg_ans>0 || pos_ans>0) return max(neg_ans, pos_ans);
        return 0;
    }
};

int main () {
    
     return 0;
}