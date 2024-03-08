// Check if frequencies can be equal
// https://www.geeksforgeeks.org/problems/check-frequencies4211/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool sameFreq(string s){
        // code here
        unordered_map<char, int> mp;
        for (char ch : s){
            mp[ch]++;
        }
        vector<int> v;
        for (auto i : mp){
            v.push_back(i.second);
        }
        int cnt = 0;
        sort(v.begin(), v.end());
        int n = v.size();
        if (n == 1)  return true;

        for (int i = 0; i < n - 1; i++){
            if (i == 0 && v[i] == 1) continue;
            if (v[i] != v[i + 1]) break;
            if (i == n - 2 && v[i] == v[i + 1]) return true;
            
        }

        for (int i = 0; i < n - 1; i++){
            if (i < n - 2 && v[i] != v[i + 1])    break;
            if (i == n - 2 && (v[i] == v[i + 1] || v[i] + 1 == v[i + 1]))  return true;
        }

        return false;
    }
};

int main()
{

    return 0;
}