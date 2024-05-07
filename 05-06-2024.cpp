// Print all nodes that don't have sibling
// https://www.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
     int data;
     Node* left, *right;
}; 

void solve(Node* root, vector<int>& ans) {
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right!=NULL) {
        ans.push_back(root->right->data);
        solve(root->right,ans);
    }
    else if(root->left!=NULL && root->right==NULL) {
        ans.push_back(root->left->data);
        solve(root->left,ans);
    }
    else {
        solve(root->left,ans);
        solve(root->right,ans);
    }
}
vector<int> noSibling(Node* node)
{
   vector<int>ans;
   solve(node,ans);
   if(ans.size()==0){
       ans.push_back(-1);
       return ans;
   }
   sort(ans.begin(),ans.end());
   return ans;
}

int main () {
    
     return 0;
}