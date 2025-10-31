class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return false;
         int first = std::numeric_limits<int>::max();
        int second = std::numeric_limits<int>::max();
    
        for (int num : nums) {
            if (num <= first) {
                first = num;  
            } else if (num <= second) {
                second = num;  
            } else {
              
                return true;
            }
        }
        return false;
    }
    
    
};