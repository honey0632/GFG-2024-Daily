// Middle of a Linked List
// https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; 
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        Node * slow = head  , * fast = head;
        
        while(fast->next && fast->next->next){
            slow= slow->next;
            fast = fast->next->next;
            
        }
        if(fast->next) return slow->next->data;
        else return slow->data;
    }
};

int main () {
    
     return 0;
}