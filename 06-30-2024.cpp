// Delete node in Doubly Linked List
// https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};


class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(x==1)return head->next;
        Node* tmp=head,*prev;
        while(x--) prev=tmp,tmp=tmp->next;
            prev->prev->next=tmp;
        return head;
    }
};
int main () {
    
     return 0;
}