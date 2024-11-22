// Stock Buy and Sell – Max one Transaction Allowed
// https://www.geeksforgeeks.org/problems/buy-stock-2/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int maxPr = 0;
// get the lowest price to buy 
        int low = prices[0];
        for(int i = 1; i < prices.size(); i++){
            int profit = 0;
// if current price is greater than the lowest then calculate profit else update lowest buy value 
            if(prices[i] > low){
                low = min(low , prices[i-1]);
                profit = prices[i]-low;
            }else{
                low = min(low , prices[i]);
            }
// get the maximum profit
            maxPr = max(maxPr,profit);
        }
        return maxPr;
    }
};

int main() {
    
     return 0;
}