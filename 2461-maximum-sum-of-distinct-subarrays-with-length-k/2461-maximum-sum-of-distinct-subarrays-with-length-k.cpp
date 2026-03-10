class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0;
        long long sum = 0, maxSum = 0;
        vector<int> freq(100005, 0);

        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            freq[nums[j]]++;

            while (freq[nums[j]] > 1 || (j - i + 1) > k) { 
                sum -= nums[i];
                freq[nums[i]]--;
                i++;
            }
            if (j - i + 1 == k) {
                maxSum = max(sum, maxSum);
            }
        }
        
        return maxSum;
    }
};