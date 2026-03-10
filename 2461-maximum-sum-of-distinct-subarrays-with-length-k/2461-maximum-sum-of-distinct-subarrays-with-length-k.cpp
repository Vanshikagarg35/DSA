class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        long long sum = 0;    
        long long maxSum = 0; 
        int count = 0;
        vector<int> freq(100005, 0);

        while(j < nums.size()){
            sum += nums[j];
            freq[nums[j]]++;
            count++;
         
            while(freq[nums[j]]>1 || count>k) { 
                sum -= nums[i];
                freq[nums[i]]--;
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