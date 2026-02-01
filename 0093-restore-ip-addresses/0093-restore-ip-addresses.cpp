class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        int n = s.length();
        vector<string>result;
        if(n>12) return result;
        int part = 0;
        string curr = "";
        solve(s,0,part,curr,n,result);
        return result;
    }
    void solve(string s , int idx , int part , string curr,int n,vector <string> &result){
        if(idx==n && part== 4){
            result.push_back(curr.substr(0,curr.length()-1));
            return;
        }
        if(idx+1<=n ) solve(s,idx+1, part+1 , curr + s.substr(idx , 1)+".",n,result);
        if(idx+2<=n && isValid(s.substr(idx,2))) solve(s,idx+2,part+1,curr+s.substr(idx,2)+".",n,result);

        if(idx+3<=n &&isValid(s.substr(idx,3))) solve(s,idx+3,part+1,curr+s.substr(idx,3)+".",n,result);
    }
    bool isValid(string s){
        if(s[0]=='0') return false;
        int val = stoi(s);
        return val<=255;
    }

};