// Validate an IP Address
// https://www.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int isValid(string s) {
            int cnt=0, n=s.length(),j=0;
            if(s[0]=='.'||s[n-1]=='.'||(s[0]=='0'&&s[1]!='.')) return 0;
            
            for(int i=0;i<n;i++){
                if(!((s[i]>='0'&&s[i]<='9')||s[i]=='.'))return 0;
                if(i>0&&i<n-1){
                    if(s[i]=='0'&&s[i-1]=='.'&&(s[i+1]>='0'&&s[i+1]<='9')) return 0;
                }
            }
            
            for(int i=1;i<n;i++){
                if((s[i]=='.')&& s[i-1]=='.') return 0;
                int x=0;
                if(s[i]=='.'){
                    x = stoi(s.substr(j,i-j));
                    if(x<0 ||x>255) return 0;
                    j=i+1;
                    cnt++;
                }
                if(i==n-1){
                    x = stoi(s.substr(j,n-j));
                    if(x<0 ||x>255) return 0;

                }
            }
            if(cnt!=3) return 0;
            
            return 1;
        }
};

int main () {
    
     return 0;
}
