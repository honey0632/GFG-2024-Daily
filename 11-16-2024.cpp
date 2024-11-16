// Move All Zeroes to End
// https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int i=0,n=arr.size();
        for(int j=0;j<n;j++){
            if(arr[j]!=0){
                swap(arr[j],arr[i]);
                i++;
            }
        }
        
    }
};

int main() {
    
     return 0;
}