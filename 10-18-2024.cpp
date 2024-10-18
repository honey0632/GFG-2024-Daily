// Single Number
// https://www.geeksforgeeks.org/problems/single-number1014/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int ans =0;
        for(int i=0;i< arr.size();i++)
        {
            ans = ans ^ arr[i];
        }
        return ans;
    }
};

int main () {
    
     return 0;
}
