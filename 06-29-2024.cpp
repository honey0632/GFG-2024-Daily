// Identical Linked Lists
// https://www.geeksforgeeks.org/problems/identical-linked-lists/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

bool areIdentical(struct Node *head1, struct Node *head2) {
    while(head1 and head2){
        if(head1->data!=head2->data) return 0;
        head1 = head1->next;
        head2 = head2->next;
    }
    if(head1 or head2) return 0;
    return 1;
    
}
int main () {
    
     return 0;
}