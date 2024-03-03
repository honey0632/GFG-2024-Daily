// Largest Number formed from an Array
// https://www.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
 
    static bool compare(string &a,string &b){
        
        return a+b>b+a;
        
    }
    string printLargest(int n, vector<string> &arr) {
        
        sort(arr.begin(),arr.end(),compare);
        
        string ans="";
        for(auto x:arr)
        ans+=x;
        return ans;
    }
};

int main () {
    
     return 0;
}