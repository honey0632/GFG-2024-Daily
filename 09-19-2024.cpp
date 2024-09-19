// Reverse Words
// https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string s) {
        // code here
        string ans=s;
        int n = s.length();
        int prev = 0, j = n-1;
        for(int i =0;i<n;i++){
            if(s[i] == '.'){
                int k=i-1;
                for(;k>=prev;k-- ){
                    ans[j] = s[k];
                    j--;
                }
                ans[j--] = '.';
                prev = i+1;
            }   
        }
        
        for(int  i=n-1;i>=prev;i--){
            ans[j--] =s[i];
        }
        
        return ans;
    }
};

int main () {
    
     return 0;
}