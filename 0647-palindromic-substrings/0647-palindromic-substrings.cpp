class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector<vector<bool>> t(n, vector<bool>(n, false));
        int count = 0;
        for(int l=1; l<=n; l++){
            for(int i=0; i+l<=n; i++){
                int j = i+l-1;
                if(i==j) t[i][j] = true;
                else if(i+1==j){
                    t[i][j]=(s[i]==s[j]);
                }
                else{
                    t[i][j] = (s[i]==s[j] && t[i+1][j-1]);
                }
                count+=t[i][j];


            }
        }
        return count;
    }
};