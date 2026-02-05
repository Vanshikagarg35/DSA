class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int , vector<int> > mp;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &it : mp){
            vector<int> &val = it.second;

            if(val.size() < 2) continue;

            for(int j = 1; j < val.size(); j++){
                if(val[j] - val[j-1] <= k)
                    return true;
            }
        
        }
        return false;
    }
};