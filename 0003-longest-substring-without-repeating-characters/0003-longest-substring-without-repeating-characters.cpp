class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int left = 0;
        int max_len = 0;
        
        for (int right = 0; right < s.length(); right++) {
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }
            
            charSet.insert(s[right]);
            max_len = max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};