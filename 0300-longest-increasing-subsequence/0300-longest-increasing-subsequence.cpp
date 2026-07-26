class Solution {
public:
    int n;
    int t[2501][2501];
    int solve(int previdx , int curridx , vector<int> &nums){
        if(curridx>=n) return 0;
        if(previdx!=-1 && t[previdx][curridx]!=-1) return t[previdx][curridx];
        int take = 0;
        if(previdx==-1 || nums[curridx]>nums[previdx]){
            take = 1+solve(curridx , curridx+1 , nums);
        }
        int skip = solve(previdx , curridx+1 , nums);
        if(previdx != -1)
            t[previdx][curridx] =  max(take, skip);
        return max(take , skip);
    }

    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        memset(t,-1,sizeof(t));
        return solve(-1 , 0 , nums);
    }
};