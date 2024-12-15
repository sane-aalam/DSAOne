


#include <bits/stdc++.h>
using namespace std;

// #DSAONE
class Solution {
public:
    int findKthSmallest(vector<int>& nums, int k) {

       //** initializes a priority queue max heap
        priority_queue<int> maxHeap;
    
        for(int i = 0; i<nums.size(); i++){
            maxHeap.push( nums[i]);
            // DSAONE - 
            // you know Heapify working!
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
        }
        // retun the maximum elemnt into the (heap)
        return maxHeap.top();
    }
};