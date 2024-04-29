// Remove every kth node
// https://www.geeksforgeeks.org/problems/remove-every-kth-node/1

#include<bits/stdc++.h>
using namespace std;

// Link list Node 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

class Solution {
    public:
    Node* deleteK(Node *head,int k){
      
      Node * temp =head , *prev = NULL;
      if(k==1) return NULL;
      int i=1;
      while(temp){
          if(i==k){
              prev->next = temp->next;
              temp->next = NULL;
              temp = prev->next;
              i=1;
          }
          else{
              prev= temp;
              temp=temp->next;
              i++;
           }
       }
       return head;
    }
};

int main () {
    
     return 0;
}