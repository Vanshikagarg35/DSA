class Solution {
public:
    vector<int> generateRow(vector<int>& prevRow) {
        vector<int> newRow;
        newRow.push_back(1);
        for (int i = 0; i < prevRow.size() - 1; i++) {
            newRow.push_back(prevRow[i] + prevRow[i + 1]);
        }

        newRow.push_back(1);
        return newRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        if (numRows == 0)
            return result;

        result.push_back({1});
        

        for (int i = 1; i < numRows; i++) {
            vector<int> newRow = generateRow(result[i - 1]);
            result.push_back(newRow);
        }

        return result;
    }
};