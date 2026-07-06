class Solution {
public:
    int findMinDiff(vector<int>& arr, int m) {
        sort(arr.begin(), arr.end());

        int ans = INT_MAX;

        for (int i = 0; i <= arr.size() - m; i++) {
            ans = min(ans, arr[i + m - 1] - arr[i]);
        }

        return ans;
    }
};