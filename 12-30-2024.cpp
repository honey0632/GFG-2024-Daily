// Union of Arrays with Duplicates
// https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n= a.size(),m=b.size();
        int ans=n;
        set<int> st;
        for(int j=0;j<n;j++){
            st.insert(a[j]);
        }
        for(int i=0; i<m;i++){
            st.insert(b[i]);
        }
        return st.size();
    }
};

int main() {
    
     return 0;
}