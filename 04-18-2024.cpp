// Two Repeated Elements
// https://www.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        vector<int> ans;
        for(int i = 0; i < n+2; i++) {
            if(arr[abs(arr[i])] < 0)
                ans.push_back(abs(arr[i]));
            else
                arr[abs(arr[i])] *= -1;
        }
        return ans;
    }
};

int main () {
    
     return 0;
}