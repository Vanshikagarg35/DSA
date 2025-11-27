class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        string doubled = s + s;  

        int idx = doubled.find(goal);

        if (idx < doubled.size()) 
            return true;

        return false;
    }
};
