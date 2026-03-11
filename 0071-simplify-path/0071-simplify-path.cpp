class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path); // String ko stream mein daala taaki split kar sakein
        string token;
        vector<string> st;     // Vector ko stack ki tarah use karenge taaki words store ho
        
        // getline(ss, token, '/') ka matlab: ss se padho, token mein dalo, aur '/' aane par ruko
        while(getline(ss, token, '/')) {
            if(token == "" || token == ".") {
                continue; // Khali jagah ya current directory aayi toh aage badho
            }
            else if(token == "..") {
                if(!st.empty()) {
                    st.pop_back(); // Parent directory mein jana hai, toh aakhiri folder hatao
                }
            }
            else {
                st.push_back(token); // Normal folder name hai, toh list mein daal do
            }
        }
        
        // Agar stack khali hai toh root "/" return karo
        if(st.empty()) return "/";
        
        // Aakhir mein saare folders ko "/" ke saath jod lo
        string result = "";
        for(string &dir : st) {
            result += "/" + dir;
        }
        
        return result;
    }
};