
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to search a given integer in a matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        int target = x;
        int start = 0;
        int end = m - 1;
        
        while(start >= 0 && start < n && end >= 0 && end < m){
            if(mat[start][end] == target){
                return 1;
            }else if(mat[start][end] < target){
                start++;
            }else{
                end--;
            }
        }
        return 0;
    }
};