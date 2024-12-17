#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Two pointer Algorithm 
        int areNonZeroElement = 0;
        for(int currindex = 0; currindex < nums.size(); currindex++){
            if(nums[currindex] != 0){
                swap(nums[areNonZeroElement], nums[currindex]);
                areNonZeroElement++;
            }
        }
    }
};