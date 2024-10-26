// Occurence of an integer in a Linked List
// https://www.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
}*head;

class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int cnt=0;
        while(head){
            if(head->data==key) cnt++;
            head=head->next;
        }
        return cnt;
    }
};
\
int main() {
    
     return 0;
}