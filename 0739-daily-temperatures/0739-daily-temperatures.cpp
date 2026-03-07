class Solution{
public:

    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result;
        reverse(temperatures.begin(), temperatures.end());

        stack<pair<int, int>> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() && st.top().first <= temperatures[i]) {
                st.pop();
            }

            if (st.empty()) {
                result.push_back(0);
            } else {
                result.push_back(i - st.top().second);
            }

            st.push({temperatures[i], i});
        }

        reverse(result.begin(), result.end());
        
        return result;
    }
};