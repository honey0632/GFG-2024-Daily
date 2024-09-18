// 884. Uncommon Words from Two Sentences
// https://leetcode.com/problems/uncommon-words-from-two-sentences/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    map<string,int>mp;
    
    void string_stream(string s)
    {
        stringstream ss(s);
        string word;
        while(ss>>word) mp[word]++;
    }

    vector<string> uncommonFromSentences(string s1, string s2) 
    {
        string_stream(s1);
        string_stream(s2);

        vector<string>ans;
        for(auto x:mp)
            if(x.second==1) 
                ans.push_back(x.first);

        return ans;
    }
};

int main () {
    
     return 0;
}
