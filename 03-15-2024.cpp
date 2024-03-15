// Linked List that is Sorted Alternatingly
// https://www.geeksforgeeks.org/problems/linked-list-that-is-sorted-alternatingly/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};


class Solution
{
    public:
    void sort(Node **head)
    {
        for(Node* p=*head; p!= NULL ; p=p->next){
            for(Node* q =p->next; q != NULL; q =q->next){
                if(p->data > q->data){
                    swap(p->data, q->data);
                }
            }
        }
    }
};

int main () {
    
     return 0;
}