// https://www.geeksforgeeks.org/problems/insertion-sort-for-singly-linked-list/1
// Insertion Sort for Singly Linked List

#include<bits/stdc++.h>
using namespace std;

//Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

class Solution
{
    public:
    void insert(Node*&newNode,Node*temp){
        Node*head=newNode;
        
        while(head->next!=NULL  && temp->data>=head->next->data){
            head=head->next;
        }
        Node*put=new Node(temp->data);
        put->next=head->next;
        head->next=put;
        head=newNode;
    }
    
    Node* insertionSort(struct Node* head)
    {   
        
        Node*newNode=new Node(-1);
        Node*temp=head;
        while(temp){
            insert(newNode,temp);
            temp=temp->next;
        }
        return newNode->next;
        
    }
    
};

int main () {
  
   return 0;
}