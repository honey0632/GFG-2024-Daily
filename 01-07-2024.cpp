// https://www.geeksforgeeks.org/problems/split-array-largest-sum--141634/1 
// Split Array Largest Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    bool isPos(int arr[] ,int N, int K, int mid){
        
        int i = 0, count = 0, sum = 0;
        while(i<N){
            while(i<N && sum<mid){
                sum += arr[i];
                i++;
            }
            
            if(sum>mid){
                i--;
    
                if(sum==arr[i]){
                    return false;
                }
            }
 
            count++;
            sum=0;
        }
        
        return count<=K;
    }
  
    int splitArray(int arr[] ,int N, int K) {
        
        int low = *min_element(arr,arr+N);
        int high= accumulate(arr,arr+N,0);
        
        int ans;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(isPos(arr,N,K,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        return ans;
    }
};

int main () {
  
   return 0;
}