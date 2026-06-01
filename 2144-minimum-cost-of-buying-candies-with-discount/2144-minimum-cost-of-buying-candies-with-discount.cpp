class Solution {
public:
    int minimumCost(vector<int>& arr) {
        priority_queue<int>pq(arr.begin(),arr.end());
        int count=0;
        int ans=0;
        while(!pq.empty()){
            if(count!=2){
                ans+=pq.top();pq.pop();
                count++;
            }else{
                count=0;
                pq.pop();
            }
        }
        return ans;
        
    }
};