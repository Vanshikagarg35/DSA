class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>> t(n, vector<int>(n, 0));

        for (int i = n - 1; i >= 0; i--) {
            t[i][i] = 1;
            for (int j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    t[i][j] = 2 + t[i + 1][j - 1];
                } else {
                    t[i][j] = max(t[i + 1][j], t[i][j - 1]);
                }
            }
        }

        return t[0][n - 1];
    }
};