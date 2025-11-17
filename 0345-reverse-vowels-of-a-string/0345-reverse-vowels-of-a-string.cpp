class Solution {
public:

    bool vowel(char c){
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }

    string reverseVowels(string s){
        int i = 0, j = s.size() - 1;

        while(i < j){

            if(vowel(s[i]) && vowel(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }

            else if(vowel(s[i]) && !vowel(s[j])){
                j--;
            }

            else if(!vowel(s[i]) && vowel(s[j])){
                i++;
            }

            else {
                i++;
                j--;
            }
        }

        return s;
    }
};
