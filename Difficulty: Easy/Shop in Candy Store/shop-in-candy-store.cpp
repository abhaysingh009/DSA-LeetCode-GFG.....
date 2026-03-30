class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int ans1=0;
        int ans2=0;
        int n=arr.size();
        int tc=0;
        int i=0;
        while(tc<n){
            ans1+=arr[i];
            ans2+=arr[n-1-i];
            tc+=k+1;
            i++;
        }
        
       
        return {ans1,ans2};
        
    }
};
// 1 3 9 16
// 4 7 9 13 13 17