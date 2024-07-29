// Row with max 1s
// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int n=arr.size();
        int m=arr[0].size();
        int count=0;
        int maxi=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(arr[i][j]==1)
                {
                    
                    int ones=m-j;
                    if(ones>count)
                    {
                        count=ones;
                        maxi=i;
                    }
                    break;
                }
            }
        }
        return maxi;
        // code here
    }
};
int main () {
    
     return 0;
}