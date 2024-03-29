// Find all Critical Connections in the Graph
// https://www.geeksforgeeks.org/problems/critical-connections/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void solve(int node, int &timer, int &parent, unordered_map<int, vector<int>> &adj, unordered_map<int, bool> &vis, unordered_map<int, int> &low, unordered_map<int, int> &disc, vector<vector<int>> &ans)
  {
    vis[node] = true;
    disc[node] = timer;
    low[node] = timer;
    timer++;
    // vector<int> children;
    for (auto it : adj[node])
    {
      if (it == parent)
      {
        continue;
      }
      if (vis[it] == true)
      {
        low[node] = min(low[node], disc[it]);
      }
      else
      {

        solve(it, timer, node, adj, vis, low, disc, ans);
        low[node] = min(low[node], low[it]);
        if (low[it] > disc[node])
        {
          ans.push_back({min(it, node), max(it, node)});
        }
      }
    }
  }
  vector<vector<int>> criticalConnections(int V, vector<int> graph[])
  {
    // Code here
    unordered_map<int, vector<int>> adj;
    unordered_map<int, int> low;
    unordered_map<int, int> disc;
    unordered_map<int, bool> vis;
    int timer = 0;
    int parent = -1;
    for (int i = 0; i < V; i++)
    {
      vis[i] = false;
      low[i] = disc[i] == -1;
      vector<int> temp;
      adj[i] = temp;
      for (auto it : graph[i])
      {
        adj[i].push_back(it);
        adj[it].push_back(i);
      }
    }
    vector<vector<int>> ans;
    for (int i = 0; i < V; i++)
    {
      if (vis[i] == false)
      {
        solve(i, timer, parent, adj, vis, low, disc, ans);
      }
    }
    sort(ans.begin(), ans.end());
    return ans;
  }
};

int main()
{

  return 0;
}