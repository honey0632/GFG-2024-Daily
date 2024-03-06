// Search Pattern (Rabin-Karp Algorithm)
// https://www.geeksforgeeks.org/problems/search-pattern-rabin-karp-algorithm--141631/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector<int> search(string pattern, string text){
            vector<int> ans;
            int pos = text.find(pattern, 0);
            while (pos != string::npos) 
            {
                ans.push_back(pos+1);
                pos = text.find(pattern, pos + 1);
            }
            return ans;
        }
     
};

int main () {
    
     return 0;
}