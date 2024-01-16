// Sequence of Sequence
// https://www.geeksforgeeks.org/problems/sequence-of-sequence1155/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int numberSequence(int m, int n){
        // code here
                        
/*      if(2*m < n) return 0;
        if(n == 1) return m;
        return numberSequence(m/2, n-1) + numberSequence(m-1, n);
*/      
        int dp[m + 1][n + 1];
        for (int i = 0; i < m + 1; i++) {
            for (int j = 0; j < n + 1; j++) {

                if (i == 0 || j == 0)
                    dp[i][j] = 0;

                else if (i < j)
                    dp[i][j] = 0;

                else if (j == 1)
                    dp[i][j] = i;
                else
                    dp[i][j] = dp[i - 1][j] + dp[i / 2][j - 1];
            }
        }
        return dp[m][n];

    }
};

int main () {
  
   return 0;
}