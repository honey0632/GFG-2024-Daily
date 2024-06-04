// Binary representation of next number
// https://www.geeksforgeeks.org/problems/binary-representation-of-next-number3648/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string binaryNextNumber(string s) {
        int n = s.size(), i = n-1;

        while(i >= 0 && s[i] == '1') s[i--] = '0';

        if(i == -1) s = "1" + s;
        else s[i] = '1';

        int f = 0;
        while(s[f] == '0') f++;
        return s.substr(f);
    }
};

int main () {
    
     return 0;
}