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

void helper(int n ){

    if(n <= 0){
        return;
    }
    cout << "Hello DSA - index :: " << n << endl;
    helper(n-1);
}

int main()
{
    int n;
    cin >> n;
    helper(n);
    return 0;
}