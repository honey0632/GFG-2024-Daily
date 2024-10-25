// Alternative Sorting
// https://www.geeksforgeeks.org/problems/alternative-sorting1311/1

#include<bits/stdc++.h>
using namespace std;

class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        if(n==1) return arr;
        sort(arr.begin(), arr.end());
        vector<int>ans(n);
        int ind=n-1;
        for(int i=0; i<n; i+=2){
            ans[i]=arr[ind--];
        }
        ind=0;
        for(int i=1; i<n; i+=2){
            ans[i]=arr[ind++];
        }
        return ans;
    }
};

int main() {
    
     return 0;
}