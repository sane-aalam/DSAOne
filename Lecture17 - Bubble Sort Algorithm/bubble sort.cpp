

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        
        bool isswapOrNot = false;
        // number of rounds (run)
        for(int i = 0; i<n; i++){
            // compare to adj-Elements
             for(int j = 0; j<n-i-1; j++){
                // 5 > 4 
                // we have to swap the next elements 
                 if(arr[j] > arr[j+1]){
                     isswapOrNot = true;
                     swap(arr[j],arr[j+1]);
                 }
             }
        }
        
        if(isswapOrNot == true){
            return;
        }
    }
};