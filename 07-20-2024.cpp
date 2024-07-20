// Remove Half Nodes
// https://www.geeksforgeeks.org/problems/remove-half-nodes/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// Return the root of the modified tree after removing all the half nodes.
class Solution {
  private:
    Node* dfs(Node* root) {
        if(!root) return NULL;
        Node* left=dfs(root->left);
        Node* right=dfs(root->right);
        if(!left && !right) return root;
        if(!left) return right;
        else if(!right) return left;
        root->left=left;
        root->right=right;
        return root;
    }
  public:
    Node *RemoveHalfNodes(Node *root) {
        // code here
        Node *cur=dfs(root);
        return cur;
    }
};

int main () {
    
     return 0;
}