// Vertical sum
// https://www.geeksforgeeks.org/problems/vertical-sum/1

#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *left,*right;
};

class Solution{
  public:
  
    void helper(Node * root,unordered_map<int,int>&m,int level,int &min,int &max){
        if(!root) return ;
        
        if(level<min) min = level;
        if(level > max) max = level;
        m[level] = m[level] + root->data;
        
        helper(root->left,m,level-1,min,max);
        helper(root->right,m,level+1,min,max);
    }
    
    vector <int> verticalSum(Node *root) {
        // add code here.
        unordered_map<int,int> m;
        int min =0;
        int max =0;
        helper(root,m,0,min,max);
        
        vector<int> ans;
        
        for(int i=min;i<=max;i++){
            ans.push_back(m[i]);
        }
        return ans;
    }
};

int main () {
    
     return 0;
}