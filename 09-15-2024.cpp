// Binary Tree to DLL
// https://www.geeksforgeeks.org/problems/binary-tree-to-dll/1

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


// This function should return head to the DLL
class Solution {
  public:
    vector<Node*> in;
    void inor(Node* r){
        if(r == NULL) return ;
        inor(r->left);
        in.push_back(r);
        inor(r->right);
        return;
    }
    
    Node * bToDLL(Node *root)
    {   
        inor(root);
        in[0]->left=NULL;
        for(int i=0;i<in.size()-1;i++){
            in[i]->right = in[i+1];
            in[i+1]->left = in[i];
        }
        in[in.size()-1]->right=NULL;
        return in[0];
    }
};

int main () {
    
     return 0;
}