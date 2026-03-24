class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int z=0;
        int n=arr.size();
        long long prod=1;
        int x=1;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                z++;
                x=i;
            }else{
                prod*=arr[i];
            }
        }
        vector<int>ans(n,0);
        if(z>1)return ans;
        if(z==1){
            ans[x]=prod;
            return ans;
        }
        for(int i=0;i<n;i++){
           ans[i]=prod/arr[i];
        }
        return ans;
        
    }
};
