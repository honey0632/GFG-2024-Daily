// Remove K Digit
// https://www.geeksforgeeks.org/problems/remove-k-digits/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeKdigits(string s, int k) {
        int n = s.length();
        if (n == k) return "0";
        string ans = s.substr(0, n - k);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            int x = s[i] - '0';
            while (!st.empty() && st.top() > x && k > 0) {
                st.pop();
                k--;
            }
            st.push(x);
        }

        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        int i = ans.length()-1;
        while (!st.empty()) {
            ans[i--] = char(st.top() + '0');
            st.pop();
        }
        // reverse(ans.begin(), ans.end());
        // Trim leading zeros
        size_t start = ans.find_first_not_of('0');
        return (start != string::npos) ? ans.substr(start) : "0";
    }
};

int main () {
  
   return 0;
}