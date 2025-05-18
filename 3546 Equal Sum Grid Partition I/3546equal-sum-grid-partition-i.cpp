class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        long long total = 0;
        vector<long long> rowSum(m, 0), colSum(n, 0);

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j) {
                total += grid[i][j];
                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
            }

        long long prefix = 0;
        for (int i = 0; i < m - 1; ++i) {
            prefix += rowSum[i];
            if (prefix * 2 == total)
                return true;
        }

        prefix = 0;
        for (int j = 0; j < n - 1; ++j) {
            prefix += colSum[j];
            if (prefix * 2 == total)
                return true;
        }

        return false;
    }
};