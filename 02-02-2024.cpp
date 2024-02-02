// Implement Atoi
// https://www.geeksforgeeks.org/problems/implement-atoi/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int n = s.length()-1, ans=0;
        bool fl=0;
        if(s[0]=='-') fl=1;
        for(int i=0;i<=n;i++){
            if((s[n-i]<'0'||s[n-i]>'9')&&n-i>0) return -1;
            if(fl&&i==n) break;
            else if((s[n-i]<'0'||s[n-i]>'9')) return -1;
            int x = s[n-i]-'0';
            ans += pow(10,i)*x;
            
        }
        if(fl) ans  = -1*ans;
        
        return ans;
    }
};
int main () {
  
   return 0;
}