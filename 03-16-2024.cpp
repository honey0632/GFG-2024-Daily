// Delete without head pointer
// https://www.geeksforgeeks.org/problems/delete-without-head-pointer/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
void deleteNode(Node *del_node)
    {
       // Your code here
       if(del_node==NULL || del_node->next==NULL){
           return;
       }
       while(del_node->next!=NULL){
           del_node->data = del_node->next->data;
           if(del_node->next->next==NULL){
               del_node->next=NULL;
               break;
           }
           del_node = del_node->next;
       }
    }

};
int main () {
    
     return 0;
}