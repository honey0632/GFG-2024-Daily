// Deletion and Reverse in Circular Linked List
// https://www.geeksforgeeks.org/problems/deletion-and-reverse-in-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{

    int data;
    struct Node * next;

    Node(int x){
        data = x;
        next =NULL;
    };
    
};


class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        // code here
       
        if(head->next == head) return head;
        Node *prev = NULL;
        Node *newhead = head;
        while(head->next!=newhead)
        {
            Node *temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
         head->next = prev;
            prev = head;
        newhead->next = prev;
        return prev;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        // code here
        Node *newhead = head;
        while(head->next != newhead)
        {
            head = head->next;
        }
        Node *prev = head;
        head = newhead;
        int i = 0;
         while(head->next!=newhead)
        {
            if(head->data == key)
            {
                prev->next = head->next;
                if(i == 0) newhead = head->next;
                break;
            }
            prev = head;
            head = head->next;
            i++;
        }
        if(head->data == key)
            {
                prev->next = head->next;
                
            }
        return newhead;
    }
};

int main () {
    
     return 0;
}