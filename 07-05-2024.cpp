// Vertical Width of a Binary Tree
// https://www.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    int verticalWidth(Node* root) {
        // code here
        if(root == NULL) return 0;
        unordered_set<int> st;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            Node* nodeVal = temp.first;
            int index = temp.second;
            if(st.find(index)==st.end()) st.insert(index);
            if(nodeVal->left)
                q.push({nodeVal->left,index-1});
            if(nodeVal->right)
                q.push({nodeVal->right,index+1});
        }
        return st.size();
    }
};
int main () {
    
     return 0;
}