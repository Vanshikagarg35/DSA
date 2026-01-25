class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> op(n, -1);

        int i = 0, j = 0;
        long long sum = 0;
        int window = 2*k + 1;

        if (window > n) return op;

        while (j < n) {
            sum += nums[j];

            if (j - i + 1 == window) {
                op[i + k] = sum / window; 
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return op;
    }
};
