// Flatten BST to sorted list
// https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


class Solution
{
public:
    void inorder(vector<int>&v,Node* root){
        if(!root)return;
        inorder(v,root->left);
        v.push_back(root->data);
        inorder(v,root->right);
    }
    Node *flattenBST(Node *root)
    {
        vector<int>v;
        inorder(v,root);
        Node* n= new Node(v[0]);
        Node* head=n;
        n->left=NULL;
        for(int i=1;i<v.size();i++){
            Node* c=new Node(v[i]);
            n->right=c;
            c->left=NULL;
            n=n->right;
        }
        n->right=NULL;
        n->left=NULL;
        return head;
    }
};

int main () {
    
     return 0;
}