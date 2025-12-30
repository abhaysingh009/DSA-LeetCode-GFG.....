class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
    priority_queue<int>q(arr.begin(),arr.end());
    
    while(--k){
        q.pop();
    }
    return q.top();
        
    }
};