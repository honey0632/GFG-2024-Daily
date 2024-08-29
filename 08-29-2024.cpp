// Find length of Loop
// https://www.geeksforgeeks.org/problems/find-length-of-loop/1

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


class Solution {
  public:
  int is_cycle(Node*head){
      int count=1;
      if(head==NULL){
          return 0;
      }
      Node*slow=head;
      Node*fast=head;
      while(slow!=NULL&&fast!=NULL){
          
          fast=fast->next;
          if(fast!=NULL){
              fast=fast->next;
          }
          slow=slow->next;
          if(slow==fast){
              while(slow->next!=fast){
                    slow=slow->next;
                    count++;
              }
              return count;
          }
      }
      return 0;
  }

    int countNodesinLoop(Node *head) {
        
        if(head->next==NULL){
            return 0;
        }
        int  countNode= is_cycle(head);
        return countNode;  
    
    }
};

int main () {
    
     return 0;
}