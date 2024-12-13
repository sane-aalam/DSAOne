
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code 
        int n = arr.size();
        for(int i = 1; i<n; i++){
           int j=i;
           // select the elements,
           // put into the correct orders
           while (j>0 && arr[j-1]>arr[j]){
               int temp=arr[j-1];
               arr[j-1]=arr[j];
               arr[j]=temp;
               j--;
           }
        }
    }
};