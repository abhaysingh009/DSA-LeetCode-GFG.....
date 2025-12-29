class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        int i=0;
        int j=arr.size()-1;
        int idx=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==1){
                idx=mid;
                j=mid-1;
            }
            else if(arr[mid]==0){
                i=mid+1;
            }
        }
        return idx;
        
    }
};