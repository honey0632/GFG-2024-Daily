// Pairs violating the BST property
// https://www.geeksforgeeks.org/problems/pairs-violating-bst-property--212515/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

class Solution {
  public:

    /*You are required to complete below function */
        void traverse(Node* node, vector<int> &inorder){
        if(node == NULL){
            return;
        }
        
        traverse(node->left, inorder);
        inorder.push_back(node->data);
        traverse(node->right, inorder);
    }
    
    int merge(vector<int> &inorder, int l, int m, int r){
        vector<int> v(r - l + 1);
        
        int x = l;
        int y = m + 1;
        
        int z = 0;
        
        int invCnt = 0;
        
        while(x <= m && y <= r){
            if(inorder[x] <= inorder[y]){
                v[z++] = inorder[x++];
            }else{
                v[z++] = inorder[y++];
                
                invCnt += m - x + 1;
            }
        }
        
        while(x <= m){
            v[z++] = inorder[x++];
        }
        
        while(y <= r){
            v[z++] = inorder[y++];
        }
        
        z = 0;
        
        for(int i = l; i <= r; i++){
            inorder[i] = v[z++];
        }
        
        return invCnt;
    }
    
    
    int mergeSort(vector<int> &inorder, int l, int r){
        int invCnt = 0;
        
        if(l < r){
            int m = l + (r - l)/2;
            
            invCnt += mergeSort(inorder, l, m);
            invCnt += mergeSort(inorder,m + 1, r);
            invCnt += merge(inorder, l, m, r);
        }
        
        return invCnt;
    }

    /*You are required to complete below function */
    int pairsViolatingBST(int n, Node *root) {
        
        vector<int> inorder;
        
        traverse(root, inorder);
        
        int invCnt = 0;
        
        invCnt = mergeSort(inorder, 0, n - 1);
        
        return invCnt;
    }
};

int main () {
    
     return 0;
}