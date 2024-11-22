// Meeting Rooms
// https://www.geeksforgeeks.org/problems/attend-all-meetings/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Your Code Here
         sort(begin(arr), end(arr), [&](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });
        
        int endTime = arr[0][1];
        int n = arr.size();
        
        for(int i = 1; i < n; ++i){
            if(arr[i][0] >= endTime){
                endTime = arr[i][1];
            }else return false;
        }
        
        return true;
    }
};

int main() {
    
     return 0;
}