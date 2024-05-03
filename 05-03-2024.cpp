// K distance from root
// https://www.geeksforgeeks.org/problems/k-distance-from-root/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
}; 

class Solution
{
    public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
      if(k == 0) return {root->data};
      vector<int> v;
      queue<pair<Node *, int>> q;
      q.push({root,0});
      while(!q.empty()){
          int i = q.front().second;
        //   cout<<i<<" "<<k<<" ";
          
          Node * temp = q.front().first;
          if(i==k) v.push_back(temp->data);
          if(temp->left)  q.push({temp->left,i+1});
          if(temp->right) q.push({temp->right,i+1});
          
          q.pop();
          
      }
      return v;
    }
};

int main () {
    
     return 0;
}
