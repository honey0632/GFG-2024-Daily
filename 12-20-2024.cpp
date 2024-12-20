// Spirally traversing a matrix
// https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code hereint 
        int n=matrix.size();
        int m=matrix[0].size();
        int total = m*n;
        vector<int> ans;
        int i=0;
        int j=0;

        while(i>=0 && i<n && j>=0 && j<m){
            for(int k=j;k<m;k++){
                ans.push_back(matrix[i][k]);
            }
            if(ans.size()==total){
                break;
            }
            i++;
            for(int k=i;k<n;k++){
                ans.push_back(matrix[k][m-1]);
            }
            if(ans.size()==total){
                break;
            }
            m--;
            for(int k=m-1;k>=j;k--){
                ans.push_back(matrix[n-1][k]);
            }
            if(ans.size()==total){
                break;
            }
            n--;
            for(int k=n-1;k>=i;k--){
                ans.push_back(matrix[k][j]);
            }
            if(ans.size()==total){
                break;
            }
            j++;
        }
        return ans;
    }
};

int main() {
    
     return 0;
}