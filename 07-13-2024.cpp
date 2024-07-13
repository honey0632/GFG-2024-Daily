// Shortest Path in Weighted undirected graph
// https://www.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj[n+1];
        for(auto it : edges){
            adj[it[0]].push_back({it[1] , it[2]});
            adj[it[1]].push_back({it[0] , it[2]});
        }
        set<pair<int,int>>st;
        vector<int> dist(n+1,INT_MAX);
        vector<int> parent(n+1);
        for(int i= 0;i<=n;i++) parent[i]=i;
        
        dist[1] = 0;
        st.insert({0,1});
        
        while(!st.empty()){
            auto it = *(st.begin());
            int dis = it.first;
            int node =it.second;
            st.erase(it);
            
            for(auto it:adj[node]){
                int weight =it[1];
                int adjNode = it[0];
                if(dist[adjNode]>dis + weight){
                    
                    if(dist[adjNode]!=INT_MAX){
                      st.erase({dist[adjNode], adjNode});  
                    }
                    
                    st.insert({dis + weight,adjNode});
                    parent[adjNode] = node;
                    dist[adjNode]=dis + weight;
                }
            }
        }
    if(dist[n]==INT_MAX) return{-1};
        vector<int> ans;
        int i = n;

        while(i!=1){
            ans.push_back(i);
            i = parent[i];
        }
        ans.push_back(1);
        ans.push_back(dist[n]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main () {
    
     return 0;
}