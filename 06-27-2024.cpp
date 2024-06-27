// Toeplitz matrix
// https://www.geeksforgeeks.org/problems/toeplitz-matrix/1

#include<bits/stdc++.h>
using namespace std;

bool isToeplitz(vector<vector<int>>& mat) {
    // code here
    int rows = mat.size() - 1;
    for(int i = 0; i < rows; i++) {
        int cols = mat[i].size() - 1;
        int j = 0;
        while(j < cols) {
            if(mat[i][j] != mat[i+1][j+1]) return false;
            j++;
        }
    }
    return true;
}

int main () {
    
     return 0;
}