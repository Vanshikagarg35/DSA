class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()) return false;
        
        unordered_set<char> sett(begin(s), end(s));
        if(s == goal && s.length() != sett.size()) return true;
        
        vector<int> st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != goal[i]) {
                st.push_back(i);
            }
        }
        
        if(st.size() == 2) {
            int i = st[0];
            int j = st[1];
    
            if(s[i] == goal[j] && s[j] == goal[i]) return true;
            
        }
        return false;
    }
};