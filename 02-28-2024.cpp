// Check if a number is divisible by 8
// https://www.geeksforgeeks.org/problems/check-if-a-number-is-divisible-by-83957/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int DivisibleByEight(string s){
        
        if(s.length()<=3){
            int num = stoi(s);
            return num%8 ? -1:1;
        }
        else{
            int n=s.length();
            int num = s[n-1] +10*s[n-2] +100*s[n-3];
            return num%8 ? -1:1;
        }
        return -1;
    }
};

int main () {
    
     return 0;
}