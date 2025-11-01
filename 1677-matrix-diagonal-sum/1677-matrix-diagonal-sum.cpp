class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int diagSum=0;
        for(int i=0; i<m; i++){
            diagSum = diagSum + mat[i][i];
            if(i!=n-1-i){
                diagSum+=mat[i][n-1-i];

            }

        }
        return diagSum;
    }
};