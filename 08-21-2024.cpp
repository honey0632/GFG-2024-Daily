// Shortest path in Undirected Graph
// https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        
        vector<int> adj[n];
        
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int> dist(n,-1);
        dist[src]=0;
        
        queue<int>q;
        q.push(src);
        
        while(!q.empty()){
            int node =q.front();
            q.pop();
            
            for(auto it: adj[node]){
                if(dist[node]+1<dist[it] || dist[it]==-1){
                    dist[it] = 1+dist[node];
                    q.push(it);
                }
            }
        }
        
        return dist;
        
    }
};

int main () {
    
     return 0;
}