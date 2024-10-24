// Modify the Array
// https://www.geeksforgeeks.org/problems/ease-the-array0633/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int n=arr.size();
       vector<int> ans;
       vector<int> dArr ;
       for(int i=0;i<n;i++){
       if(arr[i]!=0){
       dArr.push_back(arr[i]);
        }
       }
       
       int m = dArr.size();
       ans.push_back(dArr[0]);
       for(int i=1;i<m;i++){
       if(dArr[i]==ans[ans.size()-1] && dArr[i-1] == dArr[i] && dArr[i]!=0){
       ans[ans.size()-1] += dArr[i];
        }
       else{
            ans.push_back(dArr[i]);
            }
       }
       int s = n - ans.size();
       for(int i=0;i<s;i++){
        ans.push_back(0);
       }
       return ans;
    }
};

int main() {
    
     return 0;
}