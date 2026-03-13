class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string temp;
        string result;
        int opencount = 0;
        int closecount = 0;
        for(int i = 0; i<s.length();i++){
            if(s[i]=='('){
                opencount++;
                temp.push_back(s[i]);
            }
            else if(s[i]!='(' && s[i]!=')') temp.push_back(s[i]);
            else if(s[i]==')'){
                if(opencount>0){
                    temp.push_back(s[i]);
                    opencount--;
                }
            }
        }
        for(int i = temp.length()-1; i>=0; i--){
            if(temp[i]!='(' && temp[i]!=')') result.push_back(temp[i]);
            else if(temp[i]==')'){
                closecount++;
                result.push_back(temp[i]);
            }
            else if(temp[i]=='('){
                if(closecount>0){
                    result.push_back(temp[i]);
                    closecount--;
                }
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};