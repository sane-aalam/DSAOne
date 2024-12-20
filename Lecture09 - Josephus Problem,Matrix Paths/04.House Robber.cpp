
#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    int helper(int currIndex, vector<int> & arr){
        
        if(currIndex < 0){
            return 0;
        }
        if(currIndex == 0){
            return arr[0];
        }
        // Stickler the thief wants to loot money from n houses arranged in a line.
        //  He cannot loot two consecutive houses and aims to maximize his total loot.
        //  he has two choice- can loot home, can't loot home 
        
        // can loot home
        int lootHome = arr[currIndex] + helper(currIndex-2,arr);
        int CanNotLootHome = 0 + helper(currIndex-1,arr);
        // the maximum amount he can loot.
        int maximumLoot = max(lootHome,CanNotLootHome);
        return maximumLoot;
    }
  public:
    // Function to find the maximum money the thief can get.
    int findMaxSum(vector<int>& arr) {
        // Your code here
        int n = arr.size() - 1;
        // the maximum amount he can loot.
        int maximumAmount = helper(n,arr);
        return maximumAmount;
    }
};