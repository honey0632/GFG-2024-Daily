// Recursive sequence
// https://www.geeksforgeeks.org/problems/recursive-sequence1611/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long sequence(int n){
        long long ans=0;
        long long mod = 1e9+7;
        int i =1 , num =1;
        while(i<=n){
            int k =i;
            long long smallAns=1;
            while(k--){
                smallAns = (smallAns*num)%mod;
                num++;
            }
            ans  = (ans+smallAns)%mod;
            i++;
        }
        return ans;
    }
};

int main () {
  
   return 0;
}