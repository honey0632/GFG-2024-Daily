// Party of Couples
// https://www.geeksforgeeks.org/problems/alone-in-couple5507/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findSingle(int n, int arr[]){
        int ans = arr[0];
        for(int i=1;i<n;i++){
            ans = ans^arr[i];
        }
        return ans;
    }
};

int main () {
    
     return 0;
}