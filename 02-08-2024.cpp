// Check if all leaves are at same level
// https://www.geeksforgeeks.org/problems/leaf-at-same-level/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};


class Solution{
  public:
    /*You are required to complete this method*/
    set<int> s;
    bool check(Node *root, int l = 0){
       
        if(root == NULL) return true;
        if(!root->left && !root->right) s.insert(l);
       
        check(root->left, l+1);
        check(root->right, l+1 );
       
        return s.size() == 1;
    }
};

int main () {
  
   return 0;
}