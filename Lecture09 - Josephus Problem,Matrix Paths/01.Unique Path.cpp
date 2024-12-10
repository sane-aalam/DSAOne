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

// Given a A X B matrix with your initial position at the top-left cell, find the number of possible unique paths to reach the bottom-right cell of the matrix from the initial position.

// Note: Possible moves can be either down or right at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].

// possible moves can be either down or right
// but what if we change direction up or left
// (n,m) -> (0,0)
// (destination) -> (source) reached 

class Solution{
private:
    int helper(int index1, int index2){

        // base case
        // you have reached scoure, you have got one path
        if(index1 == 0 && index2 == 0){
            return 1;
        }
        // out of limit of matrix 
        if(index1 < 0 or index2 < 0){
            return 0;
        }

        // possible moves can be either up or left
        int up = helper(index1-1, index2);
        int left = helper(index1, index2-1);
        return up + left;
    }
public:
    int NumberOfPath(int a, int b)
    {
        int n = a;
        int m = b;
        int possiblePaths =  helper(n-1,m-1);
        return possiblePaths;
    }
};

int main(){
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // taking dimensions of the matrix
        int a, b;
        cin >> a >> b;
        Solution ob;
        // calling NumberOfPath() function
        cout << ob.NumberOfPath(a, b) << endl;
        cout << "~" << "\n";
    }
}
