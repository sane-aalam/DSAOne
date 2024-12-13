
// Majority Element : 
// Given an array arr. Find the majority element in the array. If no majority exists, return -1.
// A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array

#include <bits/stdc++.h>
#include <map>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // your code here
        unordered_map<int,int> mpp;
        int n = arr.size();
        
        for(auto it : arr){
            mpp[it]++;
        }
        
        for(auto & it : mpp){
            int first = it.first;
            int second = it.second;
            // appears strictly more than arr.size()/2 times in the array.
            if(second > n/2){
                return first;
            }
        }
        return -1;
    }
};

  // best(Approach)
  // inorder to reduce the space complexity of the code
    // we can use "MORE VOTING ALGORITHM"
    // 1. declare the firstCandidate,With count = 1
    // 2. if you got same vote,Then incease the count
    // 3. if you not got same vote,Then decease the count 
    // 4. repeat the process 

class Solution {
public:
    int majorityElement(vector<int>& nums) {

         int arraySize = nums.size();
         int majorityElementCandidate = 0;
         int count = 0;

         for(int index = 0; index < arraySize; index++){
           // assign new candidate using vote-1 
           // if next candidate is equal count++ otherwise count--
             if(count == 0){
                count = 1;
                majorityElementCandidate = nums[index];
             }else if(majorityElementCandidate == nums[index]){
                count++;
             }else{
                count--;
             }
         }

         int majorityElementNumberTimes = 0;

         for(int index = 0; index < arraySize; index++){
             if(nums[index] == majorityElementCandidate){
                majorityElementNumberTimes ++;
             }
         }      

         // The majority element is the element that appears more than ⌊n / 2⌋ times.
         if(majorityElementNumberTimes > arraySize/2)
            return majorityElementCandidate;
    
         return -1;
    }
};