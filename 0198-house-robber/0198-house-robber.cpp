class Solution {
public:
    int solve(int n, vector<int>& nums, vector<int>& t) {
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        if(t[n] != -1) return t[n];
        
        int take = solve(n - 2, nums, t) + nums[n - 1];
        int skip = solve(n - 1, nums, t);
        
        return t[n] = max(take, skip);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> t(n + 1, -1);
        return solve(n, nums, t);
    }
};