// Sort 0s, 1s and 2s
// https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void sort012(vector<int>& a) {
        // code here
        int low=0,mid = 0;
        int high = a.size()-1;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[low++],a[mid++]);
            }
            else if(a[mid]==2){
                swap(a[mid],a[high--]);
            }
            else{
                mid++;
            }
        }
    }
};

int main () {
    
     return 0;
}