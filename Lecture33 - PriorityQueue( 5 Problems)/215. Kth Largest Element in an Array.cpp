
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

       //** initializes a priority queue max heap
        // priority_queue<int> maxheap;

        //** Min-heap: When the elements are stored in non-decreasing order and the smallest element will be the one that will be deleted first, i.e smallest element has the highest priority.
        //initializes a priority queue (min-heap)
        
        // priority_queue<int> pq; ADD -> (vector<int>,greater<int>>)
        priority_queue<int,vector<int>,greater<int>>pq;
    
        for(int i = 0; i<nums.size(); i++){
            pq.push( nums[i]);
            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();
    }
};