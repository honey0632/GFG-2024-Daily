// Delete Alternate Nodes
// https://www.geeksforgeeks.org/problems/delete-alternate-nodes/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};

// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        Node *temp = head;
        
        while(temp && temp->next ){
            Node* x= temp->next;
            temp->next = x->next;
            
            delete x;
            
            temp= temp->next;
        }
    }
};


int main () {
    
     return 0;
}