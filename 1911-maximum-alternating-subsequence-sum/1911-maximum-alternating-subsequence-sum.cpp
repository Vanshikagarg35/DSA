class Solution {
public:
    int n;
    long long t[1000001][2];
    long long solve(int idx , vector<int>& nums , bool iseven){
        if(idx>=nums.size()) return 0;
        if(t[idx][iseven]!=-1) return t[idx][iseven];
        int val = nums[idx];
        if(iseven == false) val = -val;
        long long take = solve(idx+1 , nums , !iseven)+val;
        long long skip = solve(idx+1 , nums, iseven);
        return t[idx][iseven] = max(take , skip);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        memset(t , -1, sizeof(t));
        return solve(0 , nums, true);

        
    }
};