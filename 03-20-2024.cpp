// Sum of nodes on the longest path from root to leaf node
// https://www.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    
    void solve(Node* root, unordered_map<int,int>& mp, int path, int sum){
        if(!root){
            if(mp.find(path)==mp.end())
                mp[path] = sum ;
            else{
                if(sum > mp[path]){
                   mp[path] = sum ; 
                }
            }                
            return ;
        }
        path++ ;
        sum += root->data ;
        solve(root->left,mp,path,sum) ;
        solve(root->right,mp,path,sum) ;
        path-- ;
        sum -= root->data ;
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        unordered_map<int,int> mp ;
        int maxPath = INT_MIN , maxSum = INT_MIN ;
        int path = 0 , sum = 0 ;
        solve(root,mp,path,sum) ;
        for(auto i : mp){
            if(i.first>=maxPath){
                maxSum = i.second ;
                maxPath = i.first ;
            }
        }
        return maxSum ;
    }
};
int main () {
    
     return 0;
}