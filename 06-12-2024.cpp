// Count numbers containing 4
// https://www.geeksforgeeks.org/problems/count-numbers-containing-43022/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countNumberswith4(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
           string s=to_string(i);
           sort(s.begin(),s.end());
           for(int i=0;i<s.size();i++){
               if(s[i]=='4'){
                   cnt++;
                   break;
               }
           }
        }
       return cnt;
    }
};

int main () {
    
     return 0;
}