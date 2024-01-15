// Grinding Geek
// https://www.geeksforgeeks.org/problems/grinding-geek/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int max_courses(int n, int total, vector<int> &cost)
    {
        vector<int> ans(total+1);
        for(int i=n-1;i>=0;i--){
            for(int j=total;j>=0;j--){
                if(j>=cost[i])
                ans[j]=max(ans[j],1+ans[j-0.1*cost[i]]);
            }
        }
        return ans[total];
    }
};


int main () {
  
   return 0;
}