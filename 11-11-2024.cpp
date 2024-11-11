// Make array elements unique
// https://www.geeksforgeeks.org/problems/make-array-elements-unique--170645/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minIncrements(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int op = 0;
        int maxi = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (maxi < arr[i])
            {
                maxi = arr[i];
            }
            else
            {
                maxi++;
                op += maxi - arr[i];
            }
        }
        return op;
    }
};

int main() {
    
     return 0;
}