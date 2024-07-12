// Root to leaf path sum
// https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
        if(!root)return false;
        if(!root->left && !root->right){
            if(target-root->data==0)return true;
            return false;
        }
        return hasPathSum(root->left,target-root->data) || hasPathSum(root->right,target-root->data);
    }
};

int main () {
    
     return 0;
}