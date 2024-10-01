// Multiply two linked lists
// https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long num1 = 0 , num2 = 0;
       while(first != NULL){
           int data = first->data;
           num1 = ((num1 * 10 ) + (long long )data)  % 1000000007;
           first = first->next;
       }
       while(second != NULL){
           int data = second->data;
           num2 = ((num2 * 10 ) +(long long) data)  % 1000000007;
           second = second->next;
       }
       
       return (num1 * num2) % 1000000007;
    
    }
};

int main () {
    
     return 0;
}