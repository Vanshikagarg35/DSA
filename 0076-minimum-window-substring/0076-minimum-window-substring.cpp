class Solution {
public:
    bool zeroOne(vector<int> &counter){
        for(int &i : counter){
            if(i>0) return false;

        }
        return true;
    }
    string minWindow(string s, string t) {
        int i = 0;
        int j = 0;
        int minSize =INT_MAX;
        int minStart=0;
        vector<int>counter(128,0);
        for(int i = 0; i<t.length(); i++){
            counter[t[i]]++;
        }
        while(j<s.length()){
            counter[s[j]]--;
            while(zeroOne(counter)){
                if(j - i + 1 < minSize){
                    minSize = j - i + 1;
                    minStart = i;
                }
                counter[s[i]]++;
                i++;
            }
            j++;
        }
        return minSize == INT_MAX? "":s.substr(minStart,minSize);
    }
};