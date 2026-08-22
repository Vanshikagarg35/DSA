class Solution {
public:
    int reverse(int x) {
        int newN = 0;
        
        while (x != 0) {
            int rem = x % 10;
            
            if (newN > INT_MAX / 10 || newN < INT_MIN / 10) {
                return 0;
            }
            
            newN = (newN * 10) + rem;
            x = x / 10;
        }
        
        return newN;
    }
};