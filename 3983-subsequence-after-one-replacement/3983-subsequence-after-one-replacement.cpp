class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.size(), m = t.size();

        vector<int> pre(m+ 1, 0);
        int i = 0;
        for (int j = 0; j < m; j++) {
            if (i < n && s[i] == t[j]) i++;
            pre[j + 1] = i;
        }

        vector<int> suf(m + 1, 0);
        i = n - 1;
        int cnt = 0;
        for (int j = m - 1; j > 0; j--) {
            if (i > 0 && s[i] == t[j]) {
                i--;
                cnt++;
            }
            suf[j] = cnt;
        }

        if (pre[m] == n) return true;

        for (int j = 0; j < m; j++) {
            int left = pre[j];
            int right = suf[j + 1];

            if (left + 1 + right >= n)
                return true;
        }

        return false;
    }
};