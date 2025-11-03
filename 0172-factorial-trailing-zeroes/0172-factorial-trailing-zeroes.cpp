class Solution {
public:
    int trailingZeroes(int n) {
        int N=n;
        int count=0;
        while(N>0){
            N=N/5;
            count+=N;

        }
        return count;
    }
};