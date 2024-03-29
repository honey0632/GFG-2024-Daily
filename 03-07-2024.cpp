// Longest repeating and non-overlapping substring
// https://www.geeksforgeeks.org/problems/longest-repeating-and-non-overlapping-substring3421/1

#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
  public:
    string longestSubstring(string s, int n) {
        string answer;
        int i=0,j=0;
        int cur=0;
        while(i<n and j<n)
        {
            string str = s.substr(i,j-i+1);
            if(s.find(str,j+1)!=string::npos)
            {
                int len = str.size();
                if(len>cur)
                {
                    cur=len;
                    answer=str;
                }
                j++;
            }
            else
                i++;
        }
        if(answer.empty())
            return "-1";
        return answer;
    }
};
*/

class Solution {
  public:
    string longestSubstring(string s, int N) {
        
        int LCSRe[N+1][N+1];
 
        // Setting all to 0
        memset(LCSRe, 0, sizeof(LCSRe));
     
        string res; // To store result
        int res_length  = 0; // To store length of result
     
        // building table in bottom-up manner
        int i, index = 0;
        for (i=1; i<=N; i++)
        {
            for (int j=i+1; j<=N; j++)
            {
                // (j-i) > LCSRe[i-1][j-1] to remove
                // overlapping
                if (s[i-1] == s[j-1] &&
                    LCSRe[i-1][j-1] < (j - i))
                {
                    LCSRe[i][j] = LCSRe[i-1][j-1] + 1;
     
                    // updating maximum length of the
                    // substring and updating the finishing
                    // index of the suffix
                    if (LCSRe[i][j] > res_length)
                    {
                        res_length = LCSRe[i][j];
                        index = max(i, index);
                    }
                }
                else
                    LCSRe[i][j] = 0;
            }
        }
     
        // If we have non-empty result, then insert all
        // characters from first character to last
        // character of string
        if (res_length > 0)
            for (i = index - res_length + 1; i <= index; i++)
                res.push_back(s[i-1]);
        if(res=="")
            res="-1";
        return res;
    }
};

int main () {
    
     return 0;
}