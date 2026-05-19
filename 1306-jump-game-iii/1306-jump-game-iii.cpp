class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        int n = arr.size();

        vector<int> vis(n, 0);

        queue<int> q;

        q.push(start);
        vis[start] = 1;

        while(!q.empty()) {

            int idx = q.front();
            q.pop();

            // reached value 0
            if(arr[idx] == 0) {
                return true;
            }

            int forward = idx + arr[idx];
            int backward = idx - arr[idx];

            // forward jump
            if(forward < n && !vis[forward]) {
                vis[forward] = 1;
                q.push(forward);
            }

            // backward jump
            if(backward >= 0 && !vis[backward]) {
                vis[backward] = 1;
                q.push(backward);
            }
        }

        return false;
    }
};