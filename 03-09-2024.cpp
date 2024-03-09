// Find the N-th character
// https://www.geeksforgeeks.org/problems/find-the-n-th-character5925/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
     
        string res;
        res=s;
        while(r){
            string temp;
            for(int i=0;i<res.size();i++){
                if(res[i]=='1'){
                    temp.push_back('1');
                    temp.push_back('0');
                    if(temp.size()>n){
                        res=temp;
                        break;
                    }
                }
                else{
                    temp.push_back('0');
                    temp.push_back('1');
                    if(temp.size()>n){
                        res=temp;
                        break;
                    }
                }
            }
            r--;
        }

        return res[n];
    }
};

int main () {
    
     return 0;
}