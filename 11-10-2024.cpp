// Union of Two Sorted Arrays with Distinct Elements
// https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-with-distinct-elements/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int>ans;
        set<int>st;
        for(int i:a){
            st.insert(i);
        }
        for(int i:b){
            st.insert(i);
        }
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};

int main() {
    
     return 0;
}