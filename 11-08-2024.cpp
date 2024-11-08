// Minimum repeat to make substring
// https://www.geeksforgeeks.org/problems/minimum-times-a-has-to-be-repeated-such-that-b-is-a-substring-of-it--170645/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        string rep=A;
        int cnt=1;
        while(A.size()<B.size()){
            A+=rep;
            cnt++;
        }
        if(A.find(B)!=-1){
            return cnt;
        }
        A+=rep;
        cnt++;
        if(A.find(B)!=-1){
            return cnt;
        }
        return -1;
    }
};

int main() {
    
     return 0;
}
