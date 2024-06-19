// Find maximum volume of a cuboid
// https://www.geeksforgeeks.org/problems/magical-box5306/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        double ans =
            (pow((perimeter - (sqrt(pow(perimeter, 2) - (24 * area)))) / 12, 2) *
             ((perimeter / 4) -
              (2 * ((perimeter - (sqrt(pow(perimeter, 2) - (24 * area)))) / 12))));

        return ans;
    }
};

int main () {
    
     return 0;
}