// Is Linked List Length Even?
// https://www.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1

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
    bool isLengthEven(struct Node **head) {
        // Code here
        
        bool flag=true;
        struct Node *temp = *head;
        while(temp!=nullptr){
            flag=!flag;
            temp = temp->next;
        }
        return flag;
        
    }
};

int main() {
    
     return 0;
}