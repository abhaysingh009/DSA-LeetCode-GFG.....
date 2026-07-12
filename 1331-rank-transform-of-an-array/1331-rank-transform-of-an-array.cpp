class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         int n = arr.size();
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    for(int i = 0; i < n; i++) {
        pq.push({arr[i], i});
    }

    vector<int> ans(n);

    int temp = 1;
    int prev = INT_MIN;
    int prevRank = 0;

    while(!pq.empty()) {
        auto [val, idx] = pq.top();
        pq.pop();

        if(val != prev) {
            ans[idx] = temp;
            prevRank = temp;
            temp++;
        }
        else {
            ans[idx] = prevRank;
        }

        prev = val;
    }

    return ans;
    }
};