// Sum Tree
// https://www.geeksforgeeks.org/problems/sum-tree/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
    
}; 

// Should return true if tree is Sum Tree, else false
class Solution {
  private:
    bool res=true;
  public:
    int f(Node* n){
        if(!n)return 0;
        int ls=f(n->left),rs=f(n->right);
        if(!n->left && !n->right)
            return n->data;
        if(n->data!=ls+rs)
            res=false;
        return n->data+ls+rs;
    }
    bool isSumTree(Node* root) {
        f(root);
        return res;
    }
};

int main () {
    
     return 0;
}