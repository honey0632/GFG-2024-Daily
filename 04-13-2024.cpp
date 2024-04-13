// Reverse Bits
// https://www.geeksforgeeks.org/problems/reverse-bits3556/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
     long long reversedBits(long long x) {
        // code here
        long long ans=0;
        long long p=pow(2,31);
        while(x){
            ans+=(x&1)*p;
            p=p/2;
            x=x/2;
        }
        
        return ans;
    }
};

int main () {
    
     return 0;
}