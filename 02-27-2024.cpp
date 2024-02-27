// Play with OR
// https://www.geeksforgeeks.org/problems/play-with-or5515/1

#include<bits/stdc++.h>
using namespace std;

int* game_with_number(int arr[], int n)
{    
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i] | arr[i+1];
    }
    return arr;
    
}

int main () {
    
     return 0;
}