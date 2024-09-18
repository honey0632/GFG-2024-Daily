// Parenthesis Checker
// https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        stack<char> st;
        
        for(int j=0;j<s.length();j++){
            char i = s[j];
            if(i=='{' ||i=='['||i=='(') st.push(i);
            else if(st.size()>0&&((i=='}'&&st.top()=='{')||(i==']'&&st.top()=='[')||(i==')'&&st.top()=='('))) st.pop();
            else return 0;
        }
        
        return !st.size();
    }

};

int main () {
    
     return 0;
}