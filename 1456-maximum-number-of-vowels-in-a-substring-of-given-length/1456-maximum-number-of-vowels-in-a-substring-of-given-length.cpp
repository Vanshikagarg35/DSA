class Solution {
public:
    bool isVowel(char &ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        int maxCount = 0;
        while(j<s.size()){
            while((j-i+1)>k){
                if(isVowel(s[i])) count -- ;
                i++;
            }
            if(isVowel(s[j])) count++;
            if((j-i+1)==k) maxCount = max(maxCount , count);
            j++;

        }
        return maxCount;
    }
};