// Longest Consecutive Subsequence
// https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        int longest = 1;
        unordered_set<int> st;
        for(int i = 0; i<n; i++){
          st.insert(arr[i]);
        }
        for(auto it : st){
          if(st.find(it - 1) == st.end()){
              int count = 1;
              int x = it;
              while(st.find(x+1) != st.end()){
                  count = count + 1;
                  x = x + 1;
              }
              longest = max(longest, count);
          }
        }
        return longest;
    }
};

int main() {
    
     return 0;
}