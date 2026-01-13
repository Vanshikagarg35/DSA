class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs[0].size();
        int count = 0;
        for(int i=0; i<n; i++){
            string s="";
            for(string str : strs){
                s.push_back(str[i]);
            }
            string sortedStr = s;
            sort(sortedStr.begin(),sortedStr.end());
            if(sortedStr!=s) count++;
        }
        return count;
       
    }
};