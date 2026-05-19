class Solution {
public:
    int minJumps(vector<int>& arr) {
        
        int n = arr.size();

        // already at last index
        if(n == 1) return 0;

        // value -> all indices having that value
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        queue<pair<int,int>> q;
        vector<int> vis(n, 0);

        q.push({0, 0});
        vis[0] = 1;

        while(!q.empty()) {

            auto [idx, steps] = q.front();
            q.pop();

            // reached last index
            if(idx == n - 1) {
                return steps;
            }

            // jump to idx - 1
            if(idx - 1 >= 0 && !vis[idx - 1]) {
                vis[idx - 1] = 1;
                q.push({idx - 1, steps + 1});
            }

            // jump to idx + 1
            if(idx + 1 < n && !vis[idx + 1]) {
                vis[idx + 1] = 1;
                q.push({idx + 1, steps + 1});
            }

            // jump to same value indices
            for(int next : mp[arr[idx]]) {

                if(!vis[next]) {
                    vis[next] = 1;
                    q.push({next, steps + 1});
                }
            }

            // important optimization
            mp[arr[idx]].clear();
        }

        return -1;
    }
};