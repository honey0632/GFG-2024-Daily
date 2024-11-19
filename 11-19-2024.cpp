// Next Permutation
// https://www.geeksforgeeks.org/problems/next-permutation5226/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n=arr.size();
        int ind=-1;
        for(int i=n-2; i>=0; i--){
            if(arr[i+1]>arr[i]){
                ind=i;
                break;
            }
        }
        
        if(ind==-1){
            reverse(arr.begin(), arr.end());
            return;
        }
        
        for(int i=n-1; i>=ind; i--){
            if(arr[i]>arr[ind]){
                swap(arr[i], arr[ind]);
                break;
            }
        }
        
        reverse(arr.begin()+ind+1, arr.end());
        return;
    }
};

int main() {
    
     return 0;
}