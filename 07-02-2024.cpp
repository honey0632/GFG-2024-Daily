// Linked list of strings forms a palindrome
// https://www.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string str = "";
    while(head != nullptr) {
        str.append(head->data);
        head = head->next;
    }
    
    // check the string is palindrome or not
    int start = 0, end = str.size() - 1;
    while(start < end) {
        if(str[start] == str[end]) {
               start += 1;
               end -= 1;
        }
        else return false;
    }
    
    return true;
    }
};

int main () {
    
     return 0;
}