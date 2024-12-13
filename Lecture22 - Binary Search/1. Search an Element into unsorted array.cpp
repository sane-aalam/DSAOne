
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int search(int target, vector<int>& arr) {
        // code here
        for(int currIndex = 0; currIndex < arr.size(); currIndex++){
            if(arr[currIndex] == target){
                return currIndex + 1;
            }
        }
        // If target value is not present into the array 
        // Array can be sorted, unsorted 
        return -1;
    }
};