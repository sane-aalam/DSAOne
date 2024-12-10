#include <bits/stdc++.h>
using namespace std;


int helper(int n ){
    // base case 
    // return contorl of program where the function is envoke
    if(n < 0){
        return 0;
    }
    return n + helper(n-1);
}

int main()
{
    int n;
    cin >> n;
    int NthNaturalNumber = helper(n);
    cout << "Nth Natural Number -> " << NthNaturalNumber  << endl;
    return 0;
}