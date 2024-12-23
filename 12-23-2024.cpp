// Search in a row-wise sorted matrix
// https://www.geeksforgeeks.org/problems/search-in-a-row-wise-sorted-matrix/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        for(int i = 0; i< mat.size(); i++){
            if(mat[i][lower_bound(mat[i].begin(), mat[i].end(), x) - mat[i].begin()] == x){
                return 1;
            } 
        }
        return 0;
    }
};


int main() {
    
     return 0;
}