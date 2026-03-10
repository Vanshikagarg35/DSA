class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        long long sum = 0;    
        long long maxSum = 0; 
        int count = 0;
        unordered_set<int> freq;

        while(j < nums.size()){
            while(freq.find(nums[j])!=freq.end()){
                sum-=nums[i];
                freq.erase(nums[i]);
                count--;
                i++;

            }
            sum += nums[j];
            freq.insert(nums[j]);
            count++;
         
            while(count>k) { 
                sum -= nums[i];
                freq.erase(nums[i]);
                count--;
                i++;
            }

            if(count == k){
                maxSum = max(sum, maxSum);
            }
            
            j++;
        }
        return maxSum;
    }
};