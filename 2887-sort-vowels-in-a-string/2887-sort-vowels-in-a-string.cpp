class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        for(int i=0; i<s.length(); i++){
            if(isVowel(s[i])){
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=0; i<s.length(); i++){
            if(isVowel(s[i])){
                s[i]=v[j];
                j++;

            }
        }
        return s;
    }
    bool isVowel(char c){
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            return true;
        }
        else{
            return false;
        }
    }
};