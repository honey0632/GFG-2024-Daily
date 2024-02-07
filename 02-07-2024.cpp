// Min distance between two given nodes of a Binary Tree
// https://www.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* lowestCommonAncestor(Node* root, int p, int q) {
        if (!root || root->data == p || root->data == q) return root;

        Node* left = lowestCommonAncestor(root->left, p, q);
        Node* right = lowestCommonAncestor(root->right, p, q);
        
        if (left && right) return root;
        
        return left ? left : right;
    }
    
    int distanceFromRoot(Node* root, int x) {
        if (!root) return -1;
        if (root->data == x) return 0;
        
        int leftDist = distanceFromRoot(root->left, x);
        int rightDist = distanceFromRoot(root->right, x);
        
        if (leftDist != -1) return leftDist + 1;
        if (rightDist != -1) return rightDist + 1;
        
        return -1;
    }
    
    int findDist(Node* root, int a, int b) {
        Node* lca = lowestCommonAncestor(root, a, b);
        
        int distA = distanceFromRoot(lca, a);
        int distB = distanceFromRoot(lca, b);
        
        return distA + distB;
    }
};

int main () {
  
   return 0;
}