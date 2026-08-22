class Solution {
public:
    int longestPalindrome(string s) {
        int count[128] = {0};
        int length = 0;
        bool hasOdd = false;
        
        for (char c : s) {
            count[c]++;
        }
        
        for (int freq : count) {
            if (freq % 2 == 0) {
                length += freq;
            } else {
                length += freq - 1;
                hasOdd = true;
            }
        }
        
        if (hasOdd) {
            length += 1;
        }
        
        return length;
    }
};