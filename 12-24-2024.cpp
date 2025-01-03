// Search in a sorted Matrix
// https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
    // Function to search a given number in row-column sorted matrix.
    public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int r=mat.size();
        int c=mat[0].size();
        int j=r*c-1;
        int i=0;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            int element=mat[mid/c][mid%c];
            if(element==x)return true;
            else if(element<x) i=mid+1;
            else j=mid-1;
        }
        return false;
    }
};

int main() {
    
     return 0;
}