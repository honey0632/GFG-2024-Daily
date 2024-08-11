// Job Sequencing Problem
// https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1

#include<bits/stdc++.h>
using namespace std;
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
 

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<pair<int, int>> v;
        int maxi = 0;
        for(int i = 0 ; i < n; i++)
        {
            v.push_back({arr[i].profit, arr[i].dead});
            maxi= max(maxi , arr[i].dead);
        }
        
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        
        int slot[maxi+1];
        for(int i = 0;i<=maxi;i++){
            slot[i]=-1;
        }
        int count  = 0,Profit =0;
        for(int i =0;i<n;i++){
            
            for(int j = v[i].second;j>=1;j--){
                if(slot[j]==-1){
                    slot[j] = 0;
                    count++;
                    Profit+= v[i].first;
                    break;
                }
            }
            if(count==maxi) return{count , Profit};
            
        }
        return{count,Profit};
    } 
};
int main () {
    
     return 0;
}