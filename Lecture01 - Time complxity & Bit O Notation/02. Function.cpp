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

void printingArray(vector<int> nums){
    int currIndex = 0;
    while(currIndex < nums.size()){
        cout << nums[currIndex] << " ";
        currIndex = currIndex + 1;
    }
    cout << endl;
}

int main()
{
    cout << "print the function" << endl;
    vector<int> nums = {11,12,14,15,191,101};
    printingArray(nums);
    cout << "end of function" << endl;
    return 0;
}