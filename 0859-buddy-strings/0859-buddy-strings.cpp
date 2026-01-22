class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;

        if (s == goal) {
            unordered_set<char> st;
            for (char c : s) {
                st.insert(c);
            }
            return st.size() < s.size();  // duplicate check
        }

        vector<int> t;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                t.push_back(i);
            }
        }

        if (t.size() != 2) return false;

        int i = t[0], j = t[1];
        return s[i] == goal[j] && s[j] == goal[i];
    }
};
