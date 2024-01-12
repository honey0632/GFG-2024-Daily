// Reverse First K elements of Queue
// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

#include<bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> st;
        int i = 0, n = q.size();
        while(k--){
            st.push(q.front());
            q.pop();
            n--;
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
            k++;
        }
        
        while(n--){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};

int main () {
  
   return 0;
}