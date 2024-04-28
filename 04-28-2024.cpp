// Delete Middle of Linked List
// https://www.geeksforgeeks.org/problems/delete-middle-of-linked-list/1

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
};



// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        Node* temp = head;
        unordered_map<int, Node*> mp;
        int n = 0;
        while(temp != NULL){
            n++;
            mp[n] = temp;
            temp = temp->next;
        }
        n = n/2;
        mp[n]->next = mp[n+2]; 
        return head;
    }
};
int main () {
    
     return 0;
}