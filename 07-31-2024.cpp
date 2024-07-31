// Longest Common Prefix of Strings
// https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        int n= arr.size();
        int minlen=INT_MAX;
        int minind=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(arr[i].length()<minlen){
                minlen = arr[i].length();
                minind=i;
            }    
        }
        bool fl=0;
        for(int i=0;i<minlen;i++){
            char x=arr[minind][i];
            for(int j=0;j<n;j++){
                if(x!=arr[j][i]){
                    fl=1;
                    break;
                }
            }    
            if(fl==0) ans.push_back(x);
            else break;
        }
        if(ans.length()==0) return "-1";
        else return ans;
    }
};

int main () {
    
     return 0;
}