class Solution {
public:
    int minimumLength(string s) {
        int i =0;
        int j = s.size()-1;
        while(i<j && s[i]==s[j]){
            char c = s[i];
            while(i<j && c==s[i+1]){
                i++;
            }
            while(i<j && c==s[j-1]){
                j--;
            }
            i++;
            j--;
        }
        
        return max(0,j-i+1);
    }
};