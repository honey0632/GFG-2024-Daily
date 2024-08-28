// Sorting Elements of an Array by Frequency
// https://www.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool fun(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second>b.second)
        return true;
        else if(a.second<b.second)
        return false;
        else
        return a.first<b.first;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int,int> u;
        vector<pair<int,int>>v;
        vector<int>count;
        for(int i=0;i<arr.size();i++)
        {
            u[arr[i]]++;
        }
        for(auto x:arr)
        {
            v.push_back({x,u[x]});
        }
        sort(v.begin(),v.end(),fun);
        for(auto x:v)
        count.push_back(x.first);
        return count;
    }
};

int main () {
    
     return 0;
}