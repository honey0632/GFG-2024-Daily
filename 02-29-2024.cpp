// Sum of bit differences
// https://www.geeksforgeeks.org/problems/sum-of-bit-differences2937/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    long long ans =0;
	    
	    for(int i=0;i<31;i++){
	        long long set =0, nonset=0;
	        for(int j=0;j<n;j++){
	            if(arr[j] & (1<<i)) set++;
	            else nonset++;
	        }
	        ans+=set*nonset*2;
	    }
	    return ans;
	}
};

int main () {
    
     return 0;
}