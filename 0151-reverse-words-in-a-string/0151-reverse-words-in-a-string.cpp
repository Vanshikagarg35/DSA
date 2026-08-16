class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        string temp = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                temp += s[i];
            } 
            else if (temp.length() > 0) {
                reverse(temp.begin(), temp.end());
                
                if (result.length() == 0) {
                    result += temp;
                } else {
                    result += " " + temp;
                }
                
                temp = "";
            }
            
        }
        if (temp.length() > 0) {
            reverse(temp.begin(), temp.end());
            if (result.length() == 0) {
                result += temp;
            } else {
                result += " " + temp;
            }
        }
        return result;
        
    }
};