// Print Bracket Number
// https://www.geeksforgeeks.org/problems/print-bracket-number4058/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    vector<int> bracketNumbers(string s) {
        stack<int> st;
        int n=s.length();
        vector<int> res;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cnt++;
                st.push(cnt);
                res.push_back(cnt);
            }
            if(s[i]==')'){
                res.push_back(st.top());
                st.pop();
            }
        }
        return res;
    }
};

int main () {
    
     return 0;
}