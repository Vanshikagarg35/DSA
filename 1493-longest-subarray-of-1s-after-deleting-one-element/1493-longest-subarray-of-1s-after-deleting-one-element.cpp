class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int count = 0;
        int maxCount = 0;
        while(j<nums.size()){
            while(count>1){
                if(nums[i]==0) count--;
                i++;  
            }
            if(nums[j]==0) count++;
            if(count<=1) maxCount = max(maxCount , j-i);
            j++;
        }
        return maxCount;
    }
};