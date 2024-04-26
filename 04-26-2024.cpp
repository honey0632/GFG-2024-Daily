// Exit Point in a Matrix
// https://www.geeksforgeeks.org/problems/exit-point-in-a-matrix0905/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& mat) {
        int dr[4][4]={{0,1},{1,0},{0,-1},{-1,0}};
        int d = 0 , i = 0 , j = 0;
        while(1)
        {
            if(mat[i][j]) mat[i][j]=0,d = (d+1)%4;
            i += dr[d][0];
            j += dr[d][1];
            if(i>=n || j>=m || i<0 || j<0 ) return {i-dr[d][0],j-dr[d][1]};
        }
        return {0,0};
    }
};

int main () {
    
     return 0;
}