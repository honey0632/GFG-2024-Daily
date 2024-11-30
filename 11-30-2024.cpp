// Anagram
// https://www.geeksforgeeks.org/problems/anagram-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& a, string& b) {
        // Your code here
        unordered_map<char,int> mp;
        
        for(int i =0;i<a.length();i++){
            mp[a[i]]++; 
        }
        for(int i =0;i<b.length();i++){
            mp[b[i]]--; 
        }
        for(auto i: mp){
            if(i.second!=0) return 0;
        }
        return 1;
    }
};

int main() {
    
     return 0;
}