// Intersection Point in Y Shaped Linked Lists
// https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

#include<bits/stdc++.h>
using namespace std;

// Linked List Node
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

//Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        Node* point=head2;
        Node* check = head1;
        
       unordered_map<Node*, int> mp;
       while(check!=NULL){
           mp[check]++;
           check=check->next;
       }
       
       while(point!=NULL){
           if(mp[point]==1){
               return point->data;
           }
           point=point->next;
       }
        return -1;
    }

};

int main() {
    
     return 0;
}