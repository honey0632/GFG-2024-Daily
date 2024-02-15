// Count all Possible Path
// https://www.geeksforgeeks.org/problems/castle-run3644/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int isPossible(vector<vector<int>>paths){
	    for(int i=0;i<paths.size();i++)
	    {
	        int cnt=0;
	        for(int j=0;j<paths[0].size();j++)
	        cnt+=paths[i][j];
	        
	        if(cnt&1)
	        return 0;
	    }
	    return 1;
	}

};

int main () {
  
   return 0;
}