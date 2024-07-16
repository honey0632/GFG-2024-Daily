// Remaining String
// https://www.geeksforgeeks.org/problems/remaining-string3515/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    string printString(string s, char ch, int cnt) {
        int n = s.length();
        for(int i = 0;i<n-1;i++){
            if(ch==s[i]) cnt--;
            if(cnt==0) return s.substr(i+1, n-i-1);
        }
        return "";
    }
};

int main () {
    
     return 0;
}