// Maximum Index
// https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        

    int maxIndexDiff(int arr[], int n) 
    { 
        int ans=0;
        for(int i=0;i<n;i++){
            int j=n-1;
            while(arr[i]>arr[j] && j>i ){
                j--;
            }
            ans=max(ans,j-i);
        }
        return ans;
    }
};

int main () {
    
     return 0;
}