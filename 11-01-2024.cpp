// Swap and Maximize
// https://www.geeksforgeeks.org/problems/swap-and-maximize5859/1 


#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        long long res=0;
        int n=arr.size();
        //maximum absolute difference when alternate maximum and minimum element permuted
        sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        while(i<j){
            res+=abs(arr[j]-arr[i])+abs(arr[j]-arr[i+1]);
            i++;
            j--;
        }
        //given it is circular array
        res+=abs(arr[i]-arr[0]);
       return res;
        }
};

int main() {
    
     return 0;
}