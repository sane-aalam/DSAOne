

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int solve(int n,vector<int> & dp){
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }

        if(n == 2){
            return 1;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        // recurrence relation
        // T(n) = T(n-1) + T(n-2) + T(n-3)
        
        int first = solve(n-1,dp);
        int second = solve(n-2,dp);
        int thrid = solve(n-3,dp);
        int total = first + second + thrid;
        return dp[n] = total;
    }
public:
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};