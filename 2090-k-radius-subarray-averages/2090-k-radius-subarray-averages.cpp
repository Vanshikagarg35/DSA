class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> op(n, -1);
        
        // Agar k bahut bada hai
        if (2 * k + 1 > n) return op;
        
        long long sum = 0;  
        int windowSize = 2 * k + 1;

        for (int i = 0; i < windowSize; i++) {
            sum += nums[i];
        }

        op[k] = sum / windowSize;

        for (int i = k + 1; i < n - k; i++) {
            sum += nums[i + k];   
            sum -= nums[i - k - 1];  
            op[i] = sum / windowSize;
        }
        
        return op;
    }
};