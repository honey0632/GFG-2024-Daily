// Arrange Consonants and Vowels
// https://www.geeksforgeeks.org/problems/arrange-consonants-and-vowels/1

#include<bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};


class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
     Node* arrangeCV(Node* head) {
        Node* vowel = new Node('$');
        Node* vowelHead = vowel;
        Node* consonant = new Node('$');
        Node* consonantHead = consonant;
        
        while (head != nullptr) {
            if (head->data == 'a' || head->data == 'e' || head->data == 'i' || head->data == 'o' || head->data == 'u') {
                vowel->next = head;
                vowel = vowel->next;
            } else {
                consonant->next = head;
                consonant = consonant->next;
            }
            head = head->next;
        }
        
        // Set the next pointer of the last node of each list to NULL
        vowel->next = nullptr;
        consonant->next = nullptr;
        
        // Connect the last node of the vowel list to the head of the consonant list
        vowel->next = consonantHead->next;
        
        return vowelHead->next;
    }
};

int main () {
    
     return 0;
}   