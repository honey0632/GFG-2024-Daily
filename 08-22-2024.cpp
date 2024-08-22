// Alien Dictionary
// https://www.geeksforgeeks.org/problems/alien-dictionary/1

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string findOrder(string dict[], int n, int v) {
        //code here
        vector<int> adj[v];
        
        for(int i=0;i<n-1;i++){
            string s1 = dict[i];
            string s2 = dict[i+1];
            
            int len = min(s1.size(),s2.size());
            for(int j = 0;j<len;j++){
                if(s1[j]!=s2[j]){
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                    
                }
            }
        }
        
        vector<int> indegree(v,0);
	    
	    
	    for(int i=0;i<v;i++){
	        for(auto it:adj[i]){
	            indegree[it]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i=0;i<v;i++){
	        if(indegree[i]==0) q.push(i);
	    }
	    string ans = "";
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        ans= ans+ char(node + 'a');
	        
	        for(auto it : adj[node]){
	            indegree[it]--;
	            if(indegree[it]==0)q.push(it);
	        }
	    }

	    return ans;
	
    }
};

int main () {
    
     return 0;
}