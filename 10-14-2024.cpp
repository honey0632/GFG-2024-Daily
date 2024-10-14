// Count Linked List Nodes
// https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; 

class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        // Code here
        int length = 0;
        Node *temp=head;
        while(temp){
            length++;
            temp=temp->next;
        }
        return length;
    }
  
};

int main () {
    
     return 0;
}
