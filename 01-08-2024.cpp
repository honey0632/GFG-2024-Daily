// Merge 2 sorted linked list in reverse order
// https://www.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1 

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};


class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        
        Node* h1=node1 , *h2=node2, *n1,*n2;
        // Node * newhead  = newNode();
        Node* prev = NULL;
        while(h1 && h2){
            if(h1->data < h2->data){
                n1 = h1->next;
                h1->next = prev;
                prev = h1;
                h1 = n1;
            }
            else{
                n2 = h2->next;
                h2->next = prev;
                prev = h2;
                h2 = n2;   
            }
        }
        while(h1){
            n1 = h1->next;
            h1->next = prev;
            prev = h1;
            h1 = n1;
        }
        while(h2){
            n2 = h2->next;
            h2->next = prev;
            prev = h2;
            h2 = n2;
        }
        return prev;
    }  
};

int main () {
  
   return 0;
}