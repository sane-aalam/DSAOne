

#include <bits/stdc++.h>
using namespace std;

// You are given an m x n integer array grid.
//  There is a robot initially located at the top-left corner (i.e., grid[0][0]).
// The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). 
// The robot can only move either down or right at any point in time.
class Solution {
private:
   int helper(vector<vector<int>> & obstacleGrid,int i, int j){

       if(i == 0 && j == 0){
          return 1;
       } 

       if(i < 0 or j < 0){
          return 0;
       }
      
      // A path that the robot takes cannot include any square that is an obstacle.
      // An obstacle and space are marked as 1 or 0 respectively in grid.
       if(obstacleGrid[i][j] == 1){
          return 0;
       }

       int left = helper(obstacleGrid,i,j-1);
       int top = helper(obstacleGrid,i-1,j);
       // sum up all paths
       return left + top;
   }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        int i = n -1;
        int j = m - 1;
        int totalNumberWays = helper(obstacleGrid,i,j);
        // TLE (gives), we have to apply DP.
        return totalNumberWays;
    }
};