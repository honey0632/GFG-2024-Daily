// Peak element
// https://www.geeksforgeeks.org/problems/peak-element/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        if(n==1)return 0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>=arr[i+1]) return i;
        }
        return n-1;
    }
};

int main() {
    
     return 0;
}