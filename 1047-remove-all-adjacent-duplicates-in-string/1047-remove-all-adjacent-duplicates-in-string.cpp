class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i = s.length()-1; i>=0; i--){
            if(!st.empty() && s[i]==st.top()) st.pop();
            else{
                st.push(s[i]);
            }
        }
        string t;
        while(!st.empty()){
            t+=(st.top());
            st.pop();

        }
        return t;
    }
};