class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if(n%2!=0) return{};
        map<int,int>mp;
        vector<int>result;
        sort(changed.begin(),changed.end());
        for(int nums : changed){
            if(nums%2==0 && mp[nums/2]>0){
                result.push_back(nums/2);
                mp[nums/2]--;
            }
            else{
                mp[nums]++;
            }
        }
        if(result.size()!=n/2) return{};
        return result;
        
    }
};