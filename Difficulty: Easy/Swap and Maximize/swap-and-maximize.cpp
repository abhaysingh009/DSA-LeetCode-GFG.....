class Solution {
public:
    long long maxSum(vector<int>& arr) {
        int n=arr.size();
        
        sort(arr.begin(),arr.end());
        
        vector<int> res;
        int i =0,j=n-1;
        while (i<j) {
            res.push_back(arr[i++]);
            res.push_back(arr[j--]);
        }

        if (i==j) {
            res.push_back(arr[i]);
        }
        long long sum=0;
        for (int k=0;k<n-1;k++) {
            sum+=abs(res[k]-res[k+1]);
        }
        
        sum+=abs(res[n - 1]-res[0]);
        
        return sum;
    }
};