class Solution {
public:
    bool rotateString(string s, string goal) {
        int count =0;
        string result = "";
        while(count < s.size()){
            result = rotateclockwise(s);
            count++;
            if(result == goal){
                return true;
            }
            else{
                result = rotateclockwise(result);
            }
        }
        return false;
    }
    string rotateclockwise(string &s){
        char c = s[s.size()-1];
        int index = s.size()-2;
        while(index>=0){
            s[index+1] = s[index];
            index--;

        }
        s[0]=c;
        return s;
    }
};