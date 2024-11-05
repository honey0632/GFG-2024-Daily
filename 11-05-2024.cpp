// Rotate by 90 degree
// https://www.geeksforgeeks.org/problems/rotate-by-90-degree0356/1

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    int n = mat.size();
    for(int i = 0 ;i<n;i++){
        for(int j = i;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
        reverse(mat[i].begin(),mat[i].end());
    }
}

int main() {
    
     return 0;
}