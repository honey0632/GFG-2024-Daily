// Distribute candies in a binary tree
// https://www.geeksforgeeks.org/problems/distribute-candies-in-a-binary-tree/1

#include<bits/stdc++.h>
using namespace std;


struct Node {
	int key;
	Node *left, *right;
};


class Solution
{
    public:
    int solve(Node *root, int &ans)
    {
        if(!root) return 0;

        int left=solve(root->left, ans);
        int right=solve(root->right, ans);
        
        ans+=abs(left)+abs(right);
        int extraCandies = root->key + left + right - 1;
        return extraCandies;
    }
    int distributeCandy(Node* root)
    {
        //code here
        int ans=0;
        solve(root,ans);
        return ans;
    }
};

int main () {
  
   return 0;
}