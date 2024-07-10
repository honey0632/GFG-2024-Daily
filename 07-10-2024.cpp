// Largest square formed in a matrix
// https://www.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        // code here
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1 && i-1>=0 && j-1>=0) 
                    mat[i][j]=min({mat[i-1][j],mat[i][j-1],mat[i-1][j-1]})+1;
            
                count=max(mat[i][j],count);
            }
        }
        return count;
    }
};

int main () {
    
     return 0;
}