class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int sum=0;
        int ans=0;
        int n=arr.size();
        map<int ,int>mp;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                ans=i+1;
            }
            
            if(mp.find(sum-k)!=mp.end()){
                int previdx=mp[sum-k];
                int len=i-previdx;
                
                ans=max(ans,len);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
            
            
        }
        return ans;
    }
};