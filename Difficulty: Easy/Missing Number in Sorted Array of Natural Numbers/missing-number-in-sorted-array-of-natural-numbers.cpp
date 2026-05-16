class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int i=0;int j=n-1;
        int ans=n+1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==mid+1){
                i=mid+1;
            }else{
                j=mid-1;
                ans=mid+1;
            }
        }
        return ans;
        
    }
};