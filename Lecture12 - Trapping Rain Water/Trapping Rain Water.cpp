
#include <bits/stdc++.h>
using namespace std;

class Solution{
    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
       
       
        // if size is not 0 and 1 then no water 
        if(n == 0 ||  n == 1)
        return 0;
       
       int maxLeft[n];
       int maxRight[n];
       
       // for maximum left element of the array & first element ko maximum man lia
       maxLeft[0] = arr[0];
       
       for(int i = 1; i<n; i++){
           maxLeft[i] = max(maxLeft[i-1], arr[i]);
       }
       
       // for miximum right element of the array last element ko maximum mana lia 
       maxRight[n-1] = arr[n-1];
       
       for(int i = n - 2; i>=0; i--){
           maxRight[i] = max(maxRight[i+1], arr[i]);
       }
       
       // water depends on the minimum block of the array 
       // minimum element(both of array  ) - block size us jagah water thodi hoga 
       int water[n];
       for(int i = 0; i<n; i++){
           water[i] = min(maxLeft[i], maxRight[i]) - arr[i];
       }

        // sum of water containg place
        long sum = 0;
        for(int i =0; i<n; i++){
            sum = sum + water[i];
        } 
        return sum;
    }
};