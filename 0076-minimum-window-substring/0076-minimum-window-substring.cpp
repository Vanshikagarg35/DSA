class Solution {
public:
    bool allZeroNeg(vector<int>& counter) {
        for(int i : counter) {
            if(i > 0) return false;
        }
        return true;
    }
    
    string minWindow(string s, string t) {
        int n = s.size();
        vector<int> counter(128, 0);  
        
        for(char ch : t) {
            counter[ch]++; 
        }
        
        int i = 0, j = 0;
        int minLen = INT_MAX;
        int minStart = 0;
        
        while(j < n) {
            counter[s[j]]--;
            
            while(allZeroNeg(counter)) {
                if(j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    minStart = i;
                }
                counter[s[i]]++;
                i++;
            }
            
            j++;
        }
        
        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};