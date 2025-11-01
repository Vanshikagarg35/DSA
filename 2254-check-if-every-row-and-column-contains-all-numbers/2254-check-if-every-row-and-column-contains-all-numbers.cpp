class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        //check row
        for(int i=0; i<matrix.size(); i++){
            unordered_set<char>rowSet;
            for(int j=0; j<matrix[0].size(); j++){
                char val = matrix[i][j];
                if(val!='.'){
                    if(rowSet.count(val)) return false;
                    rowSet.insert(val);
                }
            }
        }
        //check col
        for(int j=0; j<matrix.size(); j++){
            unordered_set<char>colSet;
            for(int i=0; i<matrix[0].size(); i++){
                char val = matrix[i][j];
                if(val!='.'){
                    if(colSet.count(val)) return false;
                    colSet.insert(val);
                }
            }
        }
        return true;
    }
};