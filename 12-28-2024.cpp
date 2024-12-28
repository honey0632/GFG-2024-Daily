// Find All Triplets with Zero Sum
// https://www.geeksforgeeks.org/problems/find-all-triplets-with-zero-sum/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
         vector<vector<int>> result;
        int n = arr.size();
        for(int i = 0 ; i < n - 2 ; i++){
            int sum = 0 - arr[i];
            unordered_map<int,vector<int>> mp;
            for(int j = i+1 ; j < n ; j++){
                int find_sum = sum - arr[j];
                if(mp.find(find_sum) != mp.end()){
                    for(auto x : mp[find_sum]){
                        vector<int> triplets = {i , min(x,j) , max(j,x)};
                        result.push_back(triplets);
                    }
                }
                mp[arr[j]].push_back(j);
            }
        }
        return result;
    }
};

int main() {
    
     return 0;
}