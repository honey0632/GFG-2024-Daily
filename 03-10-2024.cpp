// Remove all duplicates from a given string
// https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	string removeDuplicates(string str) {
	    string ans="";
	    unordered_set<char> st;
	    
	    for(auto it: str){
	        if(st.find(it)==st.end()){
	            st.insert(it);
	            ans+=it;
	        }
	    }
	    
	    return ans;
	}
};

int main () {
    
     return 0;
}