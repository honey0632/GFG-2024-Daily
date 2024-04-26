// Maximum sum of hour glass
// https://www.geeksforgeeks.org/problems/maximum-sum-of-hour-glass3842/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat)
    {
        if (n < 3 || m < 3)
            return -1;
        int ans = -1;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = 0; j < m - 2; j++)
            {
                int maxi = mat[i][j] + mat[i][j + 1] + mat[i][j + 2] + mat[i + 1][j + 1] + mat[i + 2][j] + mat[i + 2][j + 1] + mat[i + 2][j + 2];
                ans = max(ans, maxi);
            }
        }
        return ans;
    }
};




int main () {
    
     return 0;
}