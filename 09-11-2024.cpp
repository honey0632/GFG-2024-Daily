// Minimum Cost of ropes
// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        long long n =arr.size();
        priority_queue< long long,vector< long long>,greater< long long>> pq;
         long long ans=0;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        while(pq.size()>1)
        {
              long long x=pq.top();pq.pop();
              long long y=pq.top();pq.pop();
              ans+= (x+y);
              pq.push(x+y);
        }
        return ans;
    }
};

int main () {
    
     return 0;
}