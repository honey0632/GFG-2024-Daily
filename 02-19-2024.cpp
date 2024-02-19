// Game with String
// https://www.geeksforgeeks.org/problems/game-with-string4100/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minValue(string s, int k){
        vector<int> v(26,0);
        
        for(auto it: s){
            v[it-'a']++;
        }
        priority_queue<int> pq;
        
        for(auto it:v){
            if(it){
                pq.push(it);
            }
        }

        while(k>0){
            int top = pq.top();
            pq.pop();
            if(top - pq.top() >= k){
                top -= k;
                pq.push(top);
                k=0;
            }
            else{
                int diff = top - pq.top()+1;
                k-=diff;
                top -=diff;
                pq.push(top);
            }
        }
        int ans =0;
        while(!pq.empty()){
            int  x = pq.top();
            pq.pop();
            ans+= x*x;
        }

        return ans;
        
    }
};

int main () {
    
     return 0;
}