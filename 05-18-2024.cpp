// Find the Highest number
// https://www.geeksforgeeks.org/problems/find-the-highest-number2259/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int low = 0, high = a.size()-1;

        while(low < high) {
            int mid = low+(high-low)/2;
            if(a[mid] < a[mid+1])
                low = mid+1;
            else
                high = mid;
        }

        return a[low];
    }
};

int main () {
    
     return 0;
}