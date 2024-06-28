// The Palindrome Pattern
// https://www.geeksforgeeks.org/problems/the-palindrome-pattern3900/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n = arr.size();
    
        for (int i = 0; i < n; i++) {
            int flag1 = 1;
            for (int j = 0; j < n / 2; j++) {
                if (arr[i][j] != arr[i][n - j - 1]) {
                    flag1 = 0;
                    break;
                }
            }
            if (flag1 == 1) {
                return to_string(i) + " R";
            }
        }
        for (int i = 0; i < n; i++) {

            int flag2 = 1;
            for (int j = 0; j < n / 2; j++) {
                if (arr[j][i] != arr[n - j - 1][i]) {
                    flag2 = 0;
                    break;
                }
            }
            if (flag2 == 1) {
                return to_string(i) + " C";
            }
        }
    
        return "-1";
    }
};

int main () {
    
     return 0;
}