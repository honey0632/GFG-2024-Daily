// Set Matrix Zeroes
// https://www.geeksforgeeks.org/problems/set-matrix-zeroes/1


#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int m = mat.size() ,n= mat[0].size() , r1=1,c1=1;
        for(int i=0;i<m;i++){
            if(mat[i][0]==0) r1=0;
        }
        for(int j=0;j<n;j++){
            if(mat[0][j]==0) c1=0;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                
                if(mat[i][j]==0){
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            if(mat[i][0]==0) {
               for(int j=1;j<n;j++){
                    mat[i][j]=0;
                } 
            }
        }
        for(int j=1;j<n;j++){
            if(mat[0][j]==0) {
                for(int i=1;i<m;i++){
                    mat[i][j]=0;
                } 
            }
        }
        if(r1==0){
            for(int i=0;i<m;i++){
                mat[i][0]=0;
            }
        }
        if(c1==0){
            for(int j=0;j<n;j++){
                mat[0][j]=0;
            }
        }
        
    }
};

int main() {
    
     return 0;
}