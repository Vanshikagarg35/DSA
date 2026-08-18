class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1; j<nums.size(); j++){
            if(nums[i]!=nums[j]){
                i++;
                if(nums[j]==-101) continue;
                int temp = nums[j];
                nums[j] = -101;
                nums[i] = temp;
            }
        }
        return i+1;

    }
};