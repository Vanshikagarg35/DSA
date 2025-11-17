class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0 , j = nums.size()-1;
        int maxpair = 0;
        while(i<j){
            maxpair = max(maxpair , nums[i]+nums[j]);
            i++;
            j--;
        }
        return maxpair;
    }

};