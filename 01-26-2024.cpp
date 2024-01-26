// Fractional Knapsack
// https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    bool static cmp(Item a ,Item b){
        double r1 =(double)a.value/(double)a.weight;
        double r2= (double)b.value/(double)b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        
        
        int currWeight = 0;
        double currVal =0.0;
        for(int i=0;i<n;i++){
            if(currWeight<W){
                if(W-currWeight >= arr[i].weight ){
                    currWeight += arr[i].weight;
                    currVal += arr[i].value;
                }
                else{
                    currVal += ((double)arr[i].value/(double)arr[i].weight) * (double)(W-currWeight);
                    currWeight = W;
                    return currVal;
                }
            }
        }
        return currVal;
    }
        
};

int main () {
  
   return 0;
}