// Non Repeating Character
// https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        char ch;
        for (size_t i = 0; i < s.length(); i++) {
            ch = s[i];
            if (s.find_last_of(ch) == s.find_first_of(ch)) {
                return ch;
            }
        }
        return '$';
    }
};

int main() {
    
     return 0;
}