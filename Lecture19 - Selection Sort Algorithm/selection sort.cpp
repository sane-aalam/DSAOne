

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
    
        for(int i = 0; i<n; i++){
             int minIndex = i;
             for(int j = i+1; j<n; j++){
                 // smallest elment index,we have to store it 
                 if(arr[j] < arr[minIndex]){
                     minIndex = j;
                 }
             }
             swap(arr[i],arr[minIndex]);
        }
    }
};
