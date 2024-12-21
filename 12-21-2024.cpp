// Rotate by 90 degree
// https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& a) 
    {
        // code here
        int n=a.size(); 
        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - i - 1; j++) {
                int temp = a[i][j];
                a[i][j] = a[j][n - i - 1];
                a[j][n - i - 1] = a[n - i - 1][n - j - 1];
                a[n - i - 1][n - j - 1] = a[n - j - 1][i];
                a[n - j - 1][i] = temp; 
            }
        }
    } 
};

int main() {
    
     return 0;
}