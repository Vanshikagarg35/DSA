class Solution {
public:
    string pushDominoes(string s) {
        int n = s.size();
        vector<int> left(n, 0), right(n, 0);

        int force = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') force = n;
            else if (s[i] == 'L') force = 0;
            else force = max(force - 1, 0);
            right[i] = force;
        }

        force = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'L') force = n;
            else if (s[i] == 'R') force = 0;
            else force = max(force - 1, 0);
            left[i] = force;
        }

        string ans = s;
        for (int i = 0; i < n; i++) {
            if (left[i] == right[i]) ans[i] = s[i];
            else if (right[i] > left[i]) ans[i] = 'R';
            else ans[i] = 'L';
        }
        
        return ans;
    }
};
