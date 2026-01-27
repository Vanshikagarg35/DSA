class Solution {
public:
    bool halvesAreAlike(string s) {
        int i = 0;
        int countLeft = 0;
        int countRight = 0;
        int n = s.size();
        int j = n/2;
        while(i<n/2 && j<n){
            if(isVowel(s[i])){
                countLeft++;
            }
            if(isVowel(s[j])){
                countRight++;
            }
            i++;
            j++;
        }
        return countLeft==countRight;
    }
    bool isVowel(char ch){
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
        return false;
    }
};