class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        string result1,result2;
        for(char &c : s){
            if(c!='#') st.push(c);
            else if(c=='#'){
                if(!st.empty()) st.pop();
                else{
                    continue;
                }
                
            } 
        }
        while(!st.empty()){
            result1+=st.top();
            st.pop();
        }
        for(char &c : t){
            if(c!='#') st.push(c);
            else if(c=='#'){
                if(!st.empty()) st.pop();
                else{
                    continue;
                }
                
            } 
        }
        while(!st.empty()){
            result2+=st.top();
            st.pop();
        }
        return (result1==result2);
    }
};