// https://www.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1
// Find element occuring once when all other are present thrice




#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int result = 0;
        for (int i = 0; i < 32; i++) {
        int count = 0;
        int x = (1 << i);
        for (int j = 0; j < N; j++) {
            if (arr[j] & x) {
                count++;
            }
        }
        if (count % 3) {
            result |= x;
        }
    }
    return result;
    }
};
int main () {
  
   return 0;
}