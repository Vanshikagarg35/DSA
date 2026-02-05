class Solution {
public:
    bool allZero(vector<int> &counter){
        for(int & italy : counter){
            if(italy!=0) return false;

        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int k = p.length();
        int n = s.length();
        int i = 0;
        int j = 0;
        vector<int>counter(26,0);
        vector<int>output;
        for(char &ichha :p){
            counter[ichha-'a']++;
        }
        while(j<n){
            counter[s[j]-'a']--;
            if(j-i+1==k){
                
                if(allZero(counter)){
                    output.push_back(i);

                }
                counter[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return output;
    }
};