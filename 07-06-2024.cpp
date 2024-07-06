// Populate Inorder Successor for all nodes
// https://www.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};

class Solution {
  public:
    Node* prev = NULL;

    void populateNext(Node *root) {
        // code here
        if(root==NULL) return;
        populateNext(root->left);
        if(prev!=NULL){
            prev->next = root;
        }
        prev = root;
        populateNext(root->right);
    }
};

int main () {
    
     return 0;
}