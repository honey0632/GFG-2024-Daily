// Construct Binary Tree from Inorder and Postorder
// https://www.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

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

class Solution
{
    public:
    Node* help(int* in,int* post,int inStart,int inEnd,int postStart,int postEnd)
    {
        //base case
        if(inStart>inEnd)
        return NULL;
        
        //recursive calls
        //and small calculation
        Node* root=new Node(post[postEnd]);
        
        int ind=-1;
        for(int i=inStart;i<=inEnd;i++)
        {
            if(in[i]==post[postEnd])
            {
                ind=i;
                break;
            }
        }
        
        int leftSize=ind-inStart;
        int rightSize=inEnd-ind;
        
        root->left=help(in,post,inStart,ind-1,postStart,postStart+leftSize-1);
        root->right=help(in,post,ind+1,inEnd,postEnd-rightSize,postEnd-1);
        return root;
    }
    Node *buildTree(int in[], int post[], int n) {
        return help(in,post,0,n-1,0,n-1);
    }
};

int main () {
    
     return 0;
}