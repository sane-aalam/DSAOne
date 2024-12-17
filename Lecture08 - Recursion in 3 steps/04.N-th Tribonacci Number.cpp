

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int solve(int n){
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }

        if(n == 2){
            return 1;
        }
        // recurrence relation
        // T(n) = T(n-1) + T(n-2) + T(n-3)
        int first = solve(n-1);
        int second = solve(n-2);
        int thrid = solve(n-3);
        int total = first + second + thrid;
        return total;
    }
public:
    int tribonacci(int n) {
        return solve(n);
    }
};