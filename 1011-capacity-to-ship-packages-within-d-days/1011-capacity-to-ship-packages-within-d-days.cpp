class Solution {
public:
bool check(vector<int>&arr,long long mid,int k){
    long long sum=0;
    int n=arr.size();
    int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]>mid)return 0;
        if((sum+arr[i])<=mid){
            sum+=arr[i];
        }else {
            count++;
            sum=arr[i];
        }
    }
    return count<=k;
}
    int shipWithinDays(vector<int>& weights, int days) {
        long long low=0;
        long long high=1e8;
        long long ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(check(weights,mid,days)){
                ans=mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
    }
};