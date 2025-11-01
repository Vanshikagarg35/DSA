class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        unordered_map<int, pair<int,int>> position;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                position[mat[i][j]] = {i, j};
            }
        }

        unordered_map<int,int> row;
        unordered_map<int,int> col;
        
        for(int a = 0; a < arr.size(); a++){

            int i = position[arr[a]].first;
            int j = position[arr[a]].second;
            
            row[i]++;
            col[j]++;
            
            if(row[i] == n) return a;
            if(col[j] == m) return a;
        }
        
        return -1;
    }
};