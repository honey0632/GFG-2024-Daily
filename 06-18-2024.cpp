// Number of Rectangles in a Circle
// https://www.geeksforgeeks.org/problems/rectangles-in-a-circle0457/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rectanglesInCircle(int r) {
        int ans=0;
        for(int i=1;i<2*r;i++) {
            int t=sqrt(4*r*r-i*i);
            ans+=t;
        }
        return ans;
    }
};

int main () {
    
     return 0;
}