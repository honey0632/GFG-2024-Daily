// Swap two nibbles in a byte
// https://www.geeksforgeeks.org/problems/swap-two-nibbles-in-a-byte0446/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int swapNibbles(int n) {
      int right=(n & 0b00001111);
      int left=(n & 0b11110000);
      return right<<4|left>>4;
    }
};

int main () {
    
     return 0;
}