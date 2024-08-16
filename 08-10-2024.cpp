// Rotate a Linked List
// https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1

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
    Node* rotate(Node* head, int k) {
        Node* p1=head;
        Node* p2=head;
        vector<int>v(k);
        for(int i=0;i<k;i++){
            v[i]=p1->data;
            p1=p1->next;
        }
        while(p1){
            p2->data=p1->data;
            p2=p2->next;
            p1=p1->next;
        }
        for(int i=0;i<k;i++){
            p2->data=v[i];
            p2=p2->next;
        }
        return head;
    }
};

int main () {
    
     return 0;
}