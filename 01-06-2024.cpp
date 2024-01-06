// Techfest and the Queue
// https://www.geeksforgeeks.org/problems/techfest-and-the-queue1044/1


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int sumOfPowers(int a, int b){
	    int res = 0;
        for(int i=a;i<=b;i++)
        {
            int curr=i;
            while(curr%2==0)
            {
                res++;
                curr/=2;
            }
            for(int j=3;j*j<=curr;j+=2)
            {
                while(curr%j==0)
                {
                    res++;
                    curr/=j;
                }
            }
            if(curr>1){ res++; }
        }
        
        return res;
	}
};

int main () {
  
   return 0;
}