// Reorganize The Array
// https://www.geeksforgeeks.org/problems/reorganize-the-array4810/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> rearrange(const vector<int>& ar) {
        // Code here
        vector<int> arr = ar;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==-1)continue;
            
            while(arr[i]!=-1 && arr[i]!=i){
                swap(arr[i],arr[arr[i]]);
            }
            
        }
        return arr;
    }
};

int main () {
    
     return 0;
}