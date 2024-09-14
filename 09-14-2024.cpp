// Alternate positive and negative numbers
// https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int> p,n;
        int ng = arr.size();
	    for(int i=0;i<ng;i++){
	        if(arr[i]>=0) p.push_back(arr[i]);
	        else          n.push_back(arr[i]);
	    }
	    int i=0,j=0,k=0;
	    while(i<p.size()&&j<n.size()){
	        arr[k++]=p[i++];
	        arr[k++]=n[j++];
	    }
	    while(i<p.size()){
	        arr[k++]=p[i++];
	    }
	    while(j<n.size()){
	        arr[k++]=n[j++];
	    }

    }
};

int main () {
    
     return 0;
}