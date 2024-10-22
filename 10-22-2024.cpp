// Sub-arrays with equal number of occurences
// https://www.geeksforgeeks.org/problems/sub-arrays-with-equal-number-of-occurences3901/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
        int count=0;
        unordered_map<int,int>mp;
        int sum=0;
        mp[0]=1;
        for(auto i:arr)
        {
            if(i==x)
            {
                sum++;
            }
            else if(i==y)
            {
                sum--;
            }
            
            count+= mp[sum];
            mp[sum]++;
        }
        
        return count;
    }
};

int main() {
    
     return 0;
}