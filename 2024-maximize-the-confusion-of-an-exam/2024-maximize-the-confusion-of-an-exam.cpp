class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i = 0;
        int j = 0;
        int freqT = 0;
        int freqF = 0;
        int maxCount = 0;
        while(j<answerKey.size()){
            if(answerKey[j]=='T') freqT++;
            if(answerKey[j]=='F') freqF++;
            while(min(freqT,freqF)>k){
                if(answerKey[i]=='T') freqT--;
                if(answerKey[i]=='F') freqF--;
                i++;
            }
            maxCount = max(maxCount , j-i+1);
            j++;
        }
        return maxCount;
    }
};