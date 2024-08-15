// Add 1 to a Linked List Number
// https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

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
    Node* addOne(Node* head) {
        Node * ch = NULL;
        Node * temp =head;
        while(temp){
            
            if(temp->data!=9){
                ch=temp;
            }
            if(temp->next == NULL)break;
            temp = temp->next;
        }
        if(ch == temp){
            temp->data+=1;
            return head;
        }
        else if(ch!=NULL){
            ch->data+=1;
            ch = ch->next;
            while(ch){
                ch->data =0;
                ch = ch->next;
            }
            return head;
        }
        else{
            Node * newnode = new Node(1);
            newnode->next = head;
            while(head){
                head->data =0;
                head = head->next;
            }
            return newnode;
        }
    }
};

int main () {
    
     return 0;
}