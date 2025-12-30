class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
     priority_queue<int>q(arr.begin(),arr.end());
    while(--k){
    q.pop();
    }
    return q.top();
        
    }
};