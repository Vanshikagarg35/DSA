class Solution {
public:
    string sortSentence(string s) {
        string temp ="";
        map<char , string> mp;
        for(int i = 0; i<s.size(); i++){
            char ch = s[i];
            if(isdigit(ch)){
                mp[ch]=temp;
                temp="";
            }
            else if(isalpha(ch)){
                temp+=ch;
            }
            else{
                continue;
            }


        }
        string result;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            result += it->second + " ";
        }
        while (result.back() == ' ') result.pop_back();
        return result;
    }
};