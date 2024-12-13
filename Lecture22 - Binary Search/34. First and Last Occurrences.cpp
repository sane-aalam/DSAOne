#include <bits/stdc++.h>
using namespace std;

// Algorithm
// Seaching Element, if found the element,then you need to continue seaching both side
// FirstOccurrence => left side of the array 
// LastOccurrence => right side of the array

class Solution {
  private:
   int firstOccurrenceSearch(vector<int>& arr, int target){
       int start = 0;
       int end = arr.size() - 1;
       int mid = start + (end-start)/2;
       
       int firstPositionIndex = -1;
       while(start <= end){
           if(arr[mid] == target){
               firstPositionIndex = mid;
               end = mid - 1;
           }else if(arr[mid] < target){
               start = mid + 1;
           }else{
               end = mid - 1;
           }
           mid = start + (end-start)/2;
       }
       return firstPositionIndex;
   }
   int secondOccurrenceSearch(vector<int>& arr, int target){
       int start = 0;
       int end = arr.size() - 1;
       int mid = start + (end-start)/2;
       
       int LastPositionIndex = -1;
       while(start <= end){
           if(arr[mid] == target){
               LastPositionIndex = mid;
               start = mid + 1;
           }else if(arr[mid] < target){
               start = mid + 1;
           }else{
               end = mid - 1;
           }
           mid = start + (end-start)/2;
       }
       return LastPositionIndex;
   }
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        // update the target value using x
        // good variable naming help to write clean code 
        int target = x;
        int firstOccurrence = firstOccurrenceSearch(arr,target);
        int secondOccurrence = secondOccurrenceSearch(arr,target);
        
        return {firstOccurrence,secondOccurrence};
    }
};