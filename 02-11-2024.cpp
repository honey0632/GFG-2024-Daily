// Recamans sequence
// https://www.geeksforgeeks.org/problems/recamans-sequence4856/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> recamanSequence(int n){
        unordered_set<int> st;
        vector<int> ans;
        ans.push_back(0);
        st.insert(0);
        
        for(int i=1;i<n;i++){
            
            if(ans[i-1]-i >0 && st.find(ans[i-1]-i)==st.end()){
                st.insert(ans[i-1]-i);
                ans.push_back(ans[i-1]-i);
            }
            else {
                st.insert(ans[i-1]+i);
                ans.push_back(ans[i-1]+i);
            }
        }
        return ans;
    }
};

int main () {
  
   return 0;
}