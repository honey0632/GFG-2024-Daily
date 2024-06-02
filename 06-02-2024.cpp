// Construct list using given q XOR queries
// https://www.geeksforgeeks.org/problems/construct-list-using-given-q-xor-queries/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> constructList(int n, vector<vector<int>> &q) {
        
        vector<int> res;
        int xx=0;
        for(int i=n-1;i>=0;i--){
            if(q[i][0]==0){
                res.push_back(q[i][1]^xx);
            }
            else{
                xx= xx^q[i][1];
            }
        }
        res.push_back(xx);
        sort(res.begin(),res.end());
        return res;
    }
};

int main () {
    
     return 0;
}