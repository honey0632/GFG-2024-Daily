// Nuts and Bolts Problem
// https://www.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here 
        string order = "!#$%&*?@^";
        map<char , int>mp ;
        for(int i = 0 ; i<9 ; i++)mp[order[i]] = i ;
        sort(nuts , nuts+ n  , [&](char x , char y){
            return mp[x]<mp[y] ;
        }); //custom comparator 
        for(int i =0 ; i<n ;i++){
            bolts[i] = nuts[i] ; 
        }
    }
};

int main () {
    
     return 0;
}