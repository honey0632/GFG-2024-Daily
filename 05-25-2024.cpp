// You and your books
// https://www.geeksforgeeks.org/problems/you-and-your-books/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        // Your code here
        long long ans = 0,sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] <= k){
                sum += arr[i];
            }
            else{
            ans = max(ans, sum);
            sum = 0;
            }
        }
        ans = max(ans, sum);
        return ans;
    }
};

int main () {
    
     return 0;
}