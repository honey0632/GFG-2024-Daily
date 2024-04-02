// Minimum Absolute Difference In BST
// https://www.geeksforgeeks.org/problems/minimum-absolute-difference-in-bst-1665139652/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

};


class Solution
{
    private:
    void helper(Node* root, vector<int> &temp){
        if(root==NULL){
            return ;
        }
        helper(root->left,temp);
        temp.push_back(root->data);
        helper(root->right,temp);
    }
    
    public:
    int absolute_diff(Node *root)
    {
        //Your code here
        int mini=INT_MAX;
        vector<int> temp;
        helper(root,temp);
        for(int i=0;i<temp.size()-1;i++){
            mini=min(mini,abs(temp[i]-temp[i+1]));
        }
        return mini;
    }
};

int main () {
    
     return 0;
}