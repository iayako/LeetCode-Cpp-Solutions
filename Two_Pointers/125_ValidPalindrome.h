// Problem 125: Valid Palindrome
// Difficulty: Easy
// Link: https://leetcode.com/problems/valid-palindrome/

#include <string>
using namespace std;
#include <iostream>

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        while (r > l) {
            if (!isalnum(s[r])) {--r; continue;}
            if (!isalnum(s[l])) {++l; continue;}
            if (tolower(s[r]) != tolower(s[l])) {return false;}
            else {--r; ++l;}
        }
        return true;
    }
};
