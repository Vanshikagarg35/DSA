class Solution {
public:
    bool isVowel(char c) {

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;

        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }

    string reverseVowels(string s) {

        vector<char> vowelling;

        for (char ch : s) {
            if (isVowel(ch)) {
                vowelling.push_back(ch);
            }
        }

        reverse(vowelling.begin(), vowelling.end());

        int i = 0;
        for (char& ch : s) {
            if (isVowel(ch)) {
                ch = vowelling[i];
                i++;
            }
        }

        return s;
    }
};
