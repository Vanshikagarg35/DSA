class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //Check row
        for(int i=0;i<9 ; i++){
            unordered_set<char> rowSet;
            for(int j=0; j<9; j++){
                char val = board[i][j];
                if(val!='.'){
                    if(rowSet.count(val)) return false;
                    rowSet.insert(val);
                }

            }
        }
        //Check col
        for(int j=0; j<9; j++){
            unordered_set<char> colSet;
            for(int i=0; i<9; i++){
                char val = board[i][j];
                if(val!='.'){
                    if(colSet.count(val)) return false;
                    colSet.insert(val);
                }

            }
        }
        //check 3*3 box
        for(int boxRow=0; boxRow<9; boxRow+=3){
            for(int boxCol=0; boxCol<9; boxCol+=3){
                unordered_set<char>boxSet;
                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        char val = board[boxRow+i][boxCol+j];
                        if(val!='.'){
                            if(boxSet.count(val)) return false;
                            boxSet.insert(val);
                        }
                    }
                }
            }
        }
        return true;
    }
};