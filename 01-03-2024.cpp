// https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/
// Smallest window containing 0, 1 and 2
// 

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int smallestSubstring(string S) {
        int a=-1, b=-1,c=-1;
        
        int mini =INT_MAX;
        for(int i=0;i<S.length();i++){
            if(S[i]=='0'){
                a=i;
            }
            else if(S[i]=='1'){
                b=i;
            }
            else if(S[i]=='2'){
                c=i;
            }
            if(a==-1||b==-1||c==-1) mini = INT_MAX;
            else mini = min(mini, max(abs(c-a),max(abs(b-a),abs(c-b))) +1);
        }
        if(a==-1||b==-1||c==-1) return -1;
        else return mini;
    }
};

int main () {
  
   return 0;
}