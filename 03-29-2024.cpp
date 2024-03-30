// Euler Circuit in an Undirected Graph
// https://www.geeksforgeeks.org/problems/euler-circuit-in-a-directed-graph/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isEularCircuitExist(int v, vector<int>adj[]){
   
       for(int i=0;i<v;i++){
           if(adj[i].size()%2==1)
           return 0;
       }
       return 1;
    }
};

int main () {
    
     return 0;
}