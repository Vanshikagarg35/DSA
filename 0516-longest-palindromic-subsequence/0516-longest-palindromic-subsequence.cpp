#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int solve(int i, int j, string& s, vector<vector<int>>& dp) {
        if (i > j) return 0;
        if (i == j) return 1;

        if (dp[i][j] != -1) return dp[i][j];

        if (s[i] == s[j]) {
            int match = 2 + solve(i + 1, j - 1, s, dp);
            return dp[i][j] = match;
        } else {
            int skipLeft = solve(i + 1, j, s, dp);
            int skipRight = solve(i, j - 1, s, dp);
            return dp[i][j] = max(skipLeft, skipRight);
        }
    }

    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(0, n - 1, s, dp);
    }
};