class Solution {
public:
    int maximumProduct(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       int n=arr.size()-1;
       int max1=arr[n]*arr[n-1]*arr[n-2];
       int max2=arr[0]*arr[1]*arr[n];
       return max(max1,max2);
    }
};