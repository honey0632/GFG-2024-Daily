// Modular Exponentiation for large numbers
// https://www.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int m)
		{
            long long int ans=1;
            while(n>0){
                if(n%2==1){
                    ans=(ans*x)%m;
                    n--;
                }
                x=(x*x)%m;
                n=n/2;
                
            }
            return ans;
		}
};

int main () {
    
     return 0;
}