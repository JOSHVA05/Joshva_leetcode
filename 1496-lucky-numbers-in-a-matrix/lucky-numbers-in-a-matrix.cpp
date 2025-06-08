class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
         int m= matrix.size();
        int n= matrix[0].size();
        vector<int>ans;
       for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
        int minInRow = matrix[i][0];
        int maxInCol = matrix[0][j];
        for (int k = 1; k < n; k++) {
            minInRow = min(minInRow, matrix[i][k]);
        }
        for (int k = 1; k < m; k++) {
            maxInCol = max(maxInCol, matrix[k][j]);
        }
        if (matrix[i][j] == minInRow && matrix[i][j] == maxInCol) {
            ans.push_back(matrix[i][j]);
        }
    }
}
        return ans;
    }
};