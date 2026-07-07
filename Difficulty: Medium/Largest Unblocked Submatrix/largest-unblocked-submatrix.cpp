class Solution {
public:
    int largestArea(int n, int m, vector<vector<int>> &arr) {
        vector<int> rows, cols;

        for (auto &x : arr) {
            rows.push_back(x[0]);
            cols.push_back(x[1]);
        }

        sort(rows.begin(), rows.end());
        sort(cols.begin(), cols.end());

        int maxRow = 0, maxCol = 0;

        int prev = 0;
        for (int r : rows) {
            maxRow = max(maxRow, r - prev - 1);
            prev = r;
        }
        maxRow = max(maxRow, n - prev);

        prev = 0;
        for (int c : cols) {
            maxCol = max(maxCol, c - prev - 1);
            prev = c;
        }
        maxCol = max(maxCol, m - prev);

        return maxRow * maxCol;
    }
};