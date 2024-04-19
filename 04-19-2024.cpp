// Find missing in second array
// https://www.geeksforgeeks.org/problems/in-first-but-second5423/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findMissing(int a[], int b[], int n, int m) 
    { 
        unordered_set<int> b_elements;
        for(int i = 0; i < m; i++) {
            b_elements.insert(b[i]);
        }
        vector<int> result;
        for(int i = 0; i < n; i++) {
            if(b_elements.find(a[i]) == b_elements.end()) {
                result.push_back(a[i]);
            }
        }
        return result;
    } 
};

int main () {
    
     return 0;
}