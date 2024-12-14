#include <bits/stdc++.h>
using namespace std;

// binary search algorithm
int binarySearch(vector<int> arr, int target, int start, int end){
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (target < arr[mid]) {
            end = mid - 1;
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else {
            return mid - 1;
        }
    }
    return -1;
}
int findPos(vector<int> arr, int size, int target)
{
    int start = 0;
    int end = 1;
    
    while(arr[end] < target){
        start  = end;
        end = 2 * end;
    }

    return binarySearch(arr,target,start,end);
}
int main(){
    // consider given array is infinite range array 
    // we have to search an element into infinite sorted array
    vector<int> arr =  { 3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170 };
    int size = arr.size();
    int target = 170;
    int ans = findPos(arr, size, target);
    if (ans == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
    return 0;
}