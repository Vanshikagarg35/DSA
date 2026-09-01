class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int total_subsets = 1 << n;
        vector<vector<int>> all_subsets;
        
        for (int i = 0; i < total_subsets; i++) {
            vector<int> current_subset;
            for (int j = 0; j < n; j++) {
                if ((i >> j) & 1) {
                    current_subset.push_back(nums[j]);
                }
            }
            all_subsets.push_back(current_subset);
        }
        
        return all_subsets;
    }
};