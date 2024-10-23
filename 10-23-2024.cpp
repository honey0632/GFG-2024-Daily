// Find the Sum of Last N nodes of the Linked List
// https://www.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1

#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    
    // your task is to complete this function
    // function should return sum of last n nodes
    void reverse(struct Node*& head) {
        Node* prev = nullptr;
        Node* curr = head;
        
        while(curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        head = prev;
    }
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        int sum =0;
        reverse(head);
        while(n--) {
            sum += head->data;
            head = head->next;
        }
        
        return sum;
    }
};


int main() {
    
     return 0;
}