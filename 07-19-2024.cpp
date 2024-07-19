// Count Smaller elements
// https://www.geeksforgeeks.org/problems/count-smaller-elements2214/1

#include<bits/stdc++.h>
using namespace std;


class Solution {
    
    void merge(vector<pair<int,int>> &p , int l , int mid , int r , vector<int>& res){
        int i = mid , j = r ;
        int k = r - l + 1;
        vector<pair<int,int>>temp(k);
        while(i >= l && j > mid){
            if(p[i].first > p[j].first){
                res[p[i].second] += (j - mid) ;
                temp[--k] = p[i--];
            }
            else{
                temp[--k] = p[j--];
            }
        }
        while(i >= l){
            temp[--k] = p[i--];
        }
        while(j > mid){
            temp[--k] = p[j--];
        }
        k = r - l + 1;
        for(int i = 0 ; i < k ; i++)
        p[i + l] = temp[i];
    }
    void mergeSort(vector<pair<int , int>>&p , int l , int r , vector<int>& res){
        if(l < r){
            int mid = (l + r) / 2;
            mergeSort(p , l , mid , res);
            mergeSort(p , mid + 1 , r , res);
            merge(p , l , mid , r , res);
        }
    }
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        int n = arr.size();
         vector<pair<int,int>>p(n);
	    for(int i = 0 ; i < n ; i++){
	        p[i] = {arr[i] , i};
	    }
	    vector<int>res(n , 0);
	    mergeSort(p , 0 , n - 1 , res);
	    return res;
    }
};

int main () {
    
     return 0;
}