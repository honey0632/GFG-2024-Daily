// Facing the sun
// https://www.geeksforgeeks.org/problems/facing-the-sun2126/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        // code here
         int c=1;
        int f = height[0];
        for(int i=0;i<height.size(); i++)
        {
            if(height[i]>f){
                f=height[i];
                c++;
            }
        }
        return c;
    }
};

int main () {
    
     return 0;
}