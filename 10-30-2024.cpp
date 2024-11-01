// Pairs with difference k
// https://www.geeksforgeeks.org/problems/pairs-with-difference-k1713/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int low=0;
        int high=1;
        int ans=0;
        while(high<arr.size())
        {
            if (arr[high]-arr[low]==k)
            {
                low++;
                high++;
                int cnt1=1;
                int cnt2=1;
                while(high<arr.size() && arr[high]==arr[high-1])
                {
                    cnt2++;
                    high++;
                }
                while(low<high && arr[low-1]==arr[low])
                {
                    cnt1++;
                    low++;
                }
                
                ans+=cnt1*cnt2;
            }
            else if (arr[high]-arr[low]<k) high++;
            else low++;
        }
        return ans;
    }
};

int main() {
    
     return 0;
}