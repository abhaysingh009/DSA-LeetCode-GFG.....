class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        
        int i=0;
        int j=a.size()-1;int n2=b.size()-1;
        int ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(a[mid]==b[mid]){
                i=mid+1;
            }else{
                ans=mid;
                j=mid-1;
            }
        }
        return ans;
    }
};