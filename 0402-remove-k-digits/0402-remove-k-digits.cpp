class Solution {
public:
    string removeKdigits(string num, int k) {
        int i = 0;
        
        while(k > 0 && num.size() > 0) {

            if(i >= num.size() - 1) {
                num.erase(num.size() - 1, 1);
                k--;
                if(i > 0) i--;
                continue;
            }
            if(num[i] > num[i+1]) {
                num.erase(i, 1);
                k--;
                if(i > 0) i--; 
            } 
            else {
                i++;
            }
        }

        while(num.size() > 0 && num[0] == '0') {
            num.erase(0, 1);
        }
        if(num == "") return "0";
        
        return num;
    }
};