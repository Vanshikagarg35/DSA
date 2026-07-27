class Solution {
public:
    int t[1001][1001];
    bool solve(int i, int j, string &s){
        if(i>=j) return true;
        if(t[i][j]!=-1)return t[i][j];
        if(s[i]==s[j]) return t[i][j] = solve(i+1 , j-1, s);
        return t[i][j] = false;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;
        memset(t , -1 , sizeof(t));
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(solve(i,j,s)) count++;
            }

        }
        return count;
    }
};