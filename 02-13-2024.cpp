// Clone an Undirected Graph
// https://www.geeksforgeeks.org/problems/clone-graph/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
    public:
    Node* help(Node* node,vector<Node*>& visited)
    {
        Node* graph=new Node(node->val);
        visited[node->val]=graph;
        for(auto it:node->neighbors)
        {
            if(!visited[it->val])
            help(it,visited);
            
            graph->neighbors.push_back(visited[it->val]);
        }
        return graph;
    }
    Node* cloneGraph(Node* node) {
        vector<Node*> visited(10001,NULL);
        return help(node,visited);
    }
};
int main () {
  
   return 0;
}