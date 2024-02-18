// Sum of leaf nodes in BST
// https://www.geeksforgeeks.org/problems/sum-of-leaf-nodes-in-bst/1

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
}; 


class Solution
{
    public:
        /*You are required to complete below method */
        int sumOfLeafNodes(Node *root ){
             if(root==NULL){
                 return 0;
             }
             if(root->left==NULL && root->right==NULL){
                 return root->data;
             }
             return sumOfLeafNodes(root->left)+sumOfLeafNodes(root->right);
        }
};

int main () {
    
     return 0;
}