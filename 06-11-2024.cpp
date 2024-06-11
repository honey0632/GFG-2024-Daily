// Maximum Tip Calculator
// https://www.geeksforgeeks.org/problems/maximum-tip-calculator2631/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {

        vector<pair<int, pair<int, int>>> differences;
        for (int i = 0; i < n; i++) {
            int val = arr[i] - brr[i];
            differences.push_back({val, {arr[i], brr[i]}});
        }
        
    
        sort(differences.begin(), differences.end());
        
 
        long long sum = 0;
        int j = differences.size() - 1;
        
        while (x > 0 && j >= 0 && differences[j].first >= 0) {
            sum += differences[j].second.first;
            x--;
            j--;
        }
        
        int i = 0;
        
        while (y > 0 && i <= j && differences[i].first <= 0) {
            sum += differences[i].second.second;
            y--;
            i++;
        }
        
        while (x > 0 && j >= i) {
            sum += differences[j].second.first;
            x--;
            j--;
        }
        
        while (y > 0 && i <= j) {
            sum += differences[i].second.second;
            y--;
            i++;
        }
        
        return sum;
    }
};

int main () {
    
     return 0;
}