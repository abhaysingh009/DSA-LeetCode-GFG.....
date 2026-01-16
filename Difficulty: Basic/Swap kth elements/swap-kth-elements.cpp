class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        int n = arr.size();
        
       
        if (k > n) return;
        
        
        int i = k - 1;      
        int j = n - k;      
        
        swap(arr[i], arr[j]);
    }
};
