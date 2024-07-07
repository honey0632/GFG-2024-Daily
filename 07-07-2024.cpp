// Ancestors in Binary Tree
// https://www.geeksforgeeks.org/problems/ancestors-in-binary-tree/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};


class Solution {
  public:
    // Function should return all the ancestor of the target node
    bool trav(struct Node *root, int target,vector<int>&ans)
    {
        if(root==NULL)
        return false;
        
        if(root->data==target)
       {
            
            return true ;
       }
      
      bool lt= trav(root->left,target,ans);
       bool rt=trav(root->right,target,ans);
       if(lt||rt)
        {
            ans.push_back(root->data);
        }
        return lt||rt;
        
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ans;
        trav(root,target,ans);
        return ans;
        
    }
};

int main () {
    
     return 0;
}