class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int i = 0;
        int j = 0;
        int count = 0;
        int maxcount = 0;
        while(j<fruits.size()){
            mp[fruits[j]]++;
            while(mp.size()>2){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0){
                    mp.erase(fruits[i]);
                }
                i++;
                count--;

            }
            count++;
            maxcount = max(maxcount, count);
            j++;
        }
        return maxcount;
    }
};