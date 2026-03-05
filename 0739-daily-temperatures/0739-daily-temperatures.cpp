class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        bool found = false;
        for(int i =0; i<temperatures.size(); i++){
            found = false;
            for(int j = i+1; j<temperatures.size(); j++){
                if(temperatures[i]<temperatures[j]){
                    temperatures[i] = j-i;
                    found = true;
                    break;

                }
            }
            if(!found) temperatures[i] = 0; 

        }
        return temperatures;
    }
};