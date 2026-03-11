class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0;
        int j = 0;
        int m = pushed.size();
        int n = popped.size();
        stack<int>st;
        while(i<m && j<n){
            st.push(pushed[i]);
            while(!st.empty() && st.top()==popped[j]){
                st.pop();
                
                j++;
            }
            i++;
        }
        return st.empty();
    }
};