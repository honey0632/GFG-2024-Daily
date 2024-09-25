// Palindrome Linked List
// https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

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


class Solution{
  public:
    //Function to check whether the list is palindrome.
    struct Node* reverseList(struct Node *head)
    {   
        Node* prev = NULL;
        Node* curr = head;
        Node* next;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        Node* slow = head, * fast = head;
        
        while(fast->next &&fast->next->next){
            slow= slow->next;
            fast = fast->next->next;
        }
        fast = reverseList(slow->next);
        slow =head;
        while(fast){
            if (fast->data != slow->data) return 0;
            fast = fast->next;
            slow = slow->next;
        }
        return 1;
    }
};

int main () {
    
     return 0;
}