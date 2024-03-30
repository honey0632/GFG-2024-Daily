// Minimum element in BST
// https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


class Solution {
  public:
    int minValue(Node* root) {
        
        if(root->left == NULL) {
                return root->data;
        }
        return minValue(root->left);
    }
};

int main () {
    
     return 0;
}