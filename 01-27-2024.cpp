// Brackets in Matrix Chain Multiplication
// https://www.geeksforgeeks.org/problems/brackets-in-matrix-chain-multiplication1024/1

#include<bits/stdc++.h>
using namespace std;

 pair<string,int> dp[27][27];
    pair<string,int>check(int arr[],int i,int j)
    {
        if(i==j)
        {
            string sr="";
            sr+='A'+i-1;
            return {sr,0};
        }
        if(dp[i][j].first!="")return dp[i][j];
        int mn=INT_MAX;string sh="";
        for(int k=i;k<j;k++)
        {
            pair<string,int>left=check(arr,i,k);
            pair<string,int>right=check(arr,k+1,j);
            int temp=left.second+right.second+(arr[i-1]*arr[j]*arr[k]);
            string hh="("+left.first+right.first+")";
            if(temp<mn)
            {
                mn=temp;
                sh=hh;
            }
            
        }
        return dp[i][j]={sh,mn};
    }
    string matrixChainOrder(int p[], int n){
        // code here
        return check(p,1,n-1).first;
        
    }

int main () {
  
   return 0;
}