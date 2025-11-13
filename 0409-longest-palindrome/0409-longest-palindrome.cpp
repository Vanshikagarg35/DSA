class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        bool hasOdd = false;
        int length = 0;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        for(auto it : mp){
            int freq = it.second;
            if(freq % 2 == 0){
                length+=freq;
            }
            else{
                hasOdd = true;
                length+=freq-1;

            }
        }
        if (hasOdd){
            length+=1;
        }
        return length;
    }
};