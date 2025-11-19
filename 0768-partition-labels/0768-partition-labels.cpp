class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        map<char, int> lastOccur;
        for(int i = 0; i < n; i++) {
            lastOccur[s[i]] = i;
        }
        
        vector<int> result;
        int start = 0;  
        int end = 0; 

        for(int i = 0; i < n; i++) {

            end = max(end, lastOccur[s[i]]);
            if(i == end) {
                result.push_back(end - start + 1);
                start = i + 1; 
            }
        }
        return result;
    }
};