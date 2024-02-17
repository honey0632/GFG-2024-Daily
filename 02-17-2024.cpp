// Does array represent Heap
// https://www.geeksforgeeks.org/problems/does-array-represent-heap4345/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isMaxHeap(int arr[], int n)
        {
            int d=0;
            for(int i=0;i<n-2;i++){
                if(arr[i]<arr[d+i+1] || arr[i]<arr[d+i+2]){
                    return 0;
                }
                d++;
            }
            return 1;
        }

};

int main () {
    
     return 0;
}