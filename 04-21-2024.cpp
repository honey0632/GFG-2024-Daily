// Three way partitioning
// https://www.geeksforgeeks.org/problems/three-way-partitioning/1

#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int n = array.size();
        int i = 0;
        int j = n - 1;
        int idx = 0;
        while(idx <= j){
            if(array[idx] < a){
                swap(array[idx], array[i]);
                i++;
                idx++;
            }
            else if(array[idx] > b){
                swap(array[idx], array[j]);
                j--;
            }
            else{
                idx++;
            }
        }
        return;
    }
};

int main () {
    
     return 0;
}