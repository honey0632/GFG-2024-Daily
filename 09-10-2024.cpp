// Circle of strings
// https://www.geeksforgeeks.org/problems/circle-of-strings4530/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
        void Dfs(int Node ,vector<bool>&visited , vector<int>adj[])
    {
        visited[Node]=1;
        for(int j=0;j<adj[Node].size();j++)
        {
            if(!visited[adj[Node][j]])
            Dfs(adj[Node][j],visited , adj);
        }
    }
    int isCircle(vector<string> &arr) {

        vector<int>adj[26];
        vector<int>InDeg(26,0);
        vector<int>OutDeg(26,0);
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            string temp = arr[i];
            int u = temp[0]-'a';
            int v = temp[temp.size()-1]-'a';
            adj[u].push_back(v);
            InDeg[v]++;
            OutDeg[u]++;
        }
        //for checking Euler circuit
        
        for(int i=0;i<26;i++)
        {
            if(InDeg[i] != OutDeg[i])
            return 0;
        }
        //All Edges is part of single component
        int Node = arr[0][0]-'a';
        vector<bool> visited(26,0);
        Dfs(Node,visited,adj);
        
        for(int i=0;i<26;i++)
        {
            if(InDeg[i]&&!visited[i])
            return 0;
        }
        return 1;

    }
};

int main () {
    
     return 0;
}