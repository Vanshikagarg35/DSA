class Solution {
public:
    string removeStars(string s) {
        int i = 0;
        int j = 0;
        while(i < s.length()){
            if(s[i]!='*'){
                s[j]=s[i];
                i++;
                j++;
            }
            else if(s[i]=='*'){
                j--;
                i++;
            }
        }
        return s.substr(0,j);
        
    }
};