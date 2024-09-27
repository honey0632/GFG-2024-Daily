// K Sized Subarray Maximum
// https://www.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

#include<bits/stdc++.h>
using namespace std;

#define pi pair<int,int>;
// typedef pair<int,int> pi;
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) 
    {
        int n = arr.size();
        vector <int> res;
        deque<int> q;
        
        int i = 0;
        for(i = 0;i<k;i++)
        {
            while((!q.empty()) && (arr[i] >= arr[q.back()]))
                q.pop_back();
   
            q.push_back(i);
            
        }
        for(;i<n;i++)
        {
            res.push_back (arr[q.front()]);
            while((!q.empty()) && (q.front() <= i-k))
            q.pop_front();
            
            while((!q.empty()) && (arr[i] >= arr[q.back()])) 
            q.pop_back();
            
            q.push_back(i);
            
        }
        
        res.push_back (arr[q.front()]);
        q.pop_front();
        
        //returning the list.
        return res;
        
    }
};

int main () {
    
     return 0;
}