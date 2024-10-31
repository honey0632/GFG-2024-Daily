// Insert in Sorted way in a Sorted DLL
// https://www.geeksforgeeks.org/problems/insert-in-sorted-way-in-a-sorted-dll/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* prev, *next;
};

// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        Node * temp =head;
        if(head->data>=x){
            Node* newNode = new Node();
            newNode->data=x;
            newNode->next = head;
            head->prev = newNode;
            return newNode;
        }
        while(temp->next){
            Node* newNode = new Node();
            newNode->data=x;
            if(temp->next->data>=x){
                temp->next->prev = newNode;
                newNode->next = temp->next;
                newNode->prev = temp;
                temp->next = newNode;
                return head;
            }
            temp=temp->next;
        }
        
        Node* newNode = new Node();
        newNode->data=x;
        temp->next = newNode;
        newNode->prev = temp;
        
        return head;
        
    }
};

int main() {
    
     return 0;
}