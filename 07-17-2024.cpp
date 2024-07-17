// Construct Binary Tree from Parent Array
// https://www.geeksforgeeks.org/problems/construct-binary-tree-from-parent-array/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

class Solution {
    
public:    
    void buildTree(Node* root, vector<vector<int>>& adj) {
        if (adj[root->data].size() > 0) {
            root->left = new Node(adj[root->data][0]);
            buildTree(root->left, adj);
        }
        if (adj[root->data].size() > 1) {
            root->right = new Node(adj[root->data][1]);
            buildTree(root->right, adj);
        }
    }
    
    Node* createTree(vector<int> parent) {
        int n = parent.size();
        vector<vector<int>> adj(n);
        
        for (int i = 0; i < n; i++) {
            int x = parent[i];
            if (x != -1) {
                adj[x].push_back(i);
            }
        }
        
        Node* root = nullptr;
        for (int i = 0; i < n; i++) {
            if (parent[i] == -1) {
                root = new Node(i);
                break;
            }
        }
        
        if (root != nullptr) {
            buildTree(root, adj);
        }
        
        return root;
    }
};

int main () {
    
     return 0;
}