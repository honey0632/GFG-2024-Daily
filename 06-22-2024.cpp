// Extract the Number from the String
// https://www.geeksforgeeks.org/problems/extract-the-number-from-the-string3428/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long ExtractNumber(string s) {
        long long ans=-1;
        int n = s.length();
        for (int i=n-1;i>=0;i--){
            if(s[i]<='9' &&s[i]>='0'){
                long long number =0;
                long long  x=1;
                for(;i>=0 && s[i]<='9' &&s[i]>='0' ;i--){
                    if(number==-1) continue;
                    if(s[i]=='9') {
                        number = -1;
                        continue;
                    }
                    number += (s[i]-'0')*x;
                    x=x*10;
                }
                ans = max(ans,number);
            }
        }
        return ans;
    }
};

int main () {
    
     return 0;
}