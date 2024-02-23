// Buy and Sell a Share at most twice
// https://www.geeksforgeeks.org/problems/buy-and-sell-a-share-at-most-twice/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        //User function Template for C++
        int maxProfit(vector<int>&prices)
        {
            int buy1 = INT_MIN, sell1 = 0, buy2 = INT_MIN, sell2 = 0;
            for(int it : prices) 
            {
                buy1 = max(buy1, -it);
                sell1 = max(sell1, buy1 + it);
                buy2 = max(buy2, sell1 - it);
                sell2 = max(sell2, buy2 + it);
            }
        
            return sell2;
        }
};

int main () {
    
     return 0;
}