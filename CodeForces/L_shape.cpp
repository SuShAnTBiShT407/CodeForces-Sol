#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int longestPalindrome(string s)
{
    // Corner cases.
    if (s.size() <= 1) return s.size();

    int len = s.size();
    // state[i][j] true if s[i, j] is palindrome.
    bool state[len][len];

    // Base cases.
    for (int i = 0; i < len; i++) {
        state[i][i] = true; // dist = 0.
    }
 
    int longestPalindromeLength=1,longestPalindromeStart=0;
   
    for (int i = len - 1; i >= 0; i--) {
        for (int dist = 1; dist < len - i; dist++) {
   
        int j = dist + i;
        state[i][j] = (dist == 1) ? s[i] == s[j] : (s[i] == s[j]) && state[i + 1][j - 1];
        if (state[i][j] && j - i + 1 > longestPalindromeLength) {
            longestPalindromeLength = j - i + 1;
            longestPalindromeStart = i;
        }
   
        }
    }
    return longestPalindromeLength;
}

int main() {
    // Your code goes here;
    string s = "Hello";
    cout << longestPalindrome(s) << endl;
    return 0;
}