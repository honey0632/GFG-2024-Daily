// Nearest multiple of 10
// https://www.geeksforgeeks.org/problems/nearest-multiple-of-102437/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        int n = str.size();
        if(n<2){
            if(str[0]-'0' == '0')
                return str;
            else if(str[0]-'0' > 5)
                return "10";
            else
                return "0";
        }
        if(str[0]-'0' == '0')
            return str;
        else if(str[n-1]-'0' > 5){
            int k = n-2;
            while(k>=0 && str[k]=='9'){
                str[k]='0';
                k--;
            }
            if(k==-1)
                str="1"+str;
            else
                str[k] = str[k]+1;
        }
        str[n-1] = '0';
        return str;
    }
};

int main () {
    
     return 0;
}