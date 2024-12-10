
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

int helper(int n ){
    // base case 
    // return contorl of program where the function is envoke
    if(n <= 1){
        return n;
    }
    // fib(n) = fib(n-1) + fib(n-2);
    int smallestElement = helper(n-1);
    int secondSmallestElement = helper(n-2);
    int NthFib = smallestElement + secondSmallestElement;
    return NthFib;
}

int main()
{
    int n;
    cin >> n;
    int FibonacciNumber= helper(n);
    cout << "Fibonacci Number" << FibonacciNumber << endl;
    return 0;
}