class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
    
        int n=arr.size();
        int sum=0;
        int i=n-k;
        int j=i;
        for(;i<n;i++){
            sum+=arr[i];
        }
        int ans=sum;
        cout<<ans<<"\n";
        
        i=0;
        while(j<n){
            sum-=arr[j];
            sum+=arr[i++];
            ans=max(ans,sum);
            cout<<ans<<"\n";
            j++;
        }
            
        return ans;
    }
};