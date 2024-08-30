// N-Queen Problem
// https://www.geeksforgeeks.org/problems/n-queen-problem0315/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<bool>col;
    vector<bool>ld;
    vector<bool>rd;
    void find(int n,vector<vector<int>>& ans,vector<int>&a,int i){
        if(i==n){
            ans.push_back(a);
            return;
        }
        for(int j=0;j<n;j++){
            if(!col[j]&&!ld[n+j-i-1]&&!rd[i+j]){
                a.push_back(j+1);
                col[j]=ld[n+j-i-1]=rd[i+j]=1;
                find(n,ans,a,i+1);
                col[j]=ld[n+j-i-1]=rd[i+j]=0;
                a.pop_back();
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
        vector<int>temp;
        ld=vector<bool>(2*n-1);
        rd=vector<bool>(2*n-1);
        col=vector<bool>(n);
        find(n,ans,temp,0);
        return ans;
    }
};

int main () {
    
     return 0;
}