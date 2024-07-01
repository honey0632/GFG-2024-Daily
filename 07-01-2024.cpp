// Make Binary Tree From Linked List
// https://www.geeksforgeeks.org/problems/make-binary-tree/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
  public:
    void convert(Node *head, TreeNode *&root) {
        
        root=new TreeNode(head->data);
        queue<TreeNode*> q;
            TreeNode* temp=root;
            int i=0;
        while(head->next!=NULL)
        {
            head=head->next;
            TreeNode* node=new TreeNode(head->data);
            q.push(node);
            
            if(i%2==0){
                temp->left=node;
            }else{
                temp->right=node;
                temp=q.front();q.pop();
            }
            i++;
        }
    }
};

int main () {
    
     return 0;
}