// Power Set
// https://www.geeksforgeeks.org/problems/power-set4302/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(string &s, int i, string &temp, vector<string> &ans)
    {
        if (i == s.size()) {
            if (temp != "") ans.push_back(temp);
            return;
        }
        temp += s[i];
        solve(s, i + 1, temp, ans);
        temp.pop_back();
        solve(s, i + 1, temp, ans);
    }
    vector<string> AllPossibleStrings(string s)
    {
        // Code here
        vector<string> ans;
        string temp = "";
        solve(s, 0, temp, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{

    return 0;
}