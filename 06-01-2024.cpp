// Odd Even Problem
// https://www.geeksforgeeks.org/problems/help-nobita0532/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool check(int a, int b){
        if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0)) return 1;
        else return 0;
    }
  
    string oddEven(string s) {
        // code here 
        unordered_map<char, int>mpp;
        int n=s.length();
        for(int i=0; i<n; i++){
            mpp[s[i]]++;
        }
        int cnt=0;
        for(auto &it:mpp){
            cnt+=(check(it.first-'a'+1, it.second));
        }
        if(cnt%2==0) return "EVEN";
        else return "ODD";
    }
};

int main () {
    
     return 0;
}