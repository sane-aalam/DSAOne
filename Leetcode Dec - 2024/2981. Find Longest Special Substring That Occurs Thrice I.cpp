#include <bits/stdc++.h>
using namespace std;

// problem statement-1
// I love to solve this type problem
// 1. You are given a string s that consists of lowercase English letters.
// 2. A string is called special if it is made up of only a single character. For example, the string "abc" is not special, whereas the strings "ddd", "zz", and "f" are special.
// 3. (solution 2 lines me pucha hai,) kya tu speacial or kya tu special string hay nahi!
// 4. we have to store all special strings 
// 5. Return the length of the longest special substring of s which occurs at least thrice, or -1 if no special substring occurs at least thrice.
// 6. sting.count >= 3  


class Solution {
public:
    int maximumLength(string s) {
        int n = s.length();
        map<string,int> mpp;
       // mp.first = strings
       // mp.second = int 

        // try to find all possible substrings 
        for(int i = 0; i<n; i++){
            string curr;
            for(int j = i; j<n; j++){
                //  A string is called special if it is made up of only a single character
                //  We have to store all special char into the mp
                //  Generate all subStrings 
                // whereas the strings "ddd", "zz", and "f" are special.
                // privous Element == currentElement (which means you got one special strings)
                if(curr.size() == 0 || curr.back() == s[j]){
                    curr.push_back(s[j]);
                    mpp[curr]++;
                }else{
                // string "aab" are not special char
                // If There is not special char, you have to break the right now 
                    break;
                }
            }
        }
        // Map(Data structure)
        // Map in C++ Standard Template Library (STL)
        // Key->value of pair
        // "aaa" -> 2
        // "aaaa" -> 1
        // "aa" -> 5

        int result = 0;
        for(auto &it : mpp){
            string str = it.first;
            int count = it.second;
            if(count >= 3 && str.length() > result){
                result = str.length();
            }
        }
    
    // Return the length of the longest special substring of s which occurs at least thrice, or -1 
        // return result == 0 ? -1 : result;
       if(result == 0) 
          return -1;
       else 
          return result;
    }
};