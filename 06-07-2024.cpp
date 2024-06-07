// Maximum occured integer
// https://www.geeksforgeeks.org/problems/maximum-occured-integer4602/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

        vector<int> pref(maxx+2,0);
        for(int i=0;i<n;i++){
            int start = l[i];
            int end = r[i];
            pref[start] += 1;
            pref[end+1] -= 1;
        }
        int prefix = 0;
        for(int i=0;i<(maxx+2);i++){
            prefix += pref[i];
            pref[i] = prefix;

        }
        int count = 0, ans = 0;
        for(int i=0;i<(maxx+2);i++){
            if(pref[i]>count){
                ans = i;
                count = pref[i];
            }
        }
        return ans;
    }
};

int main () {
    
     return 0;
}