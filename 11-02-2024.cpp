// Kth distance
// https://www.geeksforgeeks.org/problems/kth-distance3757/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        map<int,int> freq;
        for (int i=0;i<=k;i++){
            freq[arr[i]]++;
            if (freq[arr[i]]>1) return true;
        }
        for (int i=k+1;i<arr.size();i++){
            freq[arr[i-k-1]]--;
            freq[arr[i]]++;
            if (freq[arr[i]]>1) return true;
        }
        return false;
    }
};

int main() {
    
     return 0;
}