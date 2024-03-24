// Insert an Element at the Bottom of a Stack
// https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>help;
        int n = st.size();
        while(!st.empty()){
            help.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!help.empty()){
            st.push(help.top());
            help.pop();
        }
        return st;
    }
};

int main () {
    
     return 0;
}