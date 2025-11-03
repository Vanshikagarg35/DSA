class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        int sum = sq_sum(n);
        while(sum!=1){
            if(seen.count(sum)){
                return false;
            }
            seen.insert(sum);
            sum = sq_sum(sum);

        }
        return sum==1;
        
    }
    int sq_sum(int n){
        int sum =0;
        while(n>0){
            int d = n % 10;
            sum = sum + d*d;
            n=n/10;
        }
        return sum;
    }
};