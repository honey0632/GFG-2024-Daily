//
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;

  Node(int x)
  {
    data = x;
    left = right = NULL;
  }
};

class Solution
{
public:
  // Function to check whether all nodes of a tree have the value
  // equal to the sum of their child nodes.
  int isSumProperty(Node *root)
  {
    // Add your code here
    if (!root || (!root->left && !root->right))
    {
      return 1;
    }

    int left = 0, right = 0;

    if (root->left)
    {
      left = root->left->data;
    }

    if (root->right)
    {
      right = root->right->data;
    }

    if (root->data == left + right)
    {
      return isSumProperty(root->left) && isSumProperty(root->right);
    }
    else
    {
      return 0;
    }
  }
};

int main()
{

  return 0;
}