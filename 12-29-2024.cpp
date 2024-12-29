// Intersection of Two arrays with Duplicate Elements
// https://www.geeksforgeeks.org/problems/intersection-of-two-arrays-with-duplicate-elements/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        int m=a.size() ,n = b.size();
        vector<int> res;
        unordered_set<int> st;
        for(int i= 0;i<n;i++){
            st.insert(b[i]);
        }
        for(int i=0;i<m;i++){
            if(st.find(a[i])!=st.end()){
                res.push_back(a[i]);
                st.erase(a[i]);
            }
        }
        return res;
    }
};

int main() {
    
     return 0;
}