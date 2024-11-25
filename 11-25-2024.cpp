// Maximum Product Subarray
// https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    #define ll long long
	// Function to find maximum product subarray

	
	ll maxProduct(vector<int> arr) {
	    ll pre =1 , suff = 1 , ans = INT_MIN,n = arr.size();
	    bool fl =0;
	    for(int i = 0;i<n;i++){
	        if(arr[i] == 0){
	            pre = 1;
	            fl =1;
	        }
	        else {
	            pre = arr[i]*pre; 
	            ans = max(pre, ans);    
	        }
	        
	    }
	    for(int i = n-1;i>=0;i--){
	        if(arr[i] == 0){
	            suff = 1;
	        }
	        
	        else{
                suff = arr[i]*suff;
	            ans = max(suff, ans);
	        }
	        
	    }
	    if(ans<0 && fl) return 0;
	    return ans ;
	}
};

int main() {
    

     return 0;
}