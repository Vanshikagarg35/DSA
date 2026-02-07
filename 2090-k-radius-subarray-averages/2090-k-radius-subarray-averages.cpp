class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        long long sum = 0;
        vector<int>avg(nums.size(),-1);
        while(j<nums.size()){
            while((j-i+1)>2*k+1){
                sum-=nums[i];
                i++;
            }
            sum+=nums[j];
            if((j-i+1)==2*k+1) avg[i+k]=sum/(2*k+1);
            j++; 
        }
        return avg;
    }
};