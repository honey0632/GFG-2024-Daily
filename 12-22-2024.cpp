// Search in a Row-Column sorted matrix
// https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        for(int i=0;i<mat.size();i++){
           if(binary_search(mat[i].begin(),mat[i].end(),x))return true;
        }
       return false;
    }
};

int main() {
    
     return 0;
}