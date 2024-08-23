// Left View of Binary Tre
// https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1

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
 

//Function to return a list containing elements of left view of the binary tree.

void preorder(Node* root, int h, vector<int>&ans){
    if(!root) return;
    
    if(h>ans.size()) ans.push_back(root->data);
    preorder(root->left,h+1,ans);
    preorder(root->right,h+1,ans);
}
vector<int> leftView(Node *root)
{
    vector<int> ans;
   if(!root) return ans;
   
   preorder(root,1, ans);
   
   return ans;
}

int main () {
    
     return 0;
}