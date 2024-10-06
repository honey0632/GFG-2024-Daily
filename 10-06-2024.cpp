// Find the number of islands
// https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  private:
    // Function to find the number of islands.
    void bfs(int row ,int col ,vector<vector<bool>>& vis , vector<vector<char>>& grid ){
        vis[row][col]=1;
        queue<pair<int,int>> q;
        
        q.push({row,col});
        int n =grid.size() , m = grid[0].size();
        
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            
            
            for(int k =-1;k<=1;k++){
                for(int l =-1;l<=1;l++)
                if(i+k>=0 && i+k<n && j+l>=0 && j+l<m && vis[i+k][j+l]==0 && grid[i+k][j+l]=='1'  ){
                    // cnt++; 
                    vis[i+k][j+l]=1;
                    q.push({i+k,j+l});
                }
            }
            
        }
    }
    public:
    
    int numIslands(vector<vector<char>>& grid) {
        int n =grid.size() , m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        int cnt=0;
        
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(vis[i][j]==0&&grid[i][j]=='1'){
                    cnt++;
                    bfs(i,j,vis,grid);
                        
                }
            }
        }
        return cnt;
    }
};

int main () {
    
     return 0;
}