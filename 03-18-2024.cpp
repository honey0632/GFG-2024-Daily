// Level order traversal
// https://www.geeksforgeeks.org/problems/level-order-traversal/1

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
    //Function to return the level order traversal of a tree.
    vector<int> ans;
    vector<int> levelOrder(Node* root)
    {
        queue<Node *> q;
        if(root)
            q.push(root);
        while(q.size())
        {
            Node *front = q.front();
            q.pop();
            ans.push_back(front->data);
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
            
        }
        return ans;
      //Your code here
    }
};
int main () {
    
     return 0;
}