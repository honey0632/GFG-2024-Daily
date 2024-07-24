// Check for BST
// https://www.geeksforgeeks.org/problems/check-for-bst/1

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

class Solution
{
    public:
    
    void inorder(Node * root , vector<int>&v){
        if (!root ) return ;
        
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right,v);
        
    }
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root)
    {   
        vector<int> v;
        
        inorder(root,v);
        if(!root) return 1;
        
        for(int i=1;i<v.size();i++){
            if(v[i]<=v[i-1]) return 0;
            
        }

        return 1;
        
    }
};
int main () {
    
     return 0;
}