class Solution {
public:
    int minDist(vector<int>& arr, int x, int y) {
        int prev = -1;
        int ans = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            
            if (arr[i] == x || arr[i] == y) {

                if (prev != -1 && arr[i] != arr[prev]) {
                    ans = min(ans, i - prev);
                }

                prev = i;
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};