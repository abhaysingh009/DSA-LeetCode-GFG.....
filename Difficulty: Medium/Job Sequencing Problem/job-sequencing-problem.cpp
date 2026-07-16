class Solution {
public:
    vector<int> parent;

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = deadline.size();

        vector<pair<int,int>> jobs;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i]});
            mx = max(mx, deadline[i]);
        }

        sort(jobs.rbegin(), jobs.rend());

        parent.resize(mx + 1);
        for (int i = 0; i <= mx; i++)
            parent[i] = i;

        int cnt = 0, ans = 0;

        for (auto &job : jobs) {
            int p = job.first;
            int d = job.second;

            int slot = find(d);

            if (slot > 0) {
                cnt++;
                ans += p;
                parent[slot] = find(slot - 1);
            }
        }

        return {cnt, ans};
    }
};