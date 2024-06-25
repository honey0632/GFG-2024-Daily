// Left Rotate Matrix K times
// https://www.geeksforgeeks.org/problems/left-rotate-matrix-k-times2351/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int m=mat.size() , n=mat[0].size();
        k= k%n;
        if(k==0||n==1)return mat;
        vector<vector<int>> res =mat;
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                res[i][j]=mat[i][(j+k)%(n)];
            }
        }
        return res;
    }
};

int main () {
    
     return 0;
}