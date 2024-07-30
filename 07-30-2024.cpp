// Rat in a Maze Problem - I
// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(int i,int j,vector<string>& ans ,vector<vector<int>> &m, int n ,string s ){
        if(i==n-1&&j==n-1){
            ans.push_back(s);
            return;
        }
        // for down
        if(i<n-1&&m[i+1][j]==1){
            m[i][j]=0;
            solve(i+1 ,j,ans,m,n,s+'D');
            m[i][j]=1;
        }
        // left
        if(j>0&&m[i][j-1]==1){
            m[i][j]=0;
            solve(i,j-1,ans,m,n,s+'L');
            m[i][j]=1;
        }
        // right
        if(j<n-1&&m[i][j+1]==1){
            m[i][j]=0;
            solve(i ,j+1,ans,m,n,s+'R');
            m[i][j]=1;
        }
        // up
        if(i>0&&m[i-1][j]==1){
            m[i][j]=0;
            solve(i-1 ,j,ans,m,n,s+'U');
            m[i][j]=1;
        }
    }
    vector<string> findPath(vector<vector<int>> &m ) {
        vector<string> ans;
        int n= m.size();
        if(m[0][0]==1&&m[n-1][n-1]==1) solve(0,0,ans,m,n,"");
        return ans;
    }
};

int main () {
    
     return 0;
}