// Armstrong Numbers
// https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
     string armstrongNumber(int n) {
        int temp = n;
        int sum = 0;
        while(n != 0){
            sum += pow(n%10,3);
            n = (n-n%10)/10;
        }
        return (sum==temp)?"true":"false";
    }
};

int main () {
    
     return 0;
}