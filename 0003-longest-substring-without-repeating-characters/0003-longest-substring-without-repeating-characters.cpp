class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr(200, -1);
        int ans = 0;
        int st = 0;

        for (int i = 0; i < s.size(); i++) {
            if (arr[s[i]] >= st) {
                st = arr[s[i]] + 1;
            }

            int temp = i - st + 1;
            ans = max(ans, temp);
            arr[s[i]] = i;
        }

        return ans;
    }
};