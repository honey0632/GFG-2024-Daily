// Merge Without Extra Space
// https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void mergeArrays(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int  n =arr1.size() , m  = arr2.size();
        int left = n - 1;
        int right = 0;

        while (left >= 0 && right < m)
        {
            if (arr1[left] > arr2[right])
            {
                swap(arr1[left], arr2[right]);
                left--, right++;
            }
            else
            {
                break;
            }
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
    }
};

int main() {
    
     return 0;
}