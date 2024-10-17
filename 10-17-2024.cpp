// Split Linked List Alternatingly
// https://www.geeksforgeeks.org/problems/split-singly-linked-list-alternatingly/1

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

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        struct Node *head1=NULL, *head2=NULL, *temp1=NULL, *temp2=NULL;
        
        int c=0;
        
        while(head!=NULL)
        {
            if(c%2==0)
            {
                if(head1==NULL)
                {
                    head1=new Node(head->data);
                    temp1=head1;
                }
                else
                {
                    temp1->next=new Node(head->data);
                    temp1=temp1->next;
                    
                }
                c++;
                head=head->next;
            }
            else
            {
                if(head2==NULL)
                {
                    head2=new Node(head->data);
                    temp2=head2;
                }
                else
                {
                    temp2->next=new Node(head->data);
                    temp2=temp2->next;   
                }
                head=head->next;
                c++;
            }
        }
        vector<Node*> nodevector;
        nodevector.push_back(head1);
        nodevector.push_back(head2);
        
        return nodevector;
    }
};

int main () {
    
     return 0;
}