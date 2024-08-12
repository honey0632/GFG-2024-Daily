// Sum of Middle elements of two sorted arrays
// https://www.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays2305/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
         int n=arr1.size();
        int mid = (n+n)/2 -1; // first middle element
        int i=0;
        int j=0;
        int ans = 0;
        int count = 2; // 2 elements ka sum  
        while(i < n  &&  j<n ){
            if(mid == 0  && count > 0){
                if(arr1[i] < arr2[j]){
                    ans += arr1[i];
                    i++;
                }
                else {
                    ans += arr2[j];
                    j++;
                }
                count--;
            }
            else if(count > 0){
                if(arr1[i]<arr2[j]) i++;
                else j++;
                mid--;
            }
            else return ans;
            
        }
        
        return ans;
    }
};

int main () {
    
     return 0;
}