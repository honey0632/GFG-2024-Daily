// Print matrix in diagonal pattern
// https://www.geeksforgeeks.org/problems/print-matrix-in-diagonal-pattern/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         vector<int> ans;
         int sum = 0;
         int n = mat.size();
         while(sum<=2*(n-1)){
            if(sum%2==0){
                int i = min(sum,n-1);
                int j = sum - i;
                while(i>-1 && j<n){
                    ans.push_back(mat[i][j]);
                    i--;
                    j++;
                }
            }else{
                int j = min(sum,n-1);
                int i = sum - j;
                while(i<n && j>-1){
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                }
            }
            sum++;
         }
         return ans;
    }
};

int main () {
    
     return 0;
}