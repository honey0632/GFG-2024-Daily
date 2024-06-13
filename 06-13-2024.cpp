// Padovan Sequence
// https://www.geeksforgeeks.org/problems/padovan-sequence2855/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int padovanSequence(int n) {
       if(n<=2)
       {
           return 1;
       }
       int a=1,b=1,c=1;
       
       for(int i=3;i<=n;i++)
       {
           int temp=(a+b)%1000000007;
           a=b;
           b=c;
           c=temp;
       }
       
       return c;
    }
};

int main () {
    
     return 0;
}

