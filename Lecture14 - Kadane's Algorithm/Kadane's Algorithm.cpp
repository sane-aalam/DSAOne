
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int maximum_sum = 0;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            int current_sum = 0;
            for(int j = i; j<n; j++){
                current_sum = current_sum + arr[j];
                if(current_sum > maximum_sum){
                    maximum_sum = current_sum;
                }
            }
        }
        return maximum_sum;
    }
};

// Optimization: 
// The algorithm maintains a current_sum variable to store the sum of the current subarray.
// As we iterate through the array:
// If the current_sumbecomes negative, we discard it and start a new subarray from the current element.
// Otherwise, we update the current_sum by adding the current element.
// We continuously update the max_sum variable with the maximum of current_sum and the previously stored max_sum.
// ----------------------------------------------------------
// Logic of algorithm
// if currentsum is gonna to negative
// then you need to re-start the process -> NO (we are gonna to negative side), we have to maximize the sum
// right now negative sum,
// if(sum is gonna to negative), restart the process
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int current_sum = 0;
        int maximum_sum = INT_MIN;
        
        for(int currIndex = 0; currIndex < arr.size(); currIndex++){
            // currentsum+=arr[i]
            current_sum = current_sum + arr[currIndex];
            if(current_sum > maximum_sum){
                maximum_sum = current_sum;
            }
            if(current_sum < 0){
                current_sum = 0;
            }
        }
        
        return maximum_sum;
    }
};