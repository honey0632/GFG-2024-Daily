// Course Schedule
// https://www.geeksforgeeks.org/problems/course-schedule/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        vector<int>topo;
        vector<int>adj[n];
        queue<int>q;
        vector<int>indegree(n,0);
        
        for(auto x:prerequisites){
            vector<int>v=x;
            adj[v[1]].push_back(v[0]);
        }
       for(int i=0;i<n;i++){
           for(auto x:adj[i]){
              indegree[x]++; 
           }
       }
         for(int i=0;i<n;i++){
            if(indegree[i]==0)
            q.push(i);
        }
        while(!q.empty()){
            int u=q.front();
            q.pop();
            
            topo.push_back(u);
            for(auto v:adj[u]){
                indegree[v]--;
                if(indegree[v]==0)
                q.push(v);
            }
        }
        if(topo.size()==n)
        return topo;
        
        else
        return {};
    }
};

int main () {
  
   return 0;
}