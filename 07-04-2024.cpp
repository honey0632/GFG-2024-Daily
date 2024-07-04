// Duplicate Subtrees
// https://www.geeksforgeeks.org/problems/duplicate-subtrees/1

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
    string helper(Node *root, vector<Node*> &ans, 
                unordered_map<string,int> &mp)
    {
        string temp = "";
        if(root == NULL)
            return "#";
        temp += to_string(root->data);
        temp += helper(root->left,ans,mp);
        temp += helper(root->right,ans,mp);
        if(mp[temp] == 1)
            ans.push_back(root);
        mp[temp]++;
        return temp;
        
    }
    vector<Node*> printAllDups(Node* root) 
    {
        vector<Node*> ans;
        unordered_map<string,int> mp;
        helper(root,ans,mp);
        return ans;
        // Code here
    }
};

int main () {
    
     return 0;
}