// Root to leaf paths sum
// https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1

struct Node
 {
     int data;
     Node* left, *right;
}; 

class Solution {
  public:
    int treePathsSum(Node *root) {
        // code here.
        queue<pair<Node*,int>>q;
        q.push({root,root->data});
        int answer=0;
        vector<int>res;
        while(!q.empty()){
            auto top=q.front();
            q.pop();
            auto nodee=top.first;
            auto value=top.second;
            if(nodee->left){
                q.push({nodee->left,value*10+nodee->left->data});
            }
            if(nodee->right){
                q.push({nodee->right,value*10+nodee->right->data});
            }
            if(nodee->left==nullptr && nodee->right==nullptr){
                res.push_back(value);
            }
        }
        for(auto k:res){
            answer+=k;
        }
        return answer;
    }
};

#include<bits/stdc++.h>
using namespace std;

int main() {
    
     return 0;
}