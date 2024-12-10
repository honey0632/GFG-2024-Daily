// Non-overlapping Intervals
// https://www.geeksforgeeks.org/problems/non-overlapping-intervals/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1]; 
        });
        int count = 0;          
        int lastEndTime = INT_MIN;  
        
        for (const auto& interval : intervals) {
           
            if (interval[0] >= lastEndTime) {
               
                lastEndTime = interval[1]; 
                count++;
            }
        }
        
        // intervals
        return intervals.size() - count;
    }
};


int main() {
    
     return 0;
}