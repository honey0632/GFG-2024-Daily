// Decimal Equivalent of Binary Linked List
// https://www.geeksforgeeks.org/problems/decimal-equivalent-of-binary-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        int mod = 1000000007;
        long long unsigned int decimalValue(Node *head)
        {   
              long long ans = 0;
           while(head!=NULL){
               ans = ((ans<<1) | head->data) % mod;
               head = head->next;
           }
           return ans;
        }
};

int main () {
  
   return 0;
}