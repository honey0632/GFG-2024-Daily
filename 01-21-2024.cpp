// Vertex Cover
// https://www.geeksforgeeks.org/problems/vertex-cover/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int vertexCover(int n, vector<pair<int, int>> &edges)
  {
    int ans = n;
    for (int mask = 0; mask < (1 << n); mask++)
    {
      bool ok = true;
      for (auto &it : edges)
      {
        int u = it.first, v = it.second;
        u--;
        v--;
        if (!(mask & (1 << u)) and !(mask & (1 << v)))
        {
          ok = false;
          break;
        }
      }
      if (ok)
        ans = min(ans, __builtin_popcount(mask));
    }
    return ans;
  }
};

int main()
{

  return 0;
}