#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// Linear Search:
// TC - 0(N)
// SC - 0(1)
class Solution {
  public:
    int search(int target, vector<int>& arr) {
        // code here
        for(int currIndex = 0; currIndex < arr.size(); currIndex++){
            if(arr[currIndex] == target){
                return currIndex;
            }
        }
        // If target value is not present into the array 
        // Array can be sorted, unsorted 
        return -1;
    }
};



// Iterative Code:
class Solution {
public:
// a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
// Time complexity - 0(LogN)
// Space Complexity - 0(1)
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        int mid = start + (end-start)/2;
        while(start <= end){
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // update the mid index 
            mid = start + (end-start)/2;
        }
        return -1;
    }
};

// Recursive Code:

class Solution {
public:
// a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
// Time complexity - 0(LogN)
// Space Complexity - 0(1)
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        int mid = start + (end-start)/2;
        while(start <= end){
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // update the mid index 
            mid = start + (end-start)/2;
        }
        return -1;
    }
};





class Solution {
private:
    int recursiveBinarySearch(
        vector<int>& nums, int start, int end,int target){

            if(start <= end){
                return -1;
            }
            int mid = start + (end-start)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                // left recursive call
                return recursiveBinarySearch(nums,mid+1,end,target);
            }else{
                // right recursive call
                return recursiveBinarySearch(nums,start,mid-1,target);
            }
    }
public:
// Time complexity - 0(LogN)
// Space Complexity - 0(LogN)
    int search(vector<int>& nums, int target) {
        int startIndex = 0;
        int endIndex = nums.size() - 1;
        int resultIndex = recursiveBinarySearch(nums,startIndex,endIndex,target);
        return resultIndex;
    }
};


