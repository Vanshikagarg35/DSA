class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        vector<string>r;
        int n = strs[0].size();
        for(int i=0; i<n; i++){
            string s="";
            for(string str : strs){
                s.push_back(str[i]);
            }
            r.push_back(s);
        }
        int count = 0;
        for(string t : r){
            string sortedStr = t;
            sort(sortedStr.begin(),sortedStr.end());
            if(sortedStr!=t) count++;
        }
        return count;
    }
};