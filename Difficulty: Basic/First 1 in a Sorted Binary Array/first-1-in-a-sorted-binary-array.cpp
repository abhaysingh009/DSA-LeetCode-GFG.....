class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        int ans=-1;
        int st=0;int end=arr.size()-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(arr[mid]==1){
                ans=mid;
                end=mid-1;
            }else st=mid+1;
        }
        return ans;
    }
};