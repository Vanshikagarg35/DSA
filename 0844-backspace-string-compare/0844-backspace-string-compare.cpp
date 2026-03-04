class Solution {
public:
    string cleanString(string str) {
    reverse(str.begin(), str.end());
    
    string result = "";
    int skip = 0; 
    for(char c : str) {
        if(c == '#') {
            skip += 1;
        } 
        else {
            if(skip > 0) {
                skip -= 1; 
            } 
            else {
                result.push_back(c); 
            }
        }
    }
    reverse(result.begin(), result.end()); 
    
    return result;
}
    bool backspaceCompare(string s, string t) {
        return cleanString(s) == cleanString(t);
        
    }
};