class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue<pair<int ,vector<int>>>pq;
        
        for(int i=0;i<arr.size();i++){
            int dist=pow(arr[i][0],2)+pow(arr[i][1],2);
            pq.push({dist,arr[i]});
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
            
        }
        return ans;
    }
};