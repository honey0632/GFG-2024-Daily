// Panagram Checking
// https://www.geeksforgeeks.org/problems/pangram-checking-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        vector<int> hash(26,1);
        int n=s.length()  , ans = 26;
        
        for(int i=0;i<n;i++){
            
            if(s[i]>='a'&&s[i]<='z'&&hash[s[i]-'a']){
                hash[s[i]-'a'] =0;
                ans--;
            }
            else if(s[i]>='A'&&s[i]<='Z'&&hash[s[i]-'A']){
                hash[s[i]-'A'] =0;
                ans--;
            }
        }
        
        return !ans;
    }

};

int main () {
  
   return 0;
}