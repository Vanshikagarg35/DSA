class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";
        
        vector<vector<bool>> t(n, vector<bool>(n, false));
        int maxl = 1;
        int index = 0;
       
        for(int i=0; i<n; i++){
            t[i][i] = true;
        }
        
        for(int l=2; l<=n; l++){
            for(int i=0; i+l-1<n; i++){
                int j = i+l-1;
                
                if(s[i]==s[j] && l==2){
                    t[i][j] = true;
                    maxl = 2;
                    index = i;
                }
                else if(s[i]==s[j] && t[i+1][j-1]==true){
                    t[i][j] = true;
                    if(j-i+1 > maxl){
                        maxl = j-i+1;
                        index = i;
                    }
                } else {
                    t[i][j] = false;
                }
            }
        }
        return s.substr(index, maxl);
    }
};