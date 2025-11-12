// User function template for C++

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        
        int n = arr.size();
    d = d % n; // in case d > n
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
    }
};