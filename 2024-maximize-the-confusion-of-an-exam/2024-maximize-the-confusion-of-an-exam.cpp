class Solution {
public:
    
    int solve(string &s, int k, char real) {
        int i = 0;
        int freq = 0;     
        int maxLen = 0;

        for(int j = 0; j < s.size(); j++) {

            if(s[j] == real) {
                freq++;
            }

            while(freq > k) {
                if(s[i] == real) {
                    freq--;
                }
                i++;
            }

            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }

    int maxConsecutiveAnswers(string answerKey, int k) {
        int ans1 = solve(answerKey, k, 'T');
        int ans2 = solve(answerKey, k, 'F');
        return max(ans1, ans2);
    }
};
