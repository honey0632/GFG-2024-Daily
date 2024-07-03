// Remove all occurences of duplicates in a linked list
// https://www.geeksforgeeks.org/problems/remove-all-occurences-of-duplicates-in-a-linked-list/1

#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    struct Node *next;
};



class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        
        Node* temp = head;       
        Node* prev = nullptr;
        
        while (temp != NULL && temp->next != NULL) {    
            if (temp->data != temp->next->data) {      
                prev = temp;                                                     
                temp = temp->next;                                               
                continue;
            }
    
            while (temp->next != NULL && temp->data == temp->next->data) { 
                Node* toDel = temp->next;                                                                    
                temp->next = temp->next->next;                                                          
                delete toDel;                                                                                             

            }
            Node* toDel = temp;                  

            if (temp == head) {                    
                 head = temp->next;
            } else {
                prev->next = temp->next;    
            }
    
            temp = temp->next;                 
            delete toDel;                      
        }
    
        return head;
    
    }
};

int main () {
    
     return 0;
}
