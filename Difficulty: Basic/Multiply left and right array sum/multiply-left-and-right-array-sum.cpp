class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int left=0;
        int right=0;
        int n=arr.size();
        for (int i=0;i<n/2;i++){
            left+=arr[i];
            right+=arr[n-1-i];
        }
        n%2!=0?(right+=arr[n/2]):n=n;
        return left*right;
    }
};