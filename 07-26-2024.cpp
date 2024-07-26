// K-Pangrams
// https://www.geeksforgeeks.org/problems/k-pangrams0909/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    bool kPangram(string str, int k) {
        int cnt=0;
        unordered_map<char,int>mp;
        for(auto&x:str){
            if(x!=32){
                cnt++;
                mp[x]++;
                
            }
        }
        
        return cnt>=26 && 26-mp.size()<=k;
    }
};

int main () {
    
     return 0;
}