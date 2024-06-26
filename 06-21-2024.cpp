// Compare two fractions
// https://www.geeksforgeeks.org/problems/compare-two-fractions4438/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
       string compareFrac(string str) {
    size_t c = str.find(", ");
    string frac1 = str.substr(0, c);
    string frac2 = str.substr(c + 2);
    int a = atoi(frac1.substr(0, frac1.find('/')).c_str());
    int b = atoi(frac1.substr(frac1.find('/') + 1).c_str());
    int c1 = atoi(frac2.substr(0, frac2.find('/')).c_str());
    int d = atoi(frac2.substr(frac2.find('/') + 1).c_str());
    if (a * d > c1 * b)
        return to_string(a) + "/" + to_string(b);
    else if (a * d < c1 * b)
        return to_string(c1) + "/" + to_string(d);
    else
        return "equal";
    }
};

int main () {
    
     return 0;
}