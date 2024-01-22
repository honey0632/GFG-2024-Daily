// Paths from root with a specified sum
// https://www.geeksforgeeks.org/problems/paths-from-root-with-a-specified-sum/1


#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	struct Node *left, *right;
};

class Solution
{
    public:
    void f(Node* root,int sum,vector<int>&v,vector<vector<int>> &ans){
        if(sum==0){
            ans.push_back(v);
        }
        if(root==NULL) return ;
        if(root->left==NULL && root->right) return ;
        
        
        v.push_back(root->key);
        f(root->left,sum-root->key,v,ans);
        f(root->right,sum-root->key,v,ans);
        v.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        // vector<int> v;
        vector<vector<int>> ans;
        // f(root,sum,v,ans);
        // return ans;
        
        queue<pair<Node*,pair<int,vector<int>>>> q;
        vector<int> v;
        v.push_back(root->key);
        q.push({root,{root->key,v}});
        
        while(q.size()!=0){
            auto it=q.front();
            q.pop();
            Node* temp=it.first;
            int cur_sum=it.second.first;
            vector<int> v1=it.second.second;
            
            if(cur_sum==sum){
                ans.push_back(v1);
            }
            
            
            
            if(temp->left!=NULL){
                cur_sum+=temp->left->key;
                v1.push_back(temp->left->key);
                q.push({temp->left,{cur_sum,v1}});
                v1.pop_back();
                cur_sum-=temp->left->key;
                
            }
            if(temp->right!=NULL){
                cur_sum+=temp->right->key;
                v1.push_back(temp->right->key);
                 q.push({temp->right,{cur_sum,v1}});
            }
            
            // cout<<cur_sum<<endl;
        }
        return ans;
    }
};

int main () {
  
   return 0;
}