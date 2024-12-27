// Count pairs with given sum
// https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum--150253/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
         int count=0;
        unordered_map<int,int> u;
        for(int x:arr)
        {
            if(u.find(target-x)!=u.end())
            count+=u[target-x];
            u[x]++;
        }
        return count;
    }
};


int main() {
    
     return 0;
}