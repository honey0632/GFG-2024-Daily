// Check if a given graph is tree or not
// https://www.geeksforgeeks.org/problems/is-it-a-tree/1



#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool dfs(int i,vector<vector<int>>&adj,vector<int>&vis,int p){
        vis[i]=1;
        for(auto j:adj[i]){
            if(p==j) continue;
            if(vis[j]==1) return true;
            if(dfs(j,adj,vis,i)) return true;
        }
        return false;
    }
    int isTree(int v, int m, vector<vector<int>> &adj) {
        vector<int>vis(v,0);
        vector<vector<int>>mat(v);
        for(auto i:adj){
            mat[i[0]].push_back(i[1]);
            mat[i[1]].push_back(i[0]);
        }
        if(dfs(0,mat,vis,-1)) return false;
        for(auto i:vis) if(i==0) return false;
        return true;
    }
};


int main () {
  
   return 0;
}