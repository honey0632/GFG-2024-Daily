// Min Chars to Add for Palindrome
// https://www.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minChar(string& st) {
        // Write your code here
        string s = st;
        reverse(st.begin(),st.end());
        s+="$"+st;
        int n = s.size();
        vector<int> lps(n);
        int len = 0;
        lps[0]=0;
        int i = 1;
        while(i<n){
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len==0){
                    lps[i]=0;
                    i++;
                }
                else{
                    len = lps[len-1];
                    
                }
            }
        }

        return (n/2)-lps[n-1];
    }
};


int main() {
    
     return 0;
}