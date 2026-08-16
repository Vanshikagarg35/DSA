class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_map;
        prefix_map[0] = 1;
        
        int count = 0;
        int current_sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            current_sum += nums[i];
            
            if (prefix_map.find(current_sum - k) != prefix_map.end()) {
                count += prefix_map[current_sum - k];
            }
            
            prefix_map[current_sum]++;
        }
        
        return count;
    }
};