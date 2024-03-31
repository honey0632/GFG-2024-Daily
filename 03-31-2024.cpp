// Closest Neighbour in BST
// https://www.geeksforgeeks.org/problems/closest-neighbor-in-bst/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left, *right;
};



class Solution {
    int search(Node* root, Node* prev, int n){
        if(!root){
            if(prev)
                return prev->key;
            return -1;
        }
        if(root->key<=n)
            return search(root->right,root,n);
        return search(root->left,prev,n);
    }
  public:
    int findMaxForN(Node* root, int n) {
        return search(root, nullptr, n);
    }
};

int main () {
    
     return 0;
}