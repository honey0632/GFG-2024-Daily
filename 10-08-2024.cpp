// Largest Pair Sum
// https://www.geeksforgeeks.org/problems/pair-sum--120604/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int pairsum(vector<int> &arr) {
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;
        for(auto it:arr){
            if(it>maxi1) maxi1=it;
        }
        for(auto it:arr){
            if(it==maxi1) continue;
            else if(it>maxi2) maxi2=it;
        }
        return maxi1+maxi2;
    }
};

int main () {
    
     return 0;
}