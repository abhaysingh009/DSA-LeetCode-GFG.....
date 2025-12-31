class Solution {
  public:
    long long maxDiamonds(vector<int>& arr, int k) {
        priority_queue<int>pq(arr.begin(),arr.end());
        int sum=0;
        while(k--){
           int x=pq.top();pq.pop();
           pq.push(x/2);
           sum+=x;
           
        }
        return sum;
        
    }
};