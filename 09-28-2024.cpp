// Minimal Cost
// https://www.geeksforgeeks.org/problems/minimal-cost/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) 
    {
        int n=arr.size();
        vector<int>mini(n,INT_MAX);
        mini[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            int mi=INT_MAX;
            for(int j=0;j<k;j++)
            {
                if(i+j+1<n)
                {
                    int cost=abs(arr[i]-arr[i+j+1])+mini[i+j+1];
                    mi=min(mi,cost);
                }
            }
            mini[i]=mi;
        }
        return mini[0];
    }
};

int main () {
    
     return 0;
}