// Second Largest
// https://www.geeksforgeeks.org/problems/second-largest3735/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
	    int max1=-1, max2=-1,n =arr.size();
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>max1){
	            max2=max1;
	            max1= arr[i];
	        }
	        else if(arr[i]<max1 && arr[i]>max2){
	            max2 = arr[i];
	        }
	        
	    }
	    return max2;
    }
};

int main() {
    
     return 0;
}