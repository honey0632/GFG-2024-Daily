// Remove duplicates in array
// https://www.geeksforgeeks.org/problems/remove-duplicates-in-small-prime-array/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(auto x : arr) {
            if(mp.count(x) == 0) {
                ans.push_back(x);
                mp[x]++;
            }
        }
        return ans;
    }
};

int main() {
    
     return 0;
}