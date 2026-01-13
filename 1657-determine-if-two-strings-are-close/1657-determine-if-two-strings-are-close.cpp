class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size())
            return false;
        unordered_map<char,int>mp1,mp2;
        for(char c1 : word1){
            mp1[c1]++;

        }
        for(char c2 : word2){
            mp2[c2]++;
        }
        for(auto it : mp1){
            if(mp2.find(it.first)==mp2.end()) return false;

        }
        vector<int> f1 ,f2;
        for( auto it : mp1){
            f1.push_back(it.second);
        }
        for(auto it : mp2){
            f2.push_back(it.second);
        }
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        return f1==f2;
    }
};
