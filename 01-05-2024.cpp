// https://www.geeksforgeeks.org/problems/count-possible-ways-to-construct-buildings5007/1
// Count possible ways to construct buildings
#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int TotalWays(int N)
	{   
	    long long int a =2,b=3, mod=1e9+7;
	    if(N==1) return 4;

	    while(N-2>0){
	         int c=(a+b)%mod;
	        a=b;
	        b=c;
	        N--;
	    }

	    return  (b*b)%(mod);
	}
};

int main () {
  
   return 0;
}
