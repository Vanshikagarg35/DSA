class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int openCount = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                openCount++;
            } else if (s[i] == ')') {
                if (openCount > 0) {
                    openCount--; 
                } else {
                    s[i] = '*'; 
                }
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (openCount > 0 && s[i] == '(') {
                s[i] = '*'; 
                openCount--;
            }
        }
        string result = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != '*') {
                result.push_back(s[i]);
            }
        }
        
        return result;
    }
};