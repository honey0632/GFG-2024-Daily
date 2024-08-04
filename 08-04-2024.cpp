// N meetings in one room
// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
       vector<pair<int ,int>>v;
       for(int i = 0;i<n;i++){
           v.push_back({end[i],start[i]});
       }
       sort(v.begin(),v.end());
       
        int en = v[0].first, ans=1;
        for(int i= 0;i<n;i++){
            if(v[i].second>en){
                ans++;
                en = v[i].first;
            }
        }
        return ans;
    }
};

int main () {
    
     return 0;
}
