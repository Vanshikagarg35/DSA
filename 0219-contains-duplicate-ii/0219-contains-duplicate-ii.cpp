class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;  // num -> indices

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        
        for(auto& [num, indices] : mp) {
            if(indices.size() < 2) continue;
            for(int i = 1; i < indices.size(); i++) {
                if(indices[i] - indices[i-1] <= k) {
                    return true;
                }
            }
        }
        
        return false;
    }
};