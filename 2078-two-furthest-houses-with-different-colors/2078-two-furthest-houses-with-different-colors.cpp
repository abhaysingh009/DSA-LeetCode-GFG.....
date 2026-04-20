class Solution {
public:
    int maxDistance(vector<int>& arr) {
        
        int n=arr.size();
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=arr[0]){
                ans=max(ans,i);
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[n-1]){
                ans=max(ans,n-1-i);
                break;
            }
        }
        return ans;
        
    }
};